cmake_minimum_required(VERSION 3.10)
project(MyProject)
set(CMAKE_CXX_STANDARD 20) # 设置 C++ 标准为 C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 要求使用 C++20 标准
add_executable(MyProject main.cc)


target_include_directories(MyProject PRIVATE ../)
target_link_libraries(MyProject chromium_base)

if (MSVC)
  target_compile_options(MyProject PRIVATE "/permissive-")
elseif(MACOSX)
endif (MSVC)
