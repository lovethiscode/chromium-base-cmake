// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.ImportantFileWriterAndroid

#ifndef org_chromium_base_ImportantFileWriterAndroid_JNI
#define org_chromium_base_ImportantFileWriterAndroid_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static jboolean JNI_ImportantFileWriterAndroid_WriteFileAtomically(
    JNIEnv* env,
    std::string& fileName,
    jni_zero::ByteArrayView& data);

JNI_POSSIBLE_BOUNDARY_EXPORT jboolean Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1ImportantFileWriterAndroid_1writeFileAtomically(
    JNIEnv* env,
    jclass jcaller,
    jobject fileName,
    jobject data) {
  std::string fileName_converted = jni_zero::FromJniType<std::string>(
      env,
      jni_zero::JavaParamRef<jobject>(env, fileName));
  jni_zero::ByteArrayView data_converted = jni_zero::FromJniArray<jni_zero::ByteArrayView>(
      env,
      jni_zero::JavaParamRef<jbyteArray>(env, static_cast<jbyteArray>(data)));
  auto _ret = JNI_ImportantFileWriterAndroid_WriteFileAtomically(
      env,
      fileName_converted,
      data_converted);
  return _ret;
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_ImportantFileWriterAndroid_JNI
