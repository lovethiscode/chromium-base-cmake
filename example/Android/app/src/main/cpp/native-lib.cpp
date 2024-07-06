#include <jni.h>
#include <string>
#include "base/command_line.h"
#include "base/logging.h"
#include <base/at_exit.h>
#include <base/task/single_thread_task_executor.h>
#include <base/task/thread_pool.h>
#include <base/task/thread_pool/thread_pool_instance.h>

#include "base/android/base_jni_onload.h"
#include "base/android/jni_android.h"



extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    base::android::InitVM(vm);
    base::android::OnJNIOnLoadInit();
return JNI_VERSION_1_4;
}

base::SingleThreadTaskExecutor* main_task_executor;
extern "C"
JNIEXPORT void JNICALL
Java_com_example_myapp_MainActivity_Init(JNIEnv *env, jclass clazz) {
    base::CommandLine::Init(0, nullptr);

    base::ThreadPoolInstance::Create("android");
    base::ThreadPoolInstance::InitParams param(5);
    base::ThreadPoolInstance::Get()->Start(param);

    auto runner = base::ThreadPool::CreateTaskRunner(base::TaskTraits({base::TaskPriority::USER_VISIBLE}));
    runner->PostDelayedTask(FROM_HERE, base::BindOnce([](){
        LOG(INFO) << "Hello from the threadpool task runner!";
    }), base::Seconds(5));

    main_task_executor = new base::SingleThreadTaskExecutor(base::MessagePumpType::UI);

    main_task_executor->task_runner()->PostDelayedTask(
            FROM_HERE, base::BindOnce([]() {
                LOG(INFO) << "Hello from the task runner!";
            }), base::Seconds(5));
}