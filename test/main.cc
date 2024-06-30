
#include <iostream>
#include <base/files/file_path.h>
#include <base/path_service.h>
#include <base/run_loop.h>
#include <base/task/single_thread_task_executor.h>
#include <base/at_exit.h>
#include <base/system/sys_info.h>
#include "base/cpu.h"
#include "base/command_line.h"
#include "base/logging.h"

int main(int argc, char** argv)
{
   
    base::CommandLine::Init(argc, argv);
   base::AtExitManager at_exit_manager;

    std::string os_name = base::SysInfo::OperatingSystemName();
    std::string os_version = base::SysInfo::OperatingSystemVersion();
    
    base::CPU cpu_info;
    int cpu_family = cpu_info.family();
    int cpu_model = cpu_info.model();
    
    uint64_t total_memory = base::SysInfo::AmountOfPhysicalMemory();
    uint64_t free_memory = base::SysInfo::AmountOfAvailablePhysicalMemory();
    LOG(INFO) << "Hello World!" << os_name << " version:" << os_version << " CPU family:" << cpu_family << " CPU model:" << cpu_model << " Total memory:" << total_memory << " Free memory:" << free_memory;
  base::SingleThreadTaskExecutor main_task_executor(base::MessagePumpType::UI);
  base::RunLoop run_loop;
  main_task_executor.task_runner()->PostDelayedTask(
      FROM_HERE, base::BindOnce([]() {
        LOG(INFO) << "Hello from the task runner!";
    }),  base::Seconds(5));
  run_loop.Run();
  return 0;
}
