//
//  main.m
//  demo
//
//  Created by test on 2024/1/8.
//

#import <Cocoa/Cocoa.h>
#include "base/command_line.h"
#include "base/logging.h"
#include <base/at_exit.h>
#include <base/task/single_thread_task_executor.h>
#include <base/run_loop.h>
#include <base/task/thread_pool.h>
#include <base/task/thread_pool/thread_pool_instance.h>
#include <base/message_loop/message_pump_apple.h>

int argc_;
const char ** argv_;

class MyAppleMessagePump : public base::MessagePumpNSApplication {
public:
    void DoRun(Delegate* delegate) override {
        //must call NSApplicationMain on DoRun
        NSApplicationMain(argc_, argv_);
    }
private:
};


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // Setup code that might create autoreleased objects goes here.
    }
    argc_ = argc;
    argv_ = argv;
    base::CommandLine::Init(argc, argv);
    base::AtExitManager at_exit_manager;
    base::ThreadPoolInstance::Create("test");
    base::ThreadPoolInstance::InitParams param(5);
    base::ThreadPoolInstance::Get()->Start(param);
    base::MessagePump::OverrideMessagePumpForUIFactory([]() ->std::unique_ptr<base::MessagePump> {
        return std::make_unique<MyAppleMessagePump>();
    });
    base::SingleThreadTaskExecutor main_task_executor(base::MessagePumpType::UI);
    
    main_task_executor.task_runner()->PostDelayedTask(
       FROM_HERE, base::BindOnce([]() {
         LOG(INFO) << "Hello from the task runner!";
         }), base::Seconds(5));
    auto runner = base::ThreadPool::CreateTaskRunner(base::TaskTraits({base::TaskPriority::USER_VISIBLE}));
    runner->PostDelayedTask(FROM_HERE, base::BindOnce([](){
        LOG(INFO) << "Hello from the threadpool task runner!";
    }), base::Seconds(5));
    //must call Run()
    base::RunLoop().Run();
    return 0;
}
