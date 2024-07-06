// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.UnguessableToken

#ifndef org_chromium_base_UnguessableToken_JNI
#define org_chromium_base_UnguessableToken_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_UnguessableToken_clazz_defined
#define org_chromium_base_UnguessableToken_clazz_defined
inline jclass org_chromium_base_UnguessableToken_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/UnguessableToken";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

namespace base {
namespace android {
// Native to Java functions
static jni_zero::ScopedJavaLocalRef<jobject> Java_UnguessableToken_Constructor(
    JNIEnv* env,
    jlong high,
    jlong low) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_UnguessableToken_clazz(env);
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

static jni_zero::ScopedJavaLocalRef<jobject> Java_UnguessableToken_parcelAndUnparcelForTesting(
    JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_UnguessableToken_clazz(env);
  CHECK_CLAZZ(env, obj.obj(), clazz, nullptr);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_INSTANCE>(
      env,
      clazz,
      "parcelAndUnparcelForTesting",
      "()Lorg/chromium/base/UnguessableToken;",
      &cached_method_id);
  auto _ret = env->CallObjectMethod(obj.obj(), call_context.method_id());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, _ret);
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_UnguessableToken_JNI