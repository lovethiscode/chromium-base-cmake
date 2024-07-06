// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.ApplicationStatus

#ifndef org_chromium_base_ApplicationStatus_JNI
#define org_chromium_base_ApplicationStatus_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_ApplicationStatus_clazz_defined
#define org_chromium_base_ApplicationStatus_clazz_defined
inline jclass org_chromium_base_ApplicationStatus_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/ApplicationStatus";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static void JNI_ApplicationStatus_OnApplicationStateChange(
    JNIEnv* env,
    jint newState);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1ApplicationStatus_1onApplicationStateChange(
    JNIEnv* env,
    jclass jcaller,
    jint newState) {
  JNI_ApplicationStatus_OnApplicationStateChange(env, newState);
}

// Native to Java functions
static jint Java_ApplicationStatus_getStateForApplication(JNIEnv* env) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_ApplicationStatus_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, 0);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "getStateForApplication",
      "()I",
      &cached_method_id);
  auto _ret = env->CallStaticIntMethod(clazz, call_context.method_id());
  return _ret;
}

static jboolean Java_ApplicationStatus_hasVisibleActivities(JNIEnv* env) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_ApplicationStatus_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, false);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "hasVisibleActivities",
      "()Z",
      &cached_method_id);
  auto _ret = env->CallStaticBooleanMethod(clazz, call_context.method_id());
  return _ret;
}

static void Java_ApplicationStatus_registerThreadSafeNativeApplicationStateListener(
    JNIEnv* env) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_ApplicationStatus_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "registerThreadSafeNativeApplicationStateListener",
      "()V",
      &cached_method_id);
  env->CallStaticVoidMethod(clazz, call_context.method_id());
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_ApplicationStatus_JNI