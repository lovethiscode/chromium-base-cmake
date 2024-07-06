// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.Callback

#ifndef org_chromium_base_Callback_JNI
#define org_chromium_base_Callback_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_Callback_00024Helper_clazz_defined
#define org_chromium_base_Callback_00024Helper_clazz_defined
inline jclass org_chromium_base_Callback_00024Helper_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/Callback$Helper";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

// Native to Java functions
static void Java_Helper_onBooleanResultFromNative(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& callback,
    jboolean result) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Callback_00024Helper_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "onBooleanResultFromNative",
      "(Lorg/chromium/base/Callback;Z)V",
      &cached_method_id);
  env->CallStaticVoidMethod(
      clazz,
      call_context.method_id(),
      callback.obj(),
      result);
}

static void Java_Helper_onIntResultFromNative(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& callback,
    JniIntWrapper result) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Callback_00024Helper_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "onIntResultFromNative",
      "(Lorg/chromium/base/Callback;I)V",
      &cached_method_id);
  env->CallStaticVoidMethod(
      clazz,
      call_context.method_id(),
      callback.obj(),
      as_jint(result));
}

static void Java_Helper_onLongResultFromNative(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& callback,
    jlong result) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Callback_00024Helper_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "onLongResultFromNative",
      "(Lorg/chromium/base/Callback;J)V",
      &cached_method_id);
  env->CallStaticVoidMethod(
      clazz,
      call_context.method_id(),
      callback.obj(),
      result);
}

static void Java_Helper_onObjectResultFromNative(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& callback,
    const jni_zero::JavaRef<jobject>& result) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Callback_00024Helper_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "onObjectResultFromNative",
      "(Lorg/chromium/base/Callback;Ljava/lang/Object;)V",
      &cached_method_id);
  env->CallStaticVoidMethod(
      clazz,
      call_context.method_id(),
      callback.obj(),
      result.obj());
}

static void Java_Helper_onOptionalStringResultFromNative(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& callback,
    jboolean hasValue,
    const jni_zero::JavaRef<jstring>& result) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Callback_00024Helper_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "onOptionalStringResultFromNative",
      "(Lorg/chromium/base/Callback;ZLjava/lang/String;)V",
      &cached_method_id);
  env->CallStaticVoidMethod(
      clazz,
      call_context.method_id(),
      callback.obj(),
      hasValue,
      result.obj());
}

static void Java_Helper_onTimeResultFromNative(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& callback,
    jlong result) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Callback_00024Helper_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "onTimeResultFromNative",
      "(Lorg/chromium/base/Callback;J)V",
      &cached_method_id);
  env->CallStaticVoidMethod(
      clazz,
      call_context.method_id(),
      callback.obj(),
      result);
}

static void Java_Helper_runRunnable(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& runnable) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Callback_00024Helper_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "runRunnable",
      "(Ljava/lang/Runnable;)V",
      &cached_method_id);
  env->CallStaticVoidMethod(clazz, call_context.method_id(), runnable.obj());
}


#endif  // org_chromium_base_Callback_JNI