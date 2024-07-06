// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.Token

#ifndef org_chromium_base_Token_JNI
#define org_chromium_base_Token_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_Token_clazz_defined
#define org_chromium_base_Token_clazz_defined
inline jclass org_chromium_base_Token_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/Token";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static base::Token JNI_Token_CreateRandom(JNIEnv* env);

JNI_POSSIBLE_BOUNDARY_EXPORT jobject Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1Token_1createRandom(
    JNIEnv* env,
    jclass jcaller) {
  auto _ret = JNI_Token_CreateRandom(env);
  jobject converted_ret = jni_zero::ToJniType(env, _ret).Release();
  return converted_ret;
}

// Native to Java functions
static jni_zero::ScopedJavaLocalRef<jobject> Java_Token_Constructor(
    JNIEnv* env,
    jlong high,
    jlong low) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_Token_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "<init>",
      "(JJ)V",
      &cached_method_id);
  auto _ret = env->NewObject(clazz, call_context.method_id(), high, low);
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_Token_JNI
