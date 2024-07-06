// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.JniAndroid

#ifndef org_chromium_base_JniAndroid_JNI
#define org_chromium_base_JniAndroid_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_JniAndroid_clazz_defined
#define org_chromium_base_JniAndroid_clazz_defined
inline jclass org_chromium_base_JniAndroid_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/JniAndroid";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

// Native to Java functions
static jni_zero::ScopedJavaLocalRef<jthrowable> Java_JniAndroid_handleException(
    JNIEnv* env,
    const jni_zero::JavaRef<jthrowable>& throwable,
    const jni_zero::JavaRef<jstring>& nativeStackTrace) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_JniAndroid_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "handleException",
      "(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/Throwable;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      throwable.obj(),
      nativeStackTrace.obj());
  jthrowable _ret2 = static_cast<jthrowable>(_ret);
  return jni_zero::ScopedJavaLocalRef<jthrowable>(env, _ret2);
}

static jni_zero::ScopedJavaLocalRef<jstring> Java_JniAndroid_sanitizedStacktraceForUnhandledException(
    JNIEnv* env,
    const jni_zero::JavaRef<jthrowable>& throwable) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_JniAndroid_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "sanitizedStacktraceForUnhandledException",
      "(Ljava/lang/Throwable;)Ljava/lang/String;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(
      clazz,
      call_context.method_id(),
      throwable.obj());
  jstring _ret2 = static_cast<jstring>(_ret);
  return jni_zero::ScopedJavaLocalRef<jstring>(env, _ret2);
}


#endif  // org_chromium_base_JniAndroid_JNI