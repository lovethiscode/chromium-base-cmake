cmake_minimum_required(VERSION 3.10)
project(console)
set(CMAKE_CXX_STANDARD 20) # 设置 C++ 标准为 C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 要求使用 C++20 标准
add_executable(console main.cc)


target_include_directories(console PRIVATE ../)
target_link_libraries(console chromium_base)

