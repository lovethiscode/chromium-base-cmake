// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.TraceEvent

#ifndef org_chromium_base_TraceEvent_JNI
#define org_chromium_base_TraceEvent_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
// Class Accessors.
#ifndef org_chromium_base_TraceEvent_clazz_defined
#define org_chromium_base_TraceEvent_clazz_defined
inline jclass org_chromium_base_TraceEvent_clazz(JNIEnv* env) {
  static const char kClassName[] = "org/chromium/base/TraceEvent";
  static std::atomic<jclass> cached_class;
  return jni_zero::internal::LazyGetClass(env, kClassName, &cached_class);
}
#endif

namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_AddViewDump(
    JNIEnv* env,
    jint id,
    jint parentId,
    jboolean isShown,
    jboolean isDirty,
    const jni_zero::JavaParamRef<jstring>& className,
    const jni_zero::JavaParamRef<jstring>& resourceName,
    jlong activityProtoPtr);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1addViewDump(
    JNIEnv* env,
    jclass jcaller,
    jint id,
    jint parentId,
    jboolean isShown,
    jboolean isDirty,
    jobject className,
    jobject resourceName,
    jlong activityProtoPtr) {
  JNI_TraceEvent_AddViewDump(
      env,
      id,
      parentId,
      isShown,
      isDirty,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(className)),
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(resourceName)),
      activityProtoPtr);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_Begin(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& name,
    const jni_zero::JavaParamRef<jstring>& arg);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1begin(
    JNIEnv* env,
    jclass jcaller,
    jobject name,
    jobject arg) {
  JNI_TraceEvent_Begin(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(name)),
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(arg)));
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_BeginToplevel(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& target);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1beginToplevel(
    JNIEnv* env,
    jclass jcaller,
    jobject target) {
  JNI_TraceEvent_BeginToplevel(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(target)));
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_BeginWithIntArg(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& name,
    jint arg);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1beginWithIntArg(
    JNIEnv* env,
    jclass jcaller,
    jobject name,
    jint arg) {
  JNI_TraceEvent_BeginWithIntArg(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(name)),
      arg);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_End(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& arg,
    jlong flow);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1end(
    JNIEnv* env,
    jclass jcaller,
    jobject arg,
    jlong flow) {
  JNI_TraceEvent_End(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(arg)),
      flow);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_EndToplevel(JNIEnv* env);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1endToplevel(
    JNIEnv* env,
    jclass jcaller) {
  JNI_TraceEvent_EndToplevel(env);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_FinishAsync(JNIEnv* env, jlong id);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1finishAsync(
    JNIEnv* env,
    jclass jcaller,
    jlong id) {
  JNI_TraceEvent_FinishAsync(env, id);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_InitViewHierarchyDump(
    JNIEnv* env,
    jlong id,
    const jni_zero::JavaParamRef<jobject>& list);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1initViewHierarchyDump(
    JNIEnv* env,
    jclass jcaller,
    jlong id,
    jobject list) {
  JNI_TraceEvent_InitViewHierarchyDump(
      env,
      id,
      jni_zero::JavaParamRef<jobject>(env, list));
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_Instant(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& name,
    const jni_zero::JavaParamRef<jstring>& arg);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1instant(
    JNIEnv* env,
    jclass jcaller,
    jobject name,
    jobject arg) {
  JNI_TraceEvent_Instant(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(name)),
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(arg)));
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_InstantAndroidIPC(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& name,
    jlong durMs);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1instantAndroidIPC(
    JNIEnv* env,
    jclass jcaller,
    jobject name,
    jlong durMs) {
  JNI_TraceEvent_InstantAndroidIPC(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(name)),
      durMs);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_InstantAndroidToolbar(
    JNIEnv* env,
    jint blockReason,
    jint allowReason,
    jint snapshotDiff);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1instantAndroidToolbar(
    JNIEnv* env,
    jclass jcaller,
    jint blockReason,
    jint allowReason,
    jint snapshotDiff) {
  JNI_TraceEvent_InstantAndroidToolbar(
      env,
      blockReason,
      allowReason,
      snapshotDiff);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_RegisterEnabledObserver(JNIEnv* env);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1registerEnabledObserver(
    JNIEnv* env,
    jclass jcaller) {
  JNI_TraceEvent_RegisterEnabledObserver(env);
}

// Forward declaration. To be implemented by the including .cc file.
static jlong JNI_TraceEvent_StartActivityDump(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& name,
    jlong dumpProtoPtr);

JNI_POSSIBLE_BOUNDARY_EXPORT jlong Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1startActivityDump(
    JNIEnv* env,
    jclass jcaller,
    jobject name,
    jlong dumpProtoPtr) {
  auto _ret = JNI_TraceEvent_StartActivityDump(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(name)),
      dumpProtoPtr);
  return _ret;
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_StartAsync(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jstring>& name,
    jlong id);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1startAsync(
    JNIEnv* env,
    jclass jcaller,
    jobject name,
    jlong id) {
  JNI_TraceEvent_StartAsync(
      env,
      jni_zero::JavaParamRef<jstring>(env, static_cast<jstring>(name)),
      id);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_StartupActivityStart(
    JNIEnv* env,
    jlong activityId,
    jlong startTimeMs);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1startupActivityStart(
    JNIEnv* env,
    jclass jcaller,
    jlong activityId,
    jlong startTimeMs) {
  JNI_TraceEvent_StartupActivityStart(env, activityId, startTimeMs);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_StartupLaunchCause(
    JNIEnv* env,
    jlong activityId,
    jlong startTimeMs,
    jint launchCause);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1startupLaunchCause(
    JNIEnv* env,
    jclass jcaller,
    jlong activityId,
    jlong startTimeMs,
    jint launchCause) {
  JNI_TraceEvent_StartupLaunchCause(env, activityId, startTimeMs, launchCause);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_StartupTimeToFirstVisibleContent2(
    JNIEnv* env,
    jlong activityId,
    jlong startTimeMs,
    jlong durationMs);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1startupTimeToFirstVisibleContent2(
    JNIEnv* env,
    jclass jcaller,
    jlong activityId,
    jlong startTimeMs,
    jlong durationMs) {
  JNI_TraceEvent_StartupTimeToFirstVisibleContent2(
      env,
      activityId,
      startTimeMs,
      durationMs);
}

// Forward declaration. To be implemented by the including .cc file.
static jboolean JNI_TraceEvent_ViewHierarchyDumpEnabled(JNIEnv* env);

JNI_POSSIBLE_BOUNDARY_EXPORT jboolean Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1viewHierarchyDumpEnabled(
    JNIEnv* env,
    jclass jcaller) {
  auto _ret = JNI_TraceEvent_ViewHierarchyDumpEnabled(env);
  return _ret;
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_WebViewStartupStage1(
    JNIEnv* env,
    jlong startTimeMs,
    jlong durationMs);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1webViewStartupStage1(
    JNIEnv* env,
    jclass jcaller,
    jlong startTimeMs,
    jlong durationMs) {
  JNI_TraceEvent_WebViewStartupStage1(env, startTimeMs, durationMs);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_WebViewStartupStage2(
    JNIEnv* env,
    jlong startTimeMs,
    jlong durationMs,
    jboolean isColdStartup);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1webViewStartupStage2(
    JNIEnv* env,
    jclass jcaller,
    jlong startTimeMs,
    jlong durationMs,
    jboolean isColdStartup) {
  JNI_TraceEvent_WebViewStartupStage2(
      env,
      startTimeMs,
      durationMs,
      isColdStartup);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_WebViewStartupStartChromiumLocked(
    JNIEnv* env,
    jlong startTimeMs,
    jlong durationMs,
    jint callSite,
    jboolean fromUIThread);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1webViewStartupStartChromiumLocked(
    JNIEnv* env,
    jclass jcaller,
    jlong startTimeMs,
    jlong durationMs,
    jint callSite,
    jboolean fromUIThread) {
  JNI_TraceEvent_WebViewStartupStartChromiumLocked(
      env,
      startTimeMs,
      durationMs,
      callSite,
      fromUIThread);
}

// Forward declaration. To be implemented by the including .cc file.
static void JNI_TraceEvent_WebViewStartupTotalFactoryInit(
    JNIEnv* env,
    jlong startTimeMs,
    jlong durationMs);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1TraceEvent_1webViewStartupTotalFactoryInit(
    JNIEnv* env,
    jclass jcaller,
    jlong startTimeMs,
    jlong durationMs) {
  JNI_TraceEvent_WebViewStartupTotalFactoryInit(env, startTimeMs, durationMs);
}

// Native to Java functions
static void Java_TraceEvent_dumpViewHierarchy(
    JNIEnv* env,
    jlong dumpProtoPtr,
    const jni_zero::JavaRef<jobject>& list) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_TraceEvent_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "dumpViewHierarchy",
      "(JLjava/lang/Object;)V",
      &cached_method_id);
  env->CallStaticVoidMethod(
      clazz,
      call_context.method_id(),
      dumpProtoPtr,
      list.obj());
}

static void Java_TraceEvent_setEnabled(JNIEnv* env, jboolean enabled) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_TraceEvent_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "setEnabled",
      "(Z)V",
      &cached_method_id);
  env->CallStaticVoidMethod(clazz, call_context.method_id(), enabled);
}

static void Java_TraceEvent_setEventNameFilteringEnabled(
    JNIEnv* env,
    jboolean enabled) {
  static std::atomic<jmethodID> cached_method_id(nullptr);
  jclass clazz = org_chromium_base_TraceEvent_clazz(env);
  CHECK_CLAZZ(env, clazz, clazz);
  jni_zero::internal::JniJavaCallContext<true> call_context;
  call_context.Init<jni_zero::MethodID::TYPE_STATIC>(
      env,
      clazz,
      "setEventNameFilteringEnabled",
      "(Z)V",
      &cached_method_id);
  env->CallStaticVoidMethod(clazz, call_context.method_id(), enabled);
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_TraceEvent_JNI
