// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.JavaExceptionReporter

#ifndef org_chromium_base_JavaExceptionReporter_JNI
#define org_chromium_base_JavaExceptionReporter_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_JavaExceptionReporter_clazz_defined
#define org_chromium_base_JavaExceptionReporter_clazz_defined
inline jclass org_chromium_base_JavaExceptionReporter_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/JavaExceptionReporter";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static void JNI_JavaExceptionReporter_ReportJavaException(
    JNIEnv* env,
    jboolean crashAfterReport,
    const jni_zero::JavaParamRef<jthrowable>& e);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1JavaExceptionReporter_1reportJavaException(
    JNIEnv* env,
    jclass jcaller,
    jboolean crashAfterReport,
    jobject e) {
  JNI_JavaExceptionReporter_ReportJavaException(
      env,
      crashAfterReport,
      jni_zero::JavaParamRef<jthrowable>(env, static_cast<jthrowable>(e)));
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_JavaExceptionReporter_ReportJavaStackTrace(
    JNIEnv* env,
    std::string& stackTrace);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1JavaExceptionReporter_1reportJavaStackTrace(
    JNIEnv* env,
    jclass jcaller,
    jobject stackTrace) {
  std::string stackTrace_converted = jni_zero::FromJniType<std::string>(
      env,
      jni_zero::JavaParamRef<jobject>(env, stackTrace));
  JNI_JavaExceptionReporter_ReportJavaStackTrace(env, stackTrace_converted);
}

// Native to Java functions
static void Java_JavaExceptionReporter_installHandler(
    JNIEnv* env,
    jboolean crashAfterReport) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_JavaExceptionReporter_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "installHandler",
      "(Z)V",
      &cached_method_id);
  env->CallStaticVoidMethod(clazz, call_context.method_id(), crashAfterReport);
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_JavaExceptionReporter_JNI