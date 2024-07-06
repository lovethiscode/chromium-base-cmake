// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     java.util.Collection

#ifndef java_util_Collection_JNI
#define java_util_Collection_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef java_util_Collection_clazz_defined
#define java_util_Collection_clazz_defined
inline jclass java_util_Collection_clazz(JNIEnv* env) {
  static const char kClassName[] = "java/util/Collection";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

namespace JNI_Collection {
// Native to Java functions
[[maybe_unused]] static jboolean Java_Collection_add(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "add",
      "(Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Collection_addAll(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "addAll",
      "(Ljava/util/Collection;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static void Java_Collection_clear(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "clear",
      "()V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id());
}

[[maybe_unused]] static jboolean Java_Collection_contains(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "contains",
      "(Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Collection_containsAll(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "containsAll",
      "(Ljava/util/Collection;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Collection_equals(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "equals",
      "(Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jint Java_Collection_hashCode(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, 0);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "hashCode",
      "()I",
      &cached_method_id);
  auto _ret = env->CallIntMethod(obj.obj(), call_context.method_id());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Collection_isEmpty(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "isEmpty",
      "()Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(obj.obj(), call_context.method_id());
  return _ret;
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Collection_iterator(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "iterator",
      "()Ljava/util/Iterator;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Collection_parallelStream(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "parallelStream",
      "()Ljava/util/stream/Stream;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jboolean Java_Collection_remove(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "remove",
      "(Ljava/lang/Object;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Collection_removeAll(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "removeAll",
      "(Ljava/util/Collection;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Collection_removeIf(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "removeIf",
      "(Ljava/util/function/Predicate;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jboolean Java_Collection_retainAll(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "retainAll",
      "(Ljava/util/Collection;)Z",
      &cached_method_id);
  auto _ret = env->CallBooleanMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  return _ret;
}

[[maybe_unused]] static jint Java_Collection_size(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, 0);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "size",
      "()I",
      &cached_method_id);
  auto _ret = env->CallIntMethod(obj.obj(), call_context.method_id());
  return _ret;
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Collection_spliterator(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "spliterator",
      "()Ljava/util/Spliterator;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobject> Java_Collection_stream(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "stream",
      "()Ljava/util/stream/Stream;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobjectArray> Java_Collection_toArray(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "toArray",
      "()[Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jobjectArray _ret2 = static_cast<jobjectArray>(_ret);
  return jni_zero::ScopedJavaLocalRef<jobjectArray>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobjectArray> Java_Collection_toArray__java_util_function_IntFunction(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "toArray",
      "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  jobjectArray _ret2 = static_cast<jobjectArray>(_ret);
  return jni_zero::ScopedJavaLocalRef<jobjectArray>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobjectArray> Java_Collection_toArray__ObjectArray(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobjectArray>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_util_Collection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "toArray",
      "([Ljava/lang/Object;)[Ljava/lang/Object;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  jobjectArray _ret2 = static_cast<jobjectArray>(_ret);
  return jni_zero::ScopedJavaLocalRef<jobjectArray>(env, _ret2);
}


}  // namespace JNI_Collection
#endif  // java_util_Collection_JNI
