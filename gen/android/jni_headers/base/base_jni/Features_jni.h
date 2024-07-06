// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.Features

#ifndef org_chromium_base_Features_JNI
#define org_chromium_base_Features_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static jboolean JNI_Features_GetFieldTrialParamByFeatureAsBoolean(
    JNIEnv* env,
    jlong featurePointer,
    std::string& paramName,
    jboolean defaultValue);

JNI_POSSIBLE_BOUNDARY_EXPORT jboolean Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1Features_1getFieldTrialParamByFeatureAsBoolean(
    JNIEnv* env,
    jclass jcaller,
    jlong featurePointer,
    jobject paramName,
    jboolean defaultValue) {
  std::string paramName_converted = jni_zero::FromJniType<std::string>(
      env,
      jni_zero::JavaParamRef<jobject>(env, paramName));
  auto _ret = JNI_Features_GetFieldTrialParamByFeatureAsBoolean(
      env,
      featurePointer,
      paramName_converted,
      defaultValue);
  return _ret;
}

// Forward declaration. To be implemented by the including .cc file.
static std::string JNI_Features_GetFieldTrialParamByFeatureAsString(
    JNIEnv* env,
    jlong featurePointer,
    std::string& paramName);

JNI_POSSIBLE_BOUNDARY_EXPORT jobject Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1Features_1getFieldTrialParamByFeatureAsString(
    JNIEnv* env,
    jclass jcaller,
    jlong featurePointer,
    jobject paramName) {
  std::string paramName_converted = jni_zero::FromJniType<std::string>(
      env,
      jni_zero::JavaParamRef<jobject>(env, paramName));
  auto _ret = JNI_Features_GetFieldTrialParamByFeatureAsString(
      env,
      featurePointer,
      paramName_converted);
  jobject converted_ret = jni_zero::ToJniType(env, _ret).Release();
  return converted_ret;
}

// Forward declaration. To be implemented by the including .cc file.
static jboolean JNI_Features_IsEnabled(JNIEnv* env, jlong featurePointer);

JNI_POSSIBLE_BOUNDARY_EXPORT jboolean Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1Features_1isEnabled(
    JNIEnv* env,
    jclass jcaller,
    jlong featurePointer) {
  auto _ret = JNI_Features_IsEnabled(env, featurePointer);
  return _ret;
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_Features_JNI
