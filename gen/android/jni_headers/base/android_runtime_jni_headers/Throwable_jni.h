// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     java.lang.Throwable

#ifndef java_lang_Throwable_JNI
#define java_lang_Throwable_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef java_lang_Throwable_clazz_defined
#define java_lang_Throwable_clazz_defined
inline jclass java_lang_Throwable_clazz(JNIEnv* env) {
  static const char kClassName[] = "java/lang/Throwable";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

namespace JNI_Throwable {
// Native to Java functions
[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_Constructor(
    JNIEnv* env) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "<init>",
      "()V",
      &cached_method_id);
  auto _ret = env->NewObject(clazz, call_context.method_id());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_Constructor__String(
    JNIEnv* env,
    const jni_zero::JavaRef<jstring>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "<init>",
      "(Ljava/lang/String;)V",
      &cached_method_id);
  auto _ret = env->NewObject(clazz, call_context.method_id(), p0.obj());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_Constructor(
    JNIEnv* env,
    const jni_zero::JavaRef<jstring>& p0,
    const jni_zero::JavaRef<jthrowable>& p1) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "<init>",
      "(Ljava/lang/String;Ljava/lang/Throwable;)V",
      &cached_method_id);
  auto _ret = env->NewObject(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_Constructor(
    JNIEnv* env,
    const jni_zero::JavaRef<jstring>& p0,
    const jni_zero::JavaRef<jthrowable>& p1,
    jboolean p2,
    jboolean p3) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "<init>",
      "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V",
      &cached_method_id);
  auto _ret = env->NewObject(
      clazz,
      call_context.method_id(),
      p0.obj(),
      p1.obj(),
      p2,
      p3);
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_Constructor__Throwable(
    JNIEnv* env,
    const jni_zero::JavaRef<jthrowable>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "<init>",
      "(Ljava/lang/Throwable;)V",
      &cached_method_id);
  auto _ret = env->NewObject(clazz, call_context.method_id(), p0.obj());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static void Java_Throwable_addSuppressed(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jthrowable>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "addSuppressed",
      "(Ljava/lang/Throwable;)V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id(), p0.obj());
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_fillInStackTrace(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "fillInStackTrace",
      "()Ljava/lang/Throwable;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_getCause(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "getCause",
      "()Ljava/lang/Throwable;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jstring> Java_Throwable_getLocalizedMessage(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "getLocalizedMessage",
      "()Ljava/lang/String;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jstring _ret2 = static_cast<jstring>(_ret);
  return jni_zero::ScopedJavaLocalRef<jstring>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jstring> Java_Throwable_getMessage(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "getMessage",
      "()Ljava/lang/String;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jstring _ret2 = static_cast<jstring>(_ret);
  return jni_zero::ScopedJavaLocalRef<jstring>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobjectArray> Java_Throwable_getStackTrace(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "getStackTrace",
      "()[Ljava/lang/StackTraceElement;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jobjectArray _ret2 = static_cast<jobjectArray>(_ret);
  return jni_zero::ScopedJavaLocalRef<jobjectArray>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jobjectArray> Java_Throwable_getSuppressed(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "getSuppressed",
      "()[Ljava/lang/Throwable;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jobjectArray _ret2 = static_cast<jobjectArray>(_ret);
  return jni_zero::ScopedJavaLocalRef<jobjectArray>(env, _ret2);
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jthrowable> Java_Throwable_initCause(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jthrowable>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "initCause",
      "(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(
      obj.obj(),
      call_context.method_id(),
      p0.obj());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

[[maybe_unused]] static void Java_Throwable_printStackTrace(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "printStackTrace",
      "()V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id());
}

[[maybe_unused]] static void Java_Throwable_printStackTrace__java_io_PrintStream(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "printStackTrace",
      "(Ljava/io/PrintStream;)V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id(), p0.obj());
}

[[maybe_unused]] static void Java_Throwable_printStackTrace__java_io_PrintWriter(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobject>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "printStackTrace",
      "(Ljava/io/PrintWriter;)V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id(), p0.obj());
}

[[maybe_unused]] static void Java_Throwable_setStackTrace(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    const jni_zero::JavaRef<jobjectArray>& p0) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "setStackTrace",
      "([Ljava/lang/StackTraceElement;)V",
      &cached_method_id);
  env->CallVoidMethod(obj.obj(), call_context.method_id(), p0.obj());
}

[[maybe_unused]] static jni_zero::ScopedJavaLocalRef<jstring> Java_Throwable_toString(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = java_lang_Throwable_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "toString",
      "()Ljava/lang/String;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  jstring _ret2 = static_cast<jstring>(_ret);
  return jni_zero::ScopedJavaLocalRef<jstring>(env, _ret2);
}


}  // namespace JNI_Throwable
#endif  // java_lang_Throwable_JNI
