// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.CpuFeatures

#ifndef org_chromium_base_CpuFeatures_JNI
#define org_chromium_base_CpuFeatures_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static jint JNI_CpuFeatures_GetCoreCount(JNIEnv* env);

JNI_POSSIBLE_BOUNDARY_EXPORT jint Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1CpuFeatures_1getCoreCount(
    JNIEnv* env,
    jclass jcaller) {
  auto _ret = JNI_CpuFeatures_GetCoreCount(env);
  return _ret;
}

// Forward declaration. To be implemented by the including .cc file.
static jlong JNI_CpuFeatures_GetCpuFeatures(JNIEnv* env);

JNI_POSSIBLE_BOUNDARY_EXPORT jlong Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1CpuFeatures_1getCpuFeatures(
    JNIEnv* env,
    jclass jcaller) {
  auto _ret = JNI_CpuFeatures_GetCpuFeatures(env);
  return _ret;
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_CpuFeatures_JNI
