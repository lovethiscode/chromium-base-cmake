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

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // Setup code that might create autoreleased objects goes here.
    }
    base::CommandLine::Init(argc, argv);
    base::AtExitManager at_exit_manager;
    base::SingleThreadTaskExecutor main_task_executor(base::MessagePumpType::UI);
    
    main_task_executor.task_runner()->PostDelayedTask(
        FROM_HERE, base::BindOnce([]() {
          LOG(INFO) << "Hello from the task runner!";
      }),  base::Seconds(5));
    //base::RunLoop run_loop;
    //run_loop.Run();
    return NSApplicationMain(argc, argv);
    //return 0;
}
