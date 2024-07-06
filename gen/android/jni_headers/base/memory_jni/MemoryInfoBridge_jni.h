// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.memory.MemoryInfoBridge

#ifndef org_chromium_base_memory_MemoryInfoBridge_JNI
#define org_chromium_base_memory_MemoryInfoBridge_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_memory_MemoryInfoBridge_clazz_defined
#define org_chromium_base_memory_MemoryInfoBridge_clazz_defined
inline jclass org_chromium_base_memory_MemoryInfoBridge_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/memory/MemoryInfoBridge";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

// Native to Java functions
static jni_zero::ScopedJavaLocalRef<jobject> Java_MemoryInfoBridge_getActivityManagerMemoryInfoForSelf(
    JNIEnv* env) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_memory_MemoryInfoBridge_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "getActivityManagerMemoryInfoForSelf",
      "()Landroid/os/Debug$MemoryInfo;",
      &cached_method_id);
  auto _ret = env->CallStaticObjectMethod(clazz, call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}


#endif  // org_chromium_base_memory_MemoryInfoBridge_JNI
