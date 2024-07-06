cmake_minimum_required(VERSION 3.5)

project(MyApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

	add_compile_options(/wd4068)  # Disable unknown pragma warnings
	add_definitions(-DNOMINMAX)


add_executable(MyApp WIN32 main.cc )
add_compile_definitions(UNICODE _UNICODE)
target_link_libraries(MyApp chromium_base)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set_target_properties(MyApp PROPERTIES VS_DEBUGGER_ENVIRONMENT "PATH=%PATH%;${CMAKE_PREFIX_PATH}/bin")
  endif()