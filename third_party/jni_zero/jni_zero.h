// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef JNI_ZERO_JNI_ZERO_H_
#define JNI_ZERO_JNI_ZERO_H_

#include <jni.h>

#include <atomic>
#include <string>
#include <type_traits>
#include <vector>

#include "third_party/jni_zero/jni_export.h"
#include "third_party/jni_zero/logging.h"

#if defined(__i386__)
// Dalvik JIT generated code doesn't guarantee 16-byte stack alignment on
// x86 - use force_align_arg_pointer to realign the stack at the JNI
// boundary. crbug.com/655248
#define JNI_BOUNDARY_EXPORT \
  extern "C" __attribute__((visibility("default"), force_align_arg_pointer))
#else
#define JNI_BOUNDARY_EXPORT extern "C" __attribute__((visibility("default")))
#endif

#if defined(JNI_ZERO_MULTIPLEXING_ENABLED)
#define JNI_POSSIBLE_BOUNDARY_EXPORT extern "C" __attribute__((always_inline))
#else
#define JNI_POSSIBLE_BOUNDARY_EXPORT JNI_BOUNDARY_EXPORT
#endif

#if defined(__cpp_concepts) && __cpp_concepts >= 201907L
#define JNI_ZERO_ENABLE_TYPE_CONVERSIONS 1
#else
#define JNI_ZERO_ENABLE_TYPE_CONVERSIONS 0
#endif

// Wrapper used to receive int when calling Java from native.
// The wrapper disallows automatic conversion of long to int.
// This is to avoid a common anti-pattern where a Java int is used
// to receive a native pointer. Please use a Java long to receive
// native pointers, so that the code works on both 32-bit and 64-bit
// platforms. Note the wrapper allows other lossy conversions into
// jint that could be consider anti-patterns, such as from size_t.

// Checking is only done in debugging builds.

#ifdef NDEBUG

typedef jint JniIntWrapper;

// This inline is sufficiently trivial that it does not change the
// final code generated by g++.
inline jint as_jint(JniIntWrapper wrapper) {
  return wrapper;
}

#else

class JniIntWrapper {
 public:
  JniIntWrapper() : i_(0) {}
  JniIntWrapper(int i) : i_(i) {}
  JniIntWrapper(const JniIntWrapper& ji) : i_(ji.i_) {}
  template <class T>
  JniIntWrapper(const T& t) : i_(t) {}
  jint as_jint() const { return i_; }

 private:
  // If you get an "is private" error at the line below it is because you used
  // an implicit conversion to convert a long to an int when calling Java.
  // We disallow this, as a common anti-pattern allows converting a native
  // pointer (intptr_t) to a Java int. Please use a Java long to represent
  // a native pointer. If you want a lossy conversion, please use an
  // explicit conversion in your C++ code. Note an error is only seen when
  // compiling on a 64-bit platform, as intptr_t is indistinguishable from
  // int on 32-bit platforms.
  JniIntWrapper(long);
  jint i_;
};

inline jint as_jint(const JniIntWrapper& wrapper) {
  return wrapper.as_jint();
}

#endif  // NDEBUG

namespace jni_zero {

// Commonly needed jclasses:
extern JNI_ZERO_COMPONENT_BUILD_EXPORT jclass g_object_class;
extern JNI_ZERO_COMPONENT_BUILD_EXPORT jclass g_string_class;

// Creates a new local reference frame, in which at least a given number of
// local references can be created. Note that local references already created
// in previous local frames are still valid in the current local frame.
class JNI_ZERO_COMPONENT_BUILD_EXPORT ScopedJavaLocalFrame {
 public:
  explicit ScopedJavaLocalFrame(JNIEnv* env);
  ScopedJavaLocalFrame(JNIEnv* env, int capacity);

  ScopedJavaLocalFrame(const ScopedJavaLocalFrame&) = delete;
  ScopedJavaLocalFrame& operator=(const ScopedJavaLocalFrame&) = delete;

  ~ScopedJavaLocalFrame();

 private:
  // This class is only good for use on the thread it was created on so
  // it's safe to cache the non-threadsafe JNIEnv* inside this object.
  JNIEnv* env_;
};

// Forward declare the generic java reference template class.
template <typename T>
class JavaRef;

// Template specialization of JavaRef, which acts as the base class for all
// other JavaRef<> template types. This allows you to e.g. pass
// ScopedJavaLocalRef<jstring> into a function taking const JavaRef<jobject>&
template <>
class JNI_ZERO_COMPONENT_BUILD_EXPORT JavaRef<jobject> {
 public:
  // Initializes a null reference.
  constexpr JavaRef() {}

  // Allow nullptr to be converted to JavaRef. This avoids having to declare an
  // empty JavaRef just to pass null to a function, and makes C++ "nullptr" and
  // Java "null" equivalent.
  constexpr JavaRef(std::nullptr_t) {}

  JavaRef(const JavaRef&) = delete;
  JavaRef& operator=(const JavaRef&) = delete;

  // Public to allow destruction of null JavaRef objects.
  ~JavaRef() {}

  // TODO(torne): maybe rename this to get() for consistency with unique_ptr
  // once there's fewer unnecessary uses of it in the codebase.
  jobject obj() const { return obj_; }

  explicit operator bool() const { return obj_ != nullptr; }

  // Deprecated. Just use bool conversion.
  // TODO(torne): replace usage and remove this.
  bool is_null() const { return obj_ == nullptr; }

 protected:
// Takes ownership of the |obj| reference passed; requires it to be a local
// reference type.
#if JNI_ZERO_DCHECK_IS_ON()
  // Implementation contains a DCHECK; implement out-of-line when DCHECK_IS_ON.
  JavaRef(JNIEnv* env, jobject obj);
#else
  JavaRef(JNIEnv* env, jobject obj) : obj_(obj) {}
#endif

  // Used for move semantics. obj_ must have been released first if non-null.
  void steal(JavaRef&& other) {
    obj_ = other.obj_;
    other.obj_ = nullptr;
  }

  // The following are implementation detail convenience methods, for
  // use by the sub-classes.
  JNIEnv* SetNewLocalRef(JNIEnv* env, jobject obj);
  void SetNewGlobalRef(JNIEnv* env, jobject obj);
  void ResetLocalRef(JNIEnv* env);
  void ResetGlobalRef();

  jobject ReleaseInternal() {
    jobject obj = obj_;
    obj_ = nullptr;
    return obj;
  }

 private:
  jobject obj_ = nullptr;
};

// Forward declare the object array reader for the convenience function.
template <typename T>
class JavaObjectArrayReader;

// Generic base class for ScopedJavaLocalRef and ScopedJavaGlobalRef. Useful
// for allowing functions to accept a reference without having to mandate
// whether it is a local or global type.
template <typename T>
class JavaRef : public JavaRef<jobject> {
 public:
  constexpr JavaRef() {}
  constexpr JavaRef(std::nullptr_t) {}

  JavaRef(const JavaRef&) = delete;
  JavaRef& operator=(const JavaRef&) = delete;

  ~JavaRef() {}

  T obj() const { return static_cast<T>(JavaRef<jobject>::obj()); }

  // Get a JavaObjectArrayReader for the array pointed to by this reference.
  // Only defined for JavaRef<jobjectArray>.
  // You must pass the type of the array elements (usually jobject) as the
  // template parameter.
  template <typename ElementType,
            typename T_ = T,
            typename = std::enable_if_t<std::is_same_v<T_, jobjectArray>>>
  JavaObjectArrayReader<ElementType> ReadElements() const {
    return JavaObjectArrayReader<ElementType>(*this);
  }

 protected:
  JavaRef(JNIEnv* env, T obj) : JavaRef<jobject>(env, obj) {}
};

// Holds a local reference to a JNI method parameter.
// Method parameters should not be deleted, and so this class exists purely to
// wrap them as a JavaRef<T> in the JNI binding generator. Do not create
// instances manually.
template <typename T>
class JavaParamRef : public JavaRef<T> {
 public:
  // Assumes that |obj| is a parameter passed to a JNI method from Java.
  // Does not assume ownership as parameters should not be deleted.
  JavaParamRef(JNIEnv* env, T obj) : JavaRef<T>(env, obj) {}

  // Allow nullptr to be converted to JavaParamRef. Some unit tests call JNI
  // methods directly from C++ and pass null for objects which are not actually
  // used by the implementation (e.g. the caller object); allow this to keep
  // working.
  JavaParamRef(std::nullptr_t) {}

  JavaParamRef(const JavaParamRef&) = delete;
  JavaParamRef& operator=(const JavaParamRef&) = delete;

  ~JavaParamRef() {}

  // TODO(torne): remove this cast once we're using JavaRef consistently.
  // http://crbug.com/506850
  operator T() const { return JavaRef<T>::obj(); }
};

// Holds a local reference to a Java object. The local reference is scoped
// to the lifetime of this object.
// Instances of this class may hold onto any JNIEnv passed into it until
// destroyed. Therefore, since a JNIEnv is only suitable for use on a single
// thread, objects of this class must be created, used, and destroyed, on a
// single thread.
// Therefore, this class should only be used as a stack-based object and from a
// single thread. If you wish to have the reference outlive the current
// callstack (e.g. as a class member) or you wish to pass it across threads,
// use a ScopedJavaGlobalRef instead.
template <typename T>
class ScopedJavaLocalRef : public JavaRef<T> {
 public:
  // Take ownership of a bare jobject. This does not create a new reference.
  // This should only be used by JNI helper functions, or in cases where code
  // must call JNIEnv methods directly.
  static ScopedJavaLocalRef Adopt(JNIEnv* env, T obj) {
    return ScopedJavaLocalRef(env, obj);
  }

  constexpr ScopedJavaLocalRef() {}
  constexpr ScopedJavaLocalRef(std::nullptr_t) {}

  // Copy constructor. This is required in addition to the copy conversion
  // constructor below.
  ScopedJavaLocalRef(const ScopedJavaLocalRef& other) : env_(other.env_) {
    JavaRef<T>::SetNewLocalRef(env_, other.obj());
  }

  // Copy conversion constructor.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaLocalRef(const ScopedJavaLocalRef<U>& other) : env_(other.env_) {
    JavaRef<T>::SetNewLocalRef(env_, other.obj());
  }

  // Move constructor. This is required in addition to the move conversion
  // constructor below.
  ScopedJavaLocalRef(ScopedJavaLocalRef&& other) : env_(other.env_) {
    JavaRef<T>::steal(std::move(other));
  }

  // Move conversion constructor.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaLocalRef(ScopedJavaLocalRef<U>&& other) : env_(other.env_) {
    JavaRef<T>::steal(std::move(other));
  }

  // Constructor for other JavaRef types.
  explicit ScopedJavaLocalRef(const JavaRef<T>& other) { Reset(other); }

  ScopedJavaLocalRef(JNIEnv* env, const JavaRef<T>& other) { Reset(other); }

  // Assumes that |obj| is a local reference to a Java object and takes
  // ownership of this local reference.
  // TODO(torne): make legitimate uses call Adopt() instead, and make this
  // private.
  ScopedJavaLocalRef(JNIEnv* env, T obj) : JavaRef<T>(env, obj), env_(env) {}

  ~ScopedJavaLocalRef() { Reset(); }

  // Null assignment, for disambiguation.
  ScopedJavaLocalRef& operator=(std::nullptr_t) {
    Reset();
    return *this;
  }

  // Copy assignment.
  ScopedJavaLocalRef& operator=(const ScopedJavaLocalRef& other) {
    Reset(other);
    return *this;
  }

  // Copy conversion assignment.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaLocalRef& operator=(const ScopedJavaLocalRef<U>& other) {
    Reset(other);
    return *this;
  }

  // Move assignment.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaLocalRef& operator=(ScopedJavaLocalRef<U>&& other) {
    env_ = other.env_;
    Reset();
    JavaRef<T>::steal(std::move(other));
    return *this;
  }

  // Assignment for other JavaRef types.
  ScopedJavaLocalRef& operator=(const JavaRef<T>& other) {
    Reset(other);
    return *this;
  }

  void Reset() { JavaRef<T>::ResetLocalRef(env_); }

  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  void Reset(const ScopedJavaLocalRef<U>& other) {
    // We can copy over env_ here as |other| instance must be from the same
    // thread as |this| local ref. (See class comment for multi-threading
    // limitations, and alternatives).
    env_ = JavaRef<T>::SetNewLocalRef(other.env_, other.obj());
  }

  void Reset(const JavaRef<T>& other) {
    // If |env_| was not yet set (is still null) it will be attached to the
    // current thread in SetNewLocalRef().
    env_ = JavaRef<T>::SetNewLocalRef(env_, other.obj());
  }

  // Releases the local reference to the caller. The caller *must* delete the
  // local reference when it is done with it. Note that calling a Java method
  // is *not* a transfer of ownership and Release() should not be used.
  T Release() { return static_cast<T>(JavaRef<T>::ReleaseInternal()); }

  // Alias for Release(). For use in templates when global refs are invalid.
  T ReleaseLocal() { return static_cast<T>(JavaRef<T>::ReleaseInternal()); }

 private:
  // This class is only good for use on the thread it was created on so
  // it's safe to cache the non-threadsafe JNIEnv* inside this object.
  JNIEnv* env_ = nullptr;

  // Prevent ScopedJavaLocalRef(JNIEnv*, T obj) from being used to take
  // ownership of a JavaParamRef's underlying object - parameters are not
  // allowed to be deleted and so should not be owned by ScopedJavaLocalRef.
  // TODO(torne): this can be removed once JavaParamRef no longer has an
  // implicit conversion back to T.
  ScopedJavaLocalRef(JNIEnv* env, const JavaParamRef<T>& other);

  // Friend required to get env_ from conversions.
  template <typename U>
  friend class ScopedJavaLocalRef;

  // Avoids JavaObjectArrayReader having to accept and store its own env.
  template <typename U>
  friend class JavaObjectArrayReader;
};

// Holds a global reference to a Java object. The global reference is scoped
// to the lifetime of this object. This class does not hold onto any JNIEnv*
// passed to it, hence it is safe to use across threads (within the constraints
// imposed by the underlying Java object that it references).
template <typename T>
class ScopedJavaGlobalRef : public JavaRef<T> {
 public:
  constexpr ScopedJavaGlobalRef() {}
  constexpr ScopedJavaGlobalRef(std::nullptr_t) {}

  // Copy constructor. This is required in addition to the copy conversion
  // constructor below.
  ScopedJavaGlobalRef(const ScopedJavaGlobalRef& other) { Reset(other); }

  // Copy conversion constructor.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaGlobalRef(const ScopedJavaGlobalRef<U>& other) {
    Reset(other);
  }

  // Move constructor. This is required in addition to the move conversion
  // constructor below.
  ScopedJavaGlobalRef(ScopedJavaGlobalRef&& other) {
    JavaRef<T>::steal(std::move(other));
  }

  // Move conversion constructor.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaGlobalRef(ScopedJavaGlobalRef<U>&& other) {
    JavaRef<T>::steal(std::move(other));
  }

  // Conversion constructor for other JavaRef types.
  explicit ScopedJavaGlobalRef(const JavaRef<T>& other) { Reset(other); }

  ScopedJavaGlobalRef(JNIEnv* env, const JavaRef<T>& other) {
    JavaRef<T>::SetNewGlobalRef(env, other.obj());
  }

  // Create a new global reference to the object.
  // Deprecated. Don't use bare jobjects; use a JavaRef as the input.
  ScopedJavaGlobalRef(JNIEnv* env, T obj) { Reset(env, obj); }

  ~ScopedJavaGlobalRef() { Reset(); }

  // Null assignment, for disambiguation.
  ScopedJavaGlobalRef& operator=(std::nullptr_t) {
    Reset();
    return *this;
  }

  // Copy assignment.
  ScopedJavaGlobalRef& operator=(const ScopedJavaGlobalRef& other) {
    Reset(other);
    return *this;
  }

  // Copy conversion assignment.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaGlobalRef& operator=(const ScopedJavaGlobalRef<U>& other) {
    Reset(other);
    return *this;
  }

  // Move assignment.
  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  ScopedJavaGlobalRef& operator=(ScopedJavaGlobalRef<U>&& other) {
    Reset();
    JavaRef<T>::steal(std::move(other));
    return *this;
  }

  // Assignment for other JavaRef types.
  ScopedJavaGlobalRef& operator=(const JavaRef<T>& other) {
    Reset(other);
    return *this;
  }

  void Reset() { JavaRef<T>::ResetGlobalRef(); }

  template <typename U,
            typename = std::enable_if_t<std::is_convertible_v<U, T>>>
  void Reset(const ScopedJavaGlobalRef<U>& other) {
    Reset(nullptr, other.obj());
  }

  void Reset(const JavaRef<T>& other) { Reset(nullptr, other.obj()); }

  // Deprecated. You can just use Reset(const JavaRef&).
  void Reset(JNIEnv* env, const JavaParamRef<T>& other) {
    Reset(env, other.obj());
  }

  // Deprecated. Don't use bare jobjects; use a JavaRef as the input.
  void Reset(JNIEnv* env, T obj) { JavaRef<T>::SetNewGlobalRef(env, obj); }

  // Releases the global reference to the caller. The caller *must* delete the
  // global reference when it is done with it. Note that calling a Java method
  // is *not* a transfer of ownership and Release() should not be used.
  T Release() { return static_cast<T>(JavaRef<T>::ReleaseInternal()); }

  // Create a local reference.
  ScopedJavaLocalRef<T> AsLocalRef(JNIEnv* env) const {
    T j_obj = JavaRef<T>::obj();
    if (!j_obj) {
      return nullptr;
    }
    return ScopedJavaLocalRef<T>::Adopt(
        env, static_cast<T>(env->NewLocalRef(j_obj)));
  }
};

// Wrapper for a jobjectArray which supports input iteration, allowing Java
// arrays to be iterated over with a range-based for loop, or used with
// <algorithm> functions that accept input iterators.
//
// The iterator returns each object in the array in turn, wrapped in a
// ScopedJavaLocalRef<T>. T will usually be jobject, but if you know that the
// array contains a more specific type (such as jstring) you can use that
// instead. This does not check the type at runtime!
//
// The wrapper holds a local reference to the array and only queries the size of
// the array once, so must only be used as a stack-based object from the current
// thread.
//
// Note that this does *not* update the contents of the array if you mutate the
// returned ScopedJavaLocalRef.
template <typename T>
class JavaObjectArrayReader {
 public:
  class iterator {
   public:
    // We can only be an input iterator, as all richer iterator types must
    // implement the multipass guarantee (always returning the same object for
    // the same iterator position), which is not practical when returning
    // temporary objects.
    using iterator_category = std::input_iterator_tag;

    using difference_type = ptrdiff_t;
    using value_type = ScopedJavaLocalRef<T>;

    // It doesn't make sense to return a reference type as the iterator creates
    // temporary wrapper objects when dereferenced. Fortunately, it's not
    // required that input iterators actually use references, and defining it
    // as value_type is valid.
    using reference = value_type;

    // This exists to make operator-> work as expected: its return value must
    // resolve to an actual pointer (otherwise the compiler just keeps calling
    // operator-> on the return value until it does), so we need an extra level
    // of indirection. This is sometimes called an "arrow proxy" or similar, and
    // this version is adapted from base/value_iterators.h.
    class pointer {
     public:
      explicit pointer(const reference& ref) : ref_(ref) {}
      pointer(const pointer& ptr) = default;
      pointer& operator=(const pointer& ptr) = delete;
      reference* operator->() { return &ref_; }

     private:
      reference ref_;
    };

    iterator(const iterator&) = default;
    ~iterator() = default;

    iterator& operator=(const iterator&) = default;

    bool operator==(const iterator& other) const {
      JNI_ZERO_DCHECK(reader_ == other.reader_);
      return i_ == other.i_;
    }

    bool operator!=(const iterator& other) const {
      JNI_ZERO_DCHECK(reader_ == other.reader_);
      return i_ != other.i_;
    }

    reference operator*() const {
      JNI_ZERO_DCHECK(i_ < reader_->size_);
      // JNIEnv functions return unowned local references; take ownership with
      // Adopt so that ~ScopedJavaLocalRef will release it automatically later.
      return value_type::Adopt(
          reader_->array_.env_,
          static_cast<T>(reader_->array_.env_->GetObjectArrayElement(
              reader_->array_.obj(), i_)));
    }

    pointer operator->() const { return pointer(operator*()); }

    iterator& operator++() {
      JNI_ZERO_DCHECK(i_ < reader_->size_);
      ++i_;
      return *this;
    }

    iterator operator++(int) {
      iterator old = *this;
      ++*this;
      return old;
    }

   private:
    iterator(const JavaObjectArrayReader* reader, jsize i)
        : reader_(reader), i_(i) {}
    const JavaObjectArrayReader<T>* reader_;
    jsize i_;

    friend JavaObjectArrayReader;
  };

  JavaObjectArrayReader(const JavaRef<jobjectArray>& array) : array_(array) {
    size_ = array_.env_->GetArrayLength(array_.obj());
  }

  // Copy constructor to allow returning it from JavaRef::ReadElements().
  JavaObjectArrayReader(const JavaObjectArrayReader& other) = default;

  // Assignment operator for consistency with copy constructor.
  JavaObjectArrayReader& operator=(const JavaObjectArrayReader& other) =
      default;

  // Allow move constructor and assignment since this owns a local ref.
  JavaObjectArrayReader(JavaObjectArrayReader&& other) = default;
  JavaObjectArrayReader& operator=(JavaObjectArrayReader&& other) = default;

  bool empty() const { return size_ == 0; }

  jsize size() const { return size_; }

  iterator begin() const { return iterator(this, 0); }

  iterator end() const { return iterator(this, size_); }

 private:
  ScopedJavaLocalRef<jobjectArray> array_;
  jsize size_;

  friend iterator;
};

// Use as: @JniType("jni_zero::ByteArrayView") byte[].
//
// This requests a direct pointer to the array data rather than a copy of it,
// so can be more efficient than std::vector<uint8_t> for large arrays.
//
// This helper needs to release the array via its destructor, and as a result
// has more binary size overhead than using std::vector<uint8_t>. As such, you
// should prefer std::vector for small arrays.
//
// Callers must ensure that the passed in array reference outlives this wrapper
// (always the case when used with @JniType).
class ByteArrayView {
 public:
  ByteArrayView(JNIEnv* env, jbyteArray array)
      : env_(env),
        array_(array),
        length_(env->GetArrayLength(array)),
        bytes_(env->GetByteArrayElements(array, nullptr)) {}

  ~ByteArrayView() {
    env_->ReleaseByteArrayElements(array_, bytes_, JNI_ABORT);
  }

  ByteArrayView(const ByteArrayView&) = delete;
  ByteArrayView(ByteArrayView&& other) = delete;
  ByteArrayView& operator=(const ByteArrayView&) = delete;

  size_t size() const { return static_cast<size_t>(length_); }
  bool empty() const { return length_ == 0; }
  const jbyte* bytes() const { return bytes_; }
  const uint8_t* data() const { return reinterpret_cast<uint8_t*>(bytes_); }
  const char* chars() const { return reinterpret_cast<char*>(bytes_); }
  std::string_view string_view() const {
    return std::string_view(chars(), size());
  }

 private:
  JNIEnv* env_;
  jbyteArray array_;
  jsize length_;
  jbyte* bytes_;
};

// Attaches the current thread to the VM (if necessary) and return the JNIEnv*.
JNI_ZERO_COMPONENT_BUILD_EXPORT JNIEnv* AttachCurrentThread();

// Same to AttachCurrentThread except that thread name will be set to
// |thread_name| if it is the first call. Otherwise, thread_name won't be
// changed. AttachCurrentThread() doesn't regard underlying platform thread
// name, but just resets it to "Thread-???". This function should be called
// right after new thread is created if it is important to keep thread name.
JNI_ZERO_COMPONENT_BUILD_EXPORT JNIEnv* AttachCurrentThreadWithName(
    const std::string& thread_name);

// Detaches the current thread from VM if it is attached.
JNI_ZERO_COMPONENT_BUILD_EXPORT void DetachFromVM();

// Initializes the global JVM.
JNI_ZERO_COMPONENT_BUILD_EXPORT void InitVM(JavaVM* vm);

// Returns true if the global JVM has been initialized.
JNI_ZERO_COMPONENT_BUILD_EXPORT bool IsVMInitialized();

// Returns the global JVM, or nullptr if it has not been initialized.
JNI_ZERO_COMPONENT_BUILD_EXPORT JavaVM* GetVM();

// Do not allow any future native->java calls.
// This is necessary in gtest DEATH_TESTS to prevent
// GetJavaStackTraceIfPresent() from accessing a defunct JVM (due to fork()).
// https://crbug.com/1484834
JNI_ZERO_COMPONENT_BUILD_EXPORT void DisableJvmForTesting();

JNI_ZERO_COMPONENT_BUILD_EXPORT void SetExceptionHandler(
    void (*callback)(JNIEnv*));

// Returns true if an exception is pending in the provided JNIEnv*.
JNI_ZERO_COMPONENT_BUILD_EXPORT bool HasException(JNIEnv* env);

// If an exception is pending in the provided JNIEnv*, this function clears it
// and returns true.
JNI_ZERO_COMPONENT_BUILD_EXPORT bool ClearException(JNIEnv* env);

// If there's any pending exception, this function will call the set exception
// handler, or if none are set, it will fatally LOG.
JNI_ZERO_COMPONENT_BUILD_EXPORT void CheckException(JNIEnv* env);

// Sets a function to call instead of just using JNIEnv.FindClass. Useful for
// chrome's "splits" which need to be resolved in special ClassLoaders. The
// class name parameter (first string) will be given in package.dot.Format. The
// second parameter is the split name, which will just be an empty string if not
// used.
JNI_ZERO_COMPONENT_BUILD_EXPORT void SetClassResolver(
    jclass (*resolver)(JNIEnv*, const char*, const char*));

// Finds the class named |class_name| and returns it.
// Use this method instead of invoking directly the JNI FindClass method (to
// prevent leaking local references).
// This method triggers a fatal assertion if the class could not be found.
// Use HasClass if you need to check whether the class exists.
JNI_ZERO_COMPONENT_BUILD_EXPORT ScopedJavaLocalRef<jclass>
GetClass(JNIEnv* env, const char* class_name, const char* split_name);
JNI_ZERO_COMPONENT_BUILD_EXPORT ScopedJavaLocalRef<jclass> GetClass(
    JNIEnv* env,
    const char* class_name);

#if JNI_ZERO_ENABLE_TYPE_CONVERSIONS
#define JNI_ZERO_CONVERSION_FAILED_MSG(name)                               \
  "Failed to find a " name                                                 \
  " specialization for the given type. Did you forget to include the "     \
  "header file that declares it?\n"                                        \
  "If this error originates from a generated _jni.h file, make sure that " \
  "the header that declares the specialization is #included before the "   \
  "_jni.h one."
#else
#define JNI_ZERO_CONVERSION_FAILED_MSG(x) "Use of @JniType requires C++20."
#endif

template <typename T>
inline T FromJniType(JNIEnv* env, const JavaRef<jobject>& obj) {
  static_assert(sizeof(T) == 0, JNI_ZERO_CONVERSION_FAILED_MSG("FromJniType"));
}

template <typename T>
inline ScopedJavaLocalRef<jobject> ToJniType(JNIEnv* env, const T& obj) {
  static_assert(sizeof(T) == 0, JNI_ZERO_CONVERSION_FAILED_MSG("ToJniType"));
}

// Allow conversions using pointers by wrapping non-pointer conversions.
// Cannot live in default_conversions.h because we want code to be able to
// specialize it.
template <typename T>
inline ScopedJavaLocalRef<jobject> ToJniType(JNIEnv* env, T* value) {
  if (!value) {
    return nullptr;
  }
  return ToJniType(env, *value);
}

#if JNI_ZERO_ENABLE_TYPE_CONVERSIONS
#undef JNI_ZERO_CONVERSION_FAILED_MSG
#define JNI_ZERO_CONVERSION_FAILED_MSG(name)                             \
  "Failed to find a " name                                               \
  " specialization for the given type.\n"                                \
  "If this error is from a generated _jni.h file, ensure that the type " \
  "conforms to the container concepts defined in "                       \
  "jni_zero/default_conversions.h.\n"                                    \
  "If this error is from a non-generated call, ensure that there "       \
  "exists an #include for jni_zero/default_conversions.h."
#endif

// Convert from an stl container to a Java array. Uses ToJniType() on each
// element.
template <typename T>
inline ScopedJavaLocalRef<jobjectArray> ToJniArray(JNIEnv* env,
                                                   const T& obj,
                                                   jclass array_class) {
  static_assert(sizeof(T) == 0, JNI_ZERO_CONVERSION_FAILED_MSG("ToJniArray"));
}

// Convert from a Java array to an stl container of primitive types.
template <typename T>
inline ScopedJavaLocalRef<jarray> ToJniArray(JNIEnv* env, const T& obj) {
  static_assert(sizeof(T) == 0, JNI_ZERO_CONVERSION_FAILED_MSG("ToJniArray"));
}

// Convert from a Java array to an stl container. Uses FromJniType() on each
// element for non-primitive types.
template <typename T>
inline T FromJniArray(JNIEnv* env, const JavaRef<jobject>& obj) {
  static_assert(sizeof(T) == 0, JNI_ZERO_CONVERSION_FAILED_MSG("FromJniArray"));
}

// Convert from an stl container to a Java List<> by using ToJniType() on each
// element.
template <typename T>
inline ScopedJavaLocalRef<jobject> ToJniList(JNIEnv* env, const T& obj) {
  static_assert(sizeof(T) == 0, JNI_ZERO_CONVERSION_FAILED_MSG("ToJniList"));
}

// Convert from a Java Collection<> to an stl container by using FromJniType()
// on each element.
template <typename T>
inline T FromJniCollection(JNIEnv* env, const JavaRef<jobject>& obj) {
  static_assert(sizeof(T) == 0,
                JNI_ZERO_CONVERSION_FAILED_MSG("FromJniCollection"));
}
#undef JNI_ZERO_CONVERSION_FAILED_MSG

// This class is a wrapper for JNIEnv Get(Static)MethodID.
class JNI_ZERO_COMPONENT_BUILD_EXPORT MethodID {
 public:
  enum Type {
    TYPE_STATIC,
    TYPE_INSTANCE,
  };

  // Returns the method ID for the method with the specified name and signature.
  // This method triggers a fatal assertion if the method could not be found.
  template <Type type>
  static jmethodID Get(JNIEnv* env,
                       jclass clazz,
                       const char* method_name,
                       const char* jni_signature);

  // The caller is responsible to zero-initialize |atomic_method_id|.
  // It's fine to simultaneously call this on multiple threads referencing the
  // same |atomic_method_id|.
  template <Type type>
  static jmethodID LazyGet(JNIEnv* env,
                           jclass clazz,
                           const char* method_name,
                           const char* jni_signature,
                           std::atomic<jmethodID>* atomic_method_id);
};

}  // namespace jni_zero

#endif  // JNI_ZERO_JNI_ZERO_H_
