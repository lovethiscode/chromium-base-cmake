#include <Windows.h>
#include <base/message_loop/message_pump.h>
#include <base/at_exit.h>
#include "base/command_line.h"
#include <base/task/single_thread_task_executor.h>
#include <base/run_loop.h>
#include "base/logging.h"

class MyDelegate : public base::MessagePump::Delegate {
public:

};


LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp) {
  switch (msg) {
  case WM_DESTROY:
    PostQuitMessage(0);
    break;
  default:
    return DefWindowProcW(hWnd, msg, wp, lp);
  }
  return 0;
}

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow) {
  // 获取命令行字符串
  LPWSTR commandLine = GetCommandLineW();

  // 解析命令行字符串
  int argc;
  LPWSTR* argvW = CommandLineToArgvW(commandLine, &argc);
  if (!argvW) {
    return -1; // 如果解析失败，则退出
  }
  // 为转换后的 LPSTR 数组分配空间
  LPSTR* argv = new LPSTR[argc];

  // 转换每个 LPWSTR 到 LPSTR
  for (int i = 0; i < argc; ++i) {
    // 获取当前宽字符串的长度（以字符为单位），并为其分配足够的空间
    int length = WideCharToMultiByte(CP_UTF8, 0, argvW[i], -1, NULL, 0, NULL, NULL);
    argv[i] = new char[length];

    // 执行转换
    WideCharToMultiByte(CP_UTF8, 0, argvW[i], -1, argv[i], length, NULL, NULL);
  }

  base::CommandLine::Init(argc, argv);
  base::AtExitManager at_exit_manager;


  WNDCLASSW wc = { 0 };

  wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
  wc.hCursor = LoadCursor(NULL, IDC_ARROW);
  wc.hInstance = hInst;
  wc.lpszClassName = L"myWindowClass";
  wc.lpfnWndProc = WindowProcedure;

  if (!RegisterClassW(&wc)) return -1;

  CreateWindowW(L"myWindowClass", L"My Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 500, 500, NULL, NULL, NULL, NULL);

  base::SingleThreadTaskExecutor main_task_executor(base::MessagePumpType::UI);
  base::RunLoop run_loop;
  main_task_executor.task_runner()->PostDelayedTask(
    FROM_HERE, base::BindOnce([](base::RunLoop& run_loop) {
      LOG(INFO) << "Hello from the task runner!";
      }, std::ref(run_loop)), base::Seconds(5));
  run_loop.Run();

  return 0;
}

