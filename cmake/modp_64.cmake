cmake_minimum_required(VERSION 3.29)

# 相对路径
get_filename_component(partition_allocator_real_path ${CMAKE_CURRENT_SOURCE_DIR} REALPATH)

set(PROJECT_NAME modp_64)
add_library(${PROJECT_NAME} STATIC)
init_target(${PROJECT_NAME})

nice_target_sources(${PROJECT_NAME} ${partition_allocator_real_path}
PRIVATE
"third_party/modp_b64/modp_b64.cc"
"third_party/modp_b64/modp_b64.h"
"third_party/modp_b64/modp_b64_data.h"
)

target_link_libraries(${PROJECT_NAME})

