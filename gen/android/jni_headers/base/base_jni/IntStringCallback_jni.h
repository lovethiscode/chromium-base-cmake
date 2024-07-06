// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.IntStringCallback

#ifndef org_chromium_base_IntStringCallback_JNI
#define org_chromium_base_IntStringCallback_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_IntStringCallback_clazz_defined
#define org_chromium_base_IntStringCallback_clazz_defined
inline jclass org_chromium_base_IntStringCallback_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/IntStringCallback";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

// Native to Java functions
static void Java_IntStringCallback_onResult(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj,
    JniIntWrapper number,
    const jni_zero::JavaRef<jstring>& string) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_IntStringCallback_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "onResult",
      "(ILjava/lang/String;)V",
      &cached_method_id);
  env->CallVoidMethod(
      obj.obj(),
      call_context.method_id(),
      as_jint(number),
      string.obj());
}


#endif  // org_chromium_base_IntStringCallback_JNI
