cmake_minimum_required(VERSION 3.29)

SET(PROJECT_NAME double-conversion)

add_library(${PROJECT_NAME} STATIC)

add_library(desktop-app::double-conversion ALIAS ${PROJECT_NAME})
init_target(${PROJECT_NAME})

# 相对路径
get_filename_component(chromium_real_path ${CMAKE_CURRENT_SOURCE_DIR} REALPATH)


nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/third_party/double_conversion/double-conversion/bignum-dtoa.cc"
"base/third_party/double_conversion/double-conversion/bignum-dtoa.h"
"base/third_party/double_conversion/double-conversion/bignum.cc"
"base/third_party/double_conversion/double-conversion/bignum.h"
"base/third_party/double_conversion/double-conversion/cached-powers.cc"
"base/third_party/double_conversion/double-conversion/cached-powers.h"
"base/third_party/double_conversion/double-conversion/diy-fp.h"
"base/third_party/double_conversion/double-conversion/double-conversion.h"
"base/third_party/double_conversion/double-conversion/double-to-string.cc"
"base/third_party/double_conversion/double-conversion/double-to-string.h"
"base/third_party/double_conversion/double-conversion/fast-dtoa.cc"
"base/third_party/double_conversion/double-conversion/fast-dtoa.h"
"base/third_party/double_conversion/double-conversion/fixed-dtoa.cc"
"base/third_party/double_conversion/double-conversion/fixed-dtoa.h"
"base/third_party/double_conversion/double-conversion/ieee.h"
"base/third_party/double_conversion/double-conversion/string-to-double.cc"
"base/third_party/double_conversion/double-conversion/string-to-double.h"
"base/third_party/double_conversion/double-conversion/strtod.cc"
"base/third_party/double_conversion/double-conversion/strtod.h"
"base/third_party/double_conversion/double-conversion/utils.h"
)


target_link_libraries(${PROJECT_NAME})