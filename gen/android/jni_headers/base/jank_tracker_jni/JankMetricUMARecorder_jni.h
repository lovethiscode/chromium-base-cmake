// This file was generated by
//     //third_party/jni_zero/jni_zero.py
// For
//     org.chromium.base.jank_tracker.JankMetricUMARecorder

#ifndef org_chromium_base_jank_tracker_JankMetricUMARecorder_JNI
#define org_chromium_base_jank_tracker_JankMetricUMARecorder_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "../../../../../../third_party/jni_zero/jni_zero_internal.h"
namespace base {
namespace android {
// Java to native functions
// Forward declaration. To be implemented by the including .cc file.
static void JNI_JankMetricUMARecorder_RecordJankMetrics(
    JNIEnv* env,
    const jni_zero::JavaParamRef<jlongArray>& durationsNs,
    const jni_zero::JavaParamRef<jintArray>& missedVsyncs,
    jlong reportingIntervalStartTime,
    jlong reportingIntervalDuration,
    jint scenario);

JNI_POSSIBLE_BOUNDARY_EXPORT void Java_org_jni_1zero_GEN_1JNI_org_1chromium_1base_1jank_11tracker_1JankMetricUMARecorder_1recordJankMetrics(
    JNIEnv* env,
    jclass jcaller,
    jobject durationsNs,
    jobject missedVsyncs,
    jlong reportingIntervalStartTime,
    jlong reportingIntervalDuration,
    jint scenario) {
  JNI_JankMetricUMARecorder_RecordJankMetrics(
      env,
      jni_zero::JavaParamRef<jlongArray>(env, static_cast<jlongArray>(durationsNs)),
      jni_zero::JavaParamRef<jintArray>(env, static_cast<jintArray>(missedVsyncs)),
      reportingIntervalStartTime,
      reportingIntervalDuration,
      scenario);
}


}  // namespace android
}  // namespace base
#endif  // org_chromium_base_jank_tracker_JankMetricUMARecorder_JNI
