
cmake_minimum_required(VERSION 3.29)
SET(PROJECT_NAME chromium)
project(${PROJECT_NAME})
#cmake . -B testbuild -G "Visual Studio 17 2022" -A x64 -T ClangCL
#set DEPOT_TOOLS_WIN_TOOLCHAIN=0
#gn gen out\Default --args="is_component_build=false is_debug=true enable_base_tracing=false enable_rust_json=false" 

#PA_BUILDFLAG_INTERNAL_USE_ALLOCATOR_SHIM
#gn gen out\MacOSX --args="is_component_build=false is_debug=true enable_base_tracing=false enable_rust_json=false symbol_level=0"
#gn gen --ide=vs --filters=//base --no-deps out\Default

#------------------linux
#clang17
#wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key | sudo apt-key add -
#sudo add-apt-repository "deb http://apt.llvm.org/focal/ llvm-toolchain-focal-17 main"
#sudo apt update
#sudo apt install clang-17
#sudo apt-get install libc++-17-dev libc++abi-17-dev
# sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-17 100

# 下载chrombase 代码
#判断目录是否存在
if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/base)
    execute_process(
        COMMAND git clone https://chromium.googlesource.com/chromium/src/base ${CMAKE_CURRENT_SOURCE_DIR}/base
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
      )
    
    execute_process(
    COMMAND git checkout f6b1264
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/base
    )

    #git apply 补丁
    execute_process(
        COMMAND git apply ${CMAKE_CURRENT_SOURCE_DIR}/patch/chrom_base.patch
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/base
    )

endif()


# 下载boringssl 代码
if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/third_party/boringssl/src)
    execute_process(
      COMMAND git clone https://boringssl.googlesource.com/boringssl ${CMAKE_CURRENT_SOURCE_DIR}/third_party/boringssl/src
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )
    execute_process(
      COMMAND git checkout 45db24b
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/third_party/boringssl/src
    )

    execute_process(
        COMMAND git apply ${CMAKE_CURRENT_SOURCE_DIR}/patch/boringssl.diff
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/third_party/boringssl/src
    )
endif()


# 下载 abseil-cpp 代码
if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/third_party/abseil-cpp)
    execute_process(
    COMMAND git clone https://github.com/abseil/abseil-cpp.git ${CMAKE_CURRENT_SOURCE_DIR}/third_party/abseil-cpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )
    execute_process(
    COMMAND git checkout 20240116.2
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/third_party/abseil-cpp
    )
endif()
# 下载 googletest 代码
if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/src)
    execute_process(
    COMMAND git clone https://github.com/google/googletest.git ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/src
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    execute_process(
    COMMAND git checkout v1.14.0
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/src
    )
endif()

if(LINUX OR ANDROID)
    #libevent
    #https://github.com/libevent/libevent.git
    if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/third_party/libevent)
        execute_process(
        COMMAND git clone https://github.com/libevent/libevent.git ${CMAKE_CURRENT_SOURCE_DIR}/third_party/libevent
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )
        execute_process(
        COMMAND git checkout release-2.1.12-stable
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/third_party/libevent
        )
    endif()
endif()

if(ANDROID)
    #https://chromium.googlesource.com/external/github.com/google/cpu_features.git
    if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/third_party/cpu_features/src)
        execute_process(
        COMMAND git clone https://chromium.googlesource.com/external/github.com/google/cpu_features.git ${CMAKE_CURRENT_SOURCE_DIR}/third_party/cpu_features/src
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )
        execute_process(
        COMMAND git checkout 936b9ab5515dead115606559502e3864958f7f6e
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/third_party/cpu_features/src
        )
    endif()
endif(ANDROID)


set(use_partition_alloc ON)
set(use_blink ON)
set(use_starscan ON)


if(WIN32)
    if (CMAKE_SIZEOF_VOID_P EQUAL 4)
        set(CURRENT_CPU "x86")
    elseif (CMAKE_SIZEOF_VOID_P EQUAL 8)
        set(CURRENT_CPU "x64")
    else()
        message(FATAL_ERROR "未知的指针大小: ${CMAKE_SIZEOF_VOID_P}")
    endif()
elseif(APPLE)  
    if(${PLATFORM} STREQUAL "MAC_ARM64")     
        set(CURRENT_CPU "arm64")
    elseif(${PLATFORM} STREQUAL "MAC")
        set(CURRENT_CPU "x64")
    elseif(${PLATFORM} STREQUAL "OS64")
        set(CURRENT_CPU "arm64")
        set(ARM64 ON)
        set(ios_stack_profiler_enabled ON)
    elseif(${PLATFORM} STREQUAL "SIMULATOR64")
        set(CURRENT_CPU "x64")
        set(SIMULATOR ON)
        set(ios_stack_profiler_enabled ON)
    elseif(${PLATFORM} STREQUAL "SIMULATORARM64")
        set(CURRENT_CPU "arm64")
        set(ARM64 ON)
        set(SIMULATOR ON)
        set(ios_stack_profiler_enabled ON)
    endif()
elseif(LINUX)
    set(CURRENT_CPU "x64")
    set(use_libevent ON)
    set(EVENT__LIBRARY_TYPE "STATIC")
    set(EVENT__DISABLE_OPENSSL ON)
    set(EVENT__DISABLE_SAMPLES ON)
    set(EVENT__DISABLE_BENCHMARK ON)
    set(EVENT__DISABLE_TESTS ON)
    set(enable_message_pump_epoll ON)
elseif(ANDROID)
  message("ANDROID_ABI :${ANDROID_ABI}")
  if(${ANDROID_ABI} STREQUAL "x86")
    set(CURRENT_CPU "x86")
  elseif(${ANDROID_ABI} STREQUAL "arm64-v8a")
    set(CURRENT_CPU "arm64")
  elseif(${ANDROID_ABI} STREQUAL "armeabi-v7a")
    set(CURRENT_CPU "arm")
  endif()
  set(use_libevent ON)
  set(EVENT__LIBRARY_TYPE "STATIC")
  set(EVENT__DISABLE_OPENSSL ON)
  set(EVENT__DISABLE_SAMPLES ON)
  set(EVENT__DISABLE_BENCHMARK ON)
  set(EVENT__DISABLE_TESTS ON)
  set(enable_message_pump_epoll ON)
else()
    message(FATAL_ERROR "unknown platform")
endif(WIN32)

#cmake 工具文件
include(cmake/options.cmake)
include(cmake/init_target.cmake)
include(cmake/nice_target_sources.cmake)

# chromium base 源码自带的两个
include(cmake/double-conversion.cmake)
include(cmake/partition_allocator.cmake)
include(cmake/modp_64.cmake)

#第三方
set(ABSL_PROPAGATE_CXX_STD ON)
add_subdirectory(third_party/abseil-cpp)

#boringssl
add_subdirectory(third_party/boringssl/src)
set_target_properties(ssl PROPERTIES FOLDER "boringssl")
set_target_properties(crypto PROPERTIES FOLDER "boringssl")
set_target_properties(fipsmodule PROPERTIES FOLDER "boringssl")
set_target_properties(boringssl_prefix_symbols PROPERTIES FOLDER "boringssl")

target_compile_options(fipsmodule PRIVATE -Wno-shorten-64-to-32)
target_compile_options(ssl PRIVATE -Wno-shorten-64-to-32)
target_compile_options(crypto PRIVATE -Wno-shorten-64-to-32)

#googletest
add_subdirectory(third_party/googletest/src)

set_target_properties(gmock_main PROPERTIES FOLDER "googletest")
set_target_properties(gtest PROPERTIES FOLDER "googletest")
set_target_properties(gmock PROPERTIES FOLDER "googletest")
set_target_properties(gtest_main PROPERTIES FOLDER "googletest")

if(LINUX OR ANDROID)
 add_subdirectory(third_party/libevent)
endif()

if(ANDROID)
    add_subdirectory(third_party/cpu_features/src)
endif(ANDROID)



#下面是chromium_base的源码
SET(PROJECT_NAME chromium_base)
if(CHROM_BUILD_SHARED)
    add_library(${PROJECT_NAME} SHARED)
else()
    add_library(${PROJECT_NAME} STATIC)
endif()


add_library(desktop-app::chromium_base ALIAS ${PROJECT_NAME})
init_target(${PROJECT_NAME})
if(WIN32)
set(CMAKE_SYSTEM_VERSION "10.0.26100.0")
endif()
# 相对路径
get_filename_component(chromium_real_path ${CMAKE_CURRENT_SOURCE_DIR} REALPATH)

#包含生成的头文件
if(WIN32)
    target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gen/win   
        ${CMAKE_CURRENT_SOURCE_DIR}/gen/win/base/allocator/partition_allocator/src)
elseif(MACOSX)
    target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gen/macosx   
        ${CMAKE_CURRENT_SOURCE_DIR}/gen/macosx/base/allocator/partition_allocator/src)
elseif(IOS)
    target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gen/ios   
    ${CMAKE_CURRENT_SOURCE_DIR}/gen/ios/base/allocator/partition_allocator/src)
elseif(LINUX)
    target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gen/linux   
${CMAKE_CURRENT_SOURCE_DIR}/gen/linux/base/allocator/partition_allocator/src
${CMAKE_CURRENT_SOURCE_DIR}/third_party/libevent/include)
elseif(ANDROID)
    target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gen/android
    ${CMAKE_CURRENT_SOURCE_DIR}/gen/android/base/allocator/partition_allocator/src
    ${CMAKE_CURRENT_SOURCE_DIR}/gen/android/jni_headers
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/cpu_features/src/ndk_compat)
endif(WIN32)

target_include_directories(${PROJECT_NAME} PRIVATE
${CMAKE_CURRENT_SOURCE_DIR}/third_party/boringssl/src/include
${CMAKE_CURRENT_SOURCE_DIR}/third_party/abseil-cpp
)


target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} 
${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src)


nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/allocator/allocator_check.cc"
"base/allocator/allocator_check.h"
"base/allocator/dispatcher/configuration.h"
"base/allocator/dispatcher/dispatcher.cc"
"base/allocator/dispatcher/dispatcher.h"
"base/allocator/dispatcher/initializer.h"
"base/allocator/dispatcher/internal/dispatch_data.cc"
"base/allocator/dispatcher/internal/dispatch_data.h"
"base/allocator/dispatcher/internal/dispatcher_internal.h"
"base/allocator/dispatcher/internal/tools.h"
"base/allocator/dispatcher/memory_tagging.cc"
"base/allocator/dispatcher/memory_tagging.h"
"base/allocator/dispatcher/notification_data.h"
"base/allocator/dispatcher/reentry_guard.cc"
"base/allocator/dispatcher/reentry_guard.h"
"base/allocator/dispatcher/subsystem.h"
"base/allocator/dispatcher/tls.cc"
"base/allocator/dispatcher/tls.h"
"base/at_exit.cc"
"base/at_exit.h"
"base/atomic_ref_count.h"
"base/atomic_sequence_num.h"
"base/atomicops.h"
"base/atomicops_internals_atomicword_compat.h"
"base/atomicops_internals_portable.h"
"base/auto_reset.h"
"base/barrier_callback.h"
"base/barrier_closure.cc"
"base/barrier_closure.h"
"base/base64.cc"
"base/base64.h"
"base/base64url.cc"
"base/base64url.h"
"base/base_switches.h"
"base/base_switches.cc"
"base/big_endian.h"
"base/bit_cast.h"
"base/bits.h"
"base/build_time.h"
"base/callback_list.cc"
"base/callback_list.h"
"base/cancelable_callback.h"
"base/check.cc"
"base/check.h"
"base/check_deref.h"
"base/check_is_test.cc"
"base/check_is_test.h"
"base/check_op.cc"
"base/check_op.h"
"base/command_line.cc"
"base/command_line.h"
"base/compiler_specific.h"
"base/component_export.h"
"base/containers/adapters.h"
"base/containers/buffer_iterator.h"
"base/containers/checked_iterators.h"
"base/containers/circular_deque.h"
"base/containers/contains.h"
"base/containers/dynamic_extent.h"
"base/containers/enum_set.h"
"base/containers/extend.h"
"base/containers/fixed_flat_map.h"
"base/containers/fixed_flat_set.h"
"base/containers/flat_map.h"
"base/containers/flat_set.h"
"base/containers/flat_tree.h"
"base/containers/heap_array.h"
"base/containers/id_map.h"
"base/containers/intrusive_heap.cc"
"base/containers/intrusive_heap.h"
"base/containers/linked_list.cc"
"base/containers/linked_list.h"
"base/containers/lru_cache.h"
"base/containers/map_util.h"
"base/containers/small_map.h"
"base/containers/span.h"
"base/containers/span_reader.h"
"base/containers/span_writer.h"
"base/containers/stack.h"
"base/containers/to_value_list.h"
"base/containers/to_vector.h"
"base/containers/unique_ptr_adapters.h"
"base/containers/util.h"
"base/containers/vector_buffer.h"
"base/cpu_reduction_experiment.cc"
"base/cpu_reduction_experiment.h"
"base/critical_closure.h"
"base/dcheck_is_on.h"
"base/debug/alias.cc"
"base/debug/alias.h"
"base/debug/asan_invalid_access.cc"
"base/debug/asan_invalid_access.h"
"base/debug/asan_service.cc"
"base/debug/asan_service.h"
"base/debug/debugger.cc"
"base/debug/debugger.h"
"base/debug/dump_without_crashing.cc"
"base/debug/dump_without_crashing.h"
"base/debug/leak_annotations.h"
"base/debug/profiler.cc"
"base/debug/profiler.h"
"base/debug/task_trace.cc"
"base/debug/task_trace.h"
"base/environment.cc"
"base/environment.h"
"base/export_template.h"
"base/feature_list.cc"
"base/feature_list.h"
"base/features.cc"
"base/features.h"
"base/file_version_info.h"
"base/files/block_tests_writing_to_special_dirs.cc"
"base/files/block_tests_writing_to_special_dirs.h"
"base/files/dir_reader_fallback.h"
"base/files/file.cc"
"base/files/file.h"
"base/files/file_error_or.h"
"base/files/file_path.cc"
"base/files/file_path.h"
"base/files/file_tracing.cc"
"base/files/file_tracing.h"
"base/files/memory_mapped_file.cc"
"base/files/memory_mapped_file.h"
"base/files/platform_file.h"
"base/files/safe_base_name.cc"
"base/files/safe_base_name.h"
"base/files/scoped_file.cc"
"base/files/scoped_file.h"
"base/format_macros.h"
"base/functional/bind.h"
"base/functional/bind_internal.h"
"base/functional/callback.h"
"base/functional/callback_forward.h"
"base/functional/callback_helpers.cc"
"base/functional/callback_helpers.h"
"base/functional/callback_internal.cc"
"base/functional/callback_internal.h"
"base/functional/callback_tags.h"
"base/functional/concurrent_callbacks.h"
"base/functional/concurrent_closures.cc"
"base/functional/concurrent_closures.h"
"base/functional/disallow_unretained.h"
"base/functional/function_ref.h"
"base/functional/overloaded.h"
"base/functional/unretained_traits.h"
"base/gtest_prod_util.h"
"base/hash/hash.cc"
"base/hash/hash.h"
"base/hash/legacy_hash.cc"
"base/hash/legacy_hash.h"
"base/json/json_common.h"
"base/json/json_parser.cc"
"base/json/json_parser.h"
"base/json/json_reader.cc"
"base/json/json_reader.h"
"base/json/json_string_value_serializer.cc"
"base/json/json_string_value_serializer.h"
"base/json/json_value_converter.cc"
"base/json/json_value_converter.h"
"base/json/json_writer.cc"
"base/json/json_writer.h"
"base/json/string_escape.cc"
"base/json/string_escape.h"
"base/json/values_util.cc"
"base/json/values_util.h"
"base/lazy_instance.h"
"base/lazy_instance_helpers.cc"
"base/lazy_instance_helpers.h"

"base/location.cc"
"base/location.h"
"base/logging.cc"
"base/logging.h"
"base/macros/concat.h"
"base/macros/if.h"
"base/macros/is_empty.h"
"base/macros/remove_parens.h"
"base/macros/uniquify.h"
"base/memory/aligned_memory.cc"
"base/memory/aligned_memory.h"
"base/memory/free_deleter.h"
"base/memory/memory_pressure_listener.cc"
"base/memory/memory_pressure_listener.h"
"base/memory/memory_pressure_monitor.cc"
"base/memory/memory_pressure_monitor.h"
"base/memory/nonscannable_memory.cc"
"base/memory/nonscannable_memory.h"
"base/memory/page_size.h"
"base/memory/platform_shared_memory_handle.cc"
"base/memory/platform_shared_memory_handle.h"
"base/memory/platform_shared_memory_mapper.h"
"base/memory/platform_shared_memory_region.cc"
"base/memory/platform_shared_memory_region.h"
"base/memory/post_delayed_memory_reduction_task.cc"
"base/memory/post_delayed_memory_reduction_task.h"
"base/memory/protected_memory.h"
"base/memory/ptr_util.h"
"base/memory/raw_ptr.h"
"base/memory/raw_ptr_asan_bound_arg_tracker.cc"
"base/memory/raw_ptr_asan_bound_arg_tracker.h"
"base/memory/raw_ptr_asan_hooks.cc"
"base/memory/raw_ptr_asan_hooks.h"
"base/memory/raw_ptr_asan_service.cc"
"base/memory/raw_ptr_asan_service.h"
"base/memory/raw_ptr_cast.h"
"base/memory/raw_ptr_exclusion.h"
"base/memory/raw_ref.h"
"base/memory/raw_scoped_refptr_mismatch_checker.h"
"base/memory/raw_span.h"
"base/memory/read_only_shared_memory_region.cc"
"base/memory/read_only_shared_memory_region.h"
"base/memory/ref_counted.cc"
"base/memory/ref_counted.h"
"base/memory/ref_counted_delete_on_sequence.h"
"base/memory/ref_counted_memory.cc"
"base/memory/ref_counted_memory.h"
"base/memory/safe_ref.h"
"base/memory/safe_ref_traits.h"
"base/memory/safety_checks.h"
"base/memory/scoped_policy.h"
"base/memory/scoped_refptr.h"
"base/memory/shared_memory_hooks.h"
"base/memory/shared_memory_mapper.cc"
"base/memory/shared_memory_mapper.h"
"base/memory/shared_memory_mapping.cc"
"base/memory/shared_memory_mapping.h"
"base/memory/shared_memory_security_policy.cc"
"base/memory/shared_memory_security_policy.h"
"base/memory/shared_memory_tracker.cc"
"base/memory/shared_memory_tracker.h"
"base/memory/singleton.h"
"base/memory/stack_allocated.h"
"base/memory/unsafe_shared_memory_pool.cc"
"base/memory/unsafe_shared_memory_pool.h"
"base/memory/unsafe_shared_memory_region.cc"
"base/memory/unsafe_shared_memory_region.h"
"base/memory/values_equivalent.h"
"base/memory/weak_auto_reset.h"
"base/memory/weak_ptr.cc"
"base/memory/weak_ptr.h"
"base/memory/writable_shared_memory_region.cc"
"base/memory/writable_shared_memory_region.h"
"base/message_loop/message_pump.cc"
"base/message_loop/message_pump.h"
"base/message_loop/message_pump_default.cc"
"base/message_loop/message_pump_default.h"
"base/message_loop/message_pump_for_io.h"
"base/message_loop/message_pump_for_ui.h"
"base/message_loop/message_pump_type.h"
"base/message_loop/work_id_provider.cc"
"base/message_loop/work_id_provider.h"
"base/metrics/bucket_ranges.cc"
"base/metrics/bucket_ranges.h"
"base/metrics/crc32.cc"
"base/metrics/crc32.h"
"base/metrics/dummy_histogram.cc"
"base/metrics/dummy_histogram.h"
"base/metrics/field_trial.cc"
"base/metrics/field_trial.h"
"base/metrics/field_trial_list_including_low_anonymity.cc"
"base/metrics/field_trial_list_including_low_anonymity.h"
"base/metrics/field_trial_param_associator.cc"
"base/metrics/field_trial_param_associator.h"
"base/metrics/field_trial_params.cc"
"base/metrics/field_trial_params.h"
"base/metrics/histogram.cc"
"base/metrics/histogram.h"
"base/metrics/histogram_base.cc"
"base/metrics/histogram_base.h"
"base/metrics/histogram_delta_serialization.cc"
"base/metrics/histogram_delta_serialization.h"
"base/metrics/histogram_flattener.h"
"base/metrics/histogram_functions.cc"
"base/metrics/histogram_functions.h"
"base/metrics/histogram_macros.h"
"base/metrics/histogram_macros_internal.h"
"base/metrics/histogram_macros_local.h"
"base/metrics/histogram_samples.cc"
"base/metrics/histogram_samples.h"
"base/metrics/histogram_snapshot_manager.cc"
"base/metrics/histogram_snapshot_manager.h"
"base/metrics/metrics_hashes.cc"
"base/metrics/metrics_hashes.h"
"base/metrics/persistent_histogram_allocator.cc"
"base/metrics/persistent_histogram_allocator.h"
"base/metrics/persistent_memory_allocator.cc"
"base/metrics/persistent_memory_allocator.h"
"base/metrics/persistent_sample_map.cc"
"base/metrics/persistent_sample_map.h"
"base/metrics/ranges_manager.cc"
"base/metrics/ranges_manager.h"
"base/metrics/record_histogram_checker.h"
"base/metrics/sample_map.cc"
"base/metrics/sample_map.h"
"base/metrics/sample_vector.cc"
"base/metrics/sample_vector.h"
"base/metrics/single_sample_metrics.cc"
"base/metrics/single_sample_metrics.h"
"base/metrics/sparse_histogram.cc"
"base/metrics/sparse_histogram.h"
"base/metrics/statistics_recorder.cc"
"base/metrics/statistics_recorder.h"
"base/metrics/user_metrics.cc"
"base/metrics/user_metrics.h"
"base/metrics/user_metrics_action.h"
"base/no_destructor.h"
"base/not_fatal_until.h"
"base/notimplemented.h"
"base/notreached.h"
"base/observer_list.h"
"base/observer_list_internal.cc"
"base/observer_list_internal.h"
"base/observer_list_threadsafe.cc"
"base/observer_list_threadsafe.h"
"base/observer_list_types.cc"
"base/observer_list_types.h"
"base/one_shot_event.cc"
"base/one_shot_event.h"
"base/parameter_pack.h"
"base/pending_task.cc"
"base/pending_task.h"
"base/pickle.cc"
"base/pickle.h"
"base/power_monitor/battery_level_provider.cc"
"base/power_monitor/battery_level_provider.h"
"base/power_monitor/battery_state_sampler.cc"
"base/power_monitor/battery_state_sampler.h"
"base/power_monitor/cpu_frequency_utils.cc"
"base/power_monitor/cpu_frequency_utils.h"
"base/power_monitor/power_monitor.cc"
"base/power_monitor/power_monitor.h"
"base/power_monitor/power_monitor_device_source.cc"
"base/power_monitor/power_monitor_device_source.h"
"base/power_monitor/power_monitor_features.cc"
"base/power_monitor/power_monitor_features.h"
"base/power_monitor/power_monitor_source.cc"
"base/power_monitor/power_monitor_source.h"
"base/power_monitor/power_observer.h"
"base/power_monitor/sampling_event_source.cc"
"base/power_monitor/sampling_event_source.h"
"base/power_monitor/timer_sampling_event_source.cc"
"base/power_monitor/timer_sampling_event_source.h"
"base/process/current_process.cc"
"base/process/current_process.h"
"base/process/current_process_test.h"
"base/process/environment_internal.cc"
"base/process/environment_internal.h"
"base/process/process.h"
"base/process/process_handle.cc"
"base/process/process_handle.h"
"base/process/process_info.h"
"base/process/set_process_title.cc"
"base/process/set_process_title.h"
"base/profiler/frame.cc"
"base/profiler/frame.h"
"base/profiler/metadata_recorder.cc"
"base/profiler/metadata_recorder.h"
"base/profiler/module_cache.cc"
"base/profiler/module_cache.h"
"base/profiler/profile_builder.h"
"base/profiler/register_context.h"
"base/profiler/sample_metadata.cc"
"base/profiler/sample_metadata.h"
"base/profiler/sampling_profiler_thread_token.cc"
"base/profiler/sampling_profiler_thread_token.h"
"base/profiler/stack_buffer.cc"
"base/profiler/stack_buffer.h"
"base/profiler/stack_copier.cc"
"base/profiler/stack_copier.h"
"base/profiler/stack_copier_suspend.cc"
"base/profiler/stack_copier_suspend.h"
"base/profiler/stack_sampler.cc"
"base/profiler/stack_sampler.h"
"base/profiler/stack_sampling_profiler.cc"
"base/profiler/stack_sampling_profiler.h"
"base/profiler/suspendable_thread_delegate.h"
"base/profiler/thread_delegate.h"
"base/profiler/unwinder.cc"
"base/profiler/unwinder.h"
"base/rand_util.cc"
"base/rand_util.h"
"base/ranges/algorithm.h"
"base/ranges/functional.h"
"base/ranges/ranges.h"
"base/run_loop.cc"
"base/run_loop.h"
"base/sampling_heap_profiler/lock_free_address_hash_set.cc"
"base/sampling_heap_profiler/lock_free_address_hash_set.h"
"base/sampling_heap_profiler/poisson_allocation_sampler.cc"
"base/sampling_heap_profiler/poisson_allocation_sampler.h"
"base/sampling_heap_profiler/sampling_heap_profiler.cc"
"base/sampling_heap_profiler/sampling_heap_profiler.h"
"base/scoped_add_feature_flags.cc"
"base/scoped_add_feature_flags.h"
"base/scoped_clear_last_error.h"
"base/scoped_environment_variable_override.cc"
"base/scoped_environment_variable_override.h"
"base/scoped_generic.h"
"base/scoped_multi_source_observation.h"
"base/scoped_observation.h"
"base/scoped_observation_traits.h"
"base/sequence_checker.cc"
"base/sequence_checker.h"
"base/sequence_checker_impl.cc"
"base/sequence_checker_impl.h"
"base/sequence_token.cc"
"base/sequence_token.h"
"base/state_transitions.h"
"base/stl_util.h"
"base/strings/abseil_string_number_conversions.cc"
"base/strings/abseil_string_number_conversions.h"
"base/strings/cstring_view.h"
"base/strings/escape.cc"
"base/strings/escape.h"
"base/strings/latin1_string_conversions.cc"
"base/strings/latin1_string_conversions.h"
"base/strings/levenshtein_distance.cc"
"base/strings/levenshtein_distance.h"
"base/strings/pattern.cc"
"base/strings/pattern.h"
"base/strings/safe_sprintf.cc"
"base/strings/safe_sprintf.h"
"base/strings/strcat.cc"
"base/strings/strcat.h"
"base/strings/strcat_internal.h"
"base/strings/string_number_conversions.cc"
"base/strings/string_number_conversions.h"
"base/strings/string_number_conversions_internal.h"
"base/strings/string_piece.h"
"base/strings/string_split.cc"
"base/strings/string_split.h"
"base/strings/string_split_internal.h"
"base/strings/string_tokenizer.h"
"base/strings/string_util.cc"
"base/strings/string_util.h"
"base/strings/string_util_constants.cc"
"base/strings/string_util_impl_helpers.h"
"base/strings/string_util_internal.h"
"base/strings/stringize_macros.h"
"base/strings/stringprintf.cc"
"base/strings/stringprintf.h"
"base/strings/sys_string_conversions.h"
"base/strings/to_string.h"
"base/strings/utf_offset_string_conversions.cc"
"base/strings/utf_offset_string_conversions.h"
"base/strings/utf_ostream_operators.cc"
"base/strings/utf_ostream_operators.h"
"base/strings/utf_string_conversion_utils.cc"
"base/strings/utf_string_conversion_utils.h"
"base/strings/utf_string_conversions.cc"
"base/strings/utf_string_conversions.h"
"base/substring_set_matcher/matcher_string_pattern.cc"
"base/substring_set_matcher/matcher_string_pattern.h"
"base/substring_set_matcher/substring_set_matcher.cc"
"base/substring_set_matcher/substring_set_matcher.h"
"base/supports_user_data.cc"
"base/supports_user_data.h"
"base/synchronization/atomic_flag.cc"
"base/synchronization/atomic_flag.h"
"base/synchronization/condition_variable.h"
"base/synchronization/lock.cc"
"base/synchronization/lock.h"
"base/synchronization/lock_impl.h"
"base/synchronization/lock_subtle.h"
"base/synchronization/waitable_event.cc"
"base/synchronization/waitable_event.h"
"base/synchronization/waitable_event_watcher.h"
"base/sys_byteorder.h"
"base/syslog_logging.cc"
"base/syslog_logging.h"
"base/system/system_monitor.cc"
"base/system/system_monitor.h"
"base/task/bind_post_task.h"
"base/task/bind_post_task_internal.h"
"base/task/cancelable_task_tracker.cc"
"base/task/cancelable_task_tracker.h"
"base/task/common/checked_lock.h"
"base/task/common/checked_lock_impl.cc"
"base/task/common/checked_lock_impl.h"
"base/task/common/lazy_now.cc"
"base/task/common/lazy_now.h"
"base/task/common/operations_controller.cc"
"base/task/common/operations_controller.h"
"base/task/common/scoped_defer_task_posting.cc"
"base/task/common/scoped_defer_task_posting.h"
"base/task/common/task_annotator.cc"
"base/task/common/task_annotator.h"
"base/task/current_thread.cc"
"base/task/current_thread.h"
"base/task/default_delayed_task_handle_delegate.cc"
"base/task/default_delayed_task_handle_delegate.h"
"base/task/deferred_sequenced_task_runner.cc"
"base/task/deferred_sequenced_task_runner.h"
"base/task/delay_policy.h"
"base/task/delayed_task_handle.cc"
"base/task/delayed_task_handle.h"
"base/task/lazy_thread_pool_task_runner.cc"
"base/task/lazy_thread_pool_task_runner.h"
"base/task/post_job.cc"
"base/task/post_job.h"
"base/task/post_task_and_reply_with_result_internal.h"
"base/task/scoped_set_task_priority_for_current_thread.cc"
"base/task/scoped_set_task_priority_for_current_thread.h"
"base/task/sequence_manager/associated_thread_id.cc"
"base/task/sequence_manager/associated_thread_id.h"
"base/task/sequence_manager/atomic_flag_set.cc"
"base/task/sequence_manager/atomic_flag_set.h"
"base/task/sequence_manager/delayed_task_handle_delegate.cc"
"base/task/sequence_manager/delayed_task_handle_delegate.h"
"base/task/sequence_manager/enqueue_order.h"
"base/task/sequence_manager/enqueue_order_generator.cc"
"base/task/sequence_manager/enqueue_order_generator.h"
"base/task/sequence_manager/fence.cc"
"base/task/sequence_manager/fence.h"
"base/task/sequence_manager/lazily_deallocated_deque.h"
"base/task/sequence_manager/sequence_manager.cc"
"base/task/sequence_manager/sequence_manager.h"
"base/task/sequence_manager/sequence_manager_impl.cc"
"base/task/sequence_manager/sequence_manager_impl.h"
"base/task/sequence_manager/sequenced_task_source.cc"
"base/task/sequence_manager/sequenced_task_source.h"
"base/task/sequence_manager/task_order.cc"
"base/task/sequence_manager/task_order.h"
"base/task/sequence_manager/task_queue.cc"
"base/task/sequence_manager/task_queue.h"
"base/task/sequence_manager/task_queue_impl.cc"
"base/task/sequence_manager/task_queue_impl.h"
"base/task/sequence_manager/task_queue_selector.cc"
"base/task/sequence_manager/task_queue_selector.h"
"base/task/sequence_manager/task_time_observer.cc"
"base/task/sequence_manager/task_time_observer.h"
"base/task/sequence_manager/tasks.cc"
"base/task/sequence_manager/tasks.h"
"base/task/sequence_manager/thread_controller.cc"
"base/task/sequence_manager/thread_controller.h"
"base/task/sequence_manager/thread_controller_impl.cc"
"base/task/sequence_manager/thread_controller_impl.h"
"base/task/sequence_manager/thread_controller_power_monitor.cc"
"base/task/sequence_manager/thread_controller_power_monitor.h"
"base/task/sequence_manager/thread_controller_with_message_pump_impl.cc"
"base/task/sequence_manager/thread_controller_with_message_pump_impl.h"
"base/task/sequence_manager/time_domain.cc"
"base/task/sequence_manager/time_domain.h"
"base/task/sequence_manager/wake_up_queue.cc"
"base/task/sequence_manager/wake_up_queue.h"
"base/task/sequence_manager/work_deduplicator.cc"
"base/task/sequence_manager/work_deduplicator.h"
"base/task/sequence_manager/work_queue.cc"
"base/task/sequence_manager/work_queue.h"
"base/task/sequence_manager/work_queue_sets.cc"
"base/task/sequence_manager/work_queue_sets.h"
"base/task/sequence_manager/work_tracker.cc"
"base/task/sequence_manager/work_tracker.h"
"base/task/sequenced_task_runner.cc"
"base/task/sequenced_task_runner.h"
"base/task/sequenced_task_runner_helpers.h"
"base/task/single_thread_task_executor.cc"
"base/task/single_thread_task_executor.h"
"base/task/single_thread_task_runner.cc"
"base/task/single_thread_task_runner.h"
"base/task/single_thread_task_runner_thread_mode.h"
"base/task/task_features.cc"
"base/task/task_features.h"
"base/task/task_observer.h"
"base/task/task_runner.cc"
"base/task/task_runner.h"
"base/task/task_traits.cc"
"base/task/task_traits.h"
"base/task/thread_pool.cc"
"base/task/thread_pool.h"
"base/task/thread_pool/delayed_priority_queue.cc"
"base/task/thread_pool/delayed_priority_queue.h"
"base/task/thread_pool/delayed_task_manager.cc"
"base/task/thread_pool/delayed_task_manager.h"
"base/task/thread_pool/environment_config.cc"
"base/task/thread_pool/environment_config.h"
"base/task/thread_pool/job_task_source.cc"
"base/task/thread_pool/job_task_source.h"
"base/task/thread_pool/pooled_parallel_task_runner.cc"
"base/task/thread_pool/pooled_parallel_task_runner.h"
"base/task/thread_pool/pooled_sequenced_task_runner.cc"
"base/task/thread_pool/pooled_sequenced_task_runner.h"
"base/task/thread_pool/pooled_single_thread_task_runner_manager.cc"
"base/task/thread_pool/pooled_single_thread_task_runner_manager.h"
"base/task/thread_pool/pooled_task_runner_delegate.cc"
"base/task/thread_pool/pooled_task_runner_delegate.h"
"base/task/thread_pool/priority_queue.cc"
"base/task/thread_pool/priority_queue.h"
"base/task/thread_pool/semaphore.h"
"base/task/thread_pool/sequence.cc"
"base/task/thread_pool/sequence.h"
"base/task/thread_pool/service_thread.cc"
"base/task/thread_pool/service_thread.h"
"base/task/thread_pool/task.cc"
"base/task/thread_pool/task.h"
"base/task/thread_pool/task_source.cc"
"base/task/thread_pool/task_source.h"
"base/task/thread_pool/task_source_sort_key.cc"
"base/task/thread_pool/task_source_sort_key.h"
"base/task/thread_pool/task_tracker.cc"
"base/task/thread_pool/task_tracker.h"
"base/task/thread_pool/thread_group.cc"
"base/task/thread_pool/thread_group.h"
"base/task/thread_pool/thread_group_impl.cc"
"base/task/thread_pool/thread_group_impl.h"
"base/task/thread_pool/thread_group_semaphore.cc"
"base/task/thread_pool/thread_group_semaphore.h"
"base/task/thread_pool/thread_group_worker_delegate.cc"
"base/task/thread_pool/thread_group_worker_delegate.h"
"base/task/thread_pool/thread_pool_impl.cc"
"base/task/thread_pool/thread_pool_impl.h"
"base/task/thread_pool/thread_pool_instance.cc"
"base/task/thread_pool/thread_pool_instance.h"
"base/task/thread_pool/tracked_ref.h"
"base/task/thread_pool/worker_thread.cc"
"base/task/thread_pool/worker_thread.h"
"base/task/thread_pool/worker_thread_observer.h"
"base/task/thread_pool/worker_thread_semaphore.cc"
"base/task/thread_pool/worker_thread_semaphore.h"
"base/task/thread_pool/worker_thread_set.cc"
"base/task/thread_pool/worker_thread_set.h"
"base/task/thread_pool/worker_thread_waitable_event.cc"
"base/task/thread_pool/worker_thread_waitable_event.h"
"base/task/updateable_sequenced_task_runner.h"
"base/template_util.h"
"base/test/scoped_logging_settings.h"
"base/test/spin_wait.h"
"base/third_party/cityhash/city.cc"
"base/third_party/cityhash/city.h"
"base/third_party/cityhash_v103/src/city_v103.cc"
"base/third_party/cityhash_v103/src/city_v103.h"
"base/third_party/icu/icu_utf.h"
"base/third_party/nspr/prtime.cc"
"base/third_party/nspr/prtime.h"
"base/third_party/superfasthash/superfasthash.c"
"base/thread_annotations.h"
"base/threading/hang_watcher.cc"
"base/threading/hang_watcher.h"
"base/threading/platform_thread.cc"
"base/threading/platform_thread.h"
"base/threading/platform_thread_ref.cc"
"base/threading/platform_thread_ref.h"
"base/threading/post_task_and_reply_impl.cc"
"base/threading/post_task_and_reply_impl.h"
"base/threading/scoped_blocking_call.cc"
"base/threading/scoped_blocking_call.h"
"base/threading/scoped_blocking_call_internal.cc"
"base/threading/scoped_blocking_call_internal.h"
"base/threading/scoped_thread_priority.cc"
"base/threading/scoped_thread_priority.h"
"base/threading/sequence_bound.h"
"base/threading/sequence_bound_internal.h"
"base/threading/sequence_local_storage_map.cc"
"base/threading/sequence_local_storage_map.h"
"base/threading/sequence_local_storage_slot.cc"
"base/threading/sequence_local_storage_slot.h"
"base/threading/simple_thread.cc"
"base/threading/simple_thread.h"
"base/threading/thread.cc"
"base/threading/thread.h"
"base/threading/thread_checker.cc"
"base/threading/thread_checker.h"
"base/threading/thread_checker_impl.cc"
"base/threading/thread_checker_impl.h"
"base/threading/thread_collision_warner.cc"
"base/threading/thread_collision_warner.h"
"base/threading/thread_id_name_manager.cc"
"base/threading/thread_id_name_manager.h"
"base/threading/thread_local.h"
"base/threading/thread_local_internal.h"
"base/threading/thread_local_storage.cc"
"base/threading/thread_local_storage.h"
"base/threading/thread_restrictions.cc"
"base/threading/thread_restrictions.h"
"base/threading/threading_features.h"
"base/threading/watchdog.cc"
"base/threading/watchdog.h"
"base/time/clock.cc"
"base/time/clock.h"
"base/time/default_clock.cc"
"base/time/default_clock.h"
"base/time/default_tick_clock.cc"
"base/time/default_tick_clock.h"
"base/time/tick_clock.cc"
"base/time/tick_clock.h"
"base/time/time.cc"
"base/time/time.h"
"base/time/time_delta_from_string.cc"
"base/time/time_delta_from_string.h"
"base/time/time_override.cc"
"base/time/time_override.h"
"base/timer/elapsed_timer.cc"
"base/timer/elapsed_timer.h"
"base/timer/hi_res_timer_manager.h"
"base/timer/lap_timer.cc"
"base/timer/lap_timer.h"
"base/timer/timer.cc"
"base/timer/timer.h"
"base/timer/wall_clock_timer.cc"
"base/timer/wall_clock_timer.h"
"base/token.cc"
"base/token.h"
"base/trace_event/base_tracing.h"
"base/trace_event/base_tracing_forward.h"
"base/trace_event/common/trace_event_common.h"
"base/trace_event/heap_profiler_allocation_context.cc"
"base/trace_event/heap_profiler_allocation_context.h"
"base/trace_event/heap_profiler_allocation_context_tracker.cc"
"base/trace_event/heap_profiler_allocation_context_tracker.h"
"base/trace_event/memory_allocator_dump_guid.cc"
"base/trace_event/memory_allocator_dump_guid.h"
"base/trace_event/named_trigger.cc"
"base/trace_event/named_trigger.h"
"base/trace_event/trace_id_helper.cc"
"base/trace_event/trace_id_helper.h"
"base/traits_bag.h"
"base/tuple.h"
"base/types/always_false.h"
"base/types/cxx23_is_scoped_enum.h"
"base/types/cxx23_to_underlying.h"
"base/types/expected.h"
"base/types/expected_internal.h"
"base/types/expected_macros.h"
"base/types/fixed_array.h"
"base/types/id_type.h"
"base/types/is_complete.h"
"base/types/is_instantiation.h"
"base/types/optional_ref.h"
"base/types/optional_util.h"
"base/types/pass_key.h"
"base/types/strong_alias.h"
"base/types/supports_ostream_operator.h"
"base/types/to_address.h"
"base/types/token_type.h"
"base/types/variant_util.h"
"base/unguessable_token.cc"
"base/unguessable_token.h"
"base/uuid.cc"
"base/uuid.h"
"base/value_iterators.cc"
"base/value_iterators.h"
"base/values.cc"
"base/values.h"
"base/version.cc"
"base/version.h"
"base/vlog.cc"
"base/vlog.h"
)

if(APPLE)
   nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
    PRIVATE
    "base/posix/sysctl.cc"
    "base/posix/sysctl.h"
)
endif()

if(POSIX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/debug/debugger_posix.cc"
      "base/file_descriptor_posix.cc"
      "base/file_descriptor_posix.h"
      "base/files/dir_reader_posix.h"
      "base/files/file_posix.cc"
      "base/files/memory_mapped_file_posix.cc"
      "base/message_loop/watchable_io_message_pump_posix.cc"
      "base/message_loop/watchable_io_message_pump_posix.h"
      "base/posix/eintr_wrapper.h"
      "base/posix/file_descriptor_shuffle.cc"
      "base/posix/file_descriptor_shuffle.h"
      "base/posix/global_descriptors.cc"
      "base/posix/global_descriptors.h"
      "base/posix/safe_strerror.cc"
      "base/posix/safe_strerror.h"
      "base/process/process_handle_posix.cc"
      "base/strings/string_util_posix.h"
      "base/synchronization/condition_variable_posix.cc"
      "base/synchronization/lock_impl_posix.cc"
      "base/threading/platform_thread_posix.cc"
      "base/threading/thread_local_storage_posix.cc"
      "base/time/time_conversion_posix.cc"
      "base/timer/hi_res_timer_manager_posix.cc"
)

endif(POSIX)

if(LINUX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/debug/proc_maps_linux.cc"
      "base/debug/proc_maps_linux.h"
      "base/files/dir_reader_linux.h"
      "base/files/scoped_file_linux.cc"
      "base/process/internal_linux.cc"
      "base/process/internal_linux.h"
      "base/process/memory_linux.cc"
      "base/process/process_handle_linux.cc"
      "base/process/process_iterator_linux.cc"
      "base/process/process_linux.cc"
      "base/process/process_metrics_linux.cc"
      "base/threading/platform_thread_linux.cc"
      "base/threading/platform_thread_linux_base.cc"
      "base/threading/thread_type_delegate.cc"
      "base/threading/thread_type_delegate.h"
      "base/third_party/xdg_user_dirs/xdg_user_dir_lookup.cc"
)
endif(LINUX)

if(LINUX OR ANDROID)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/files/file_path_watcher_inotify.cc"
"base/files/file_path_watcher_inotify.h"
"base/linux_util.cc" 
"base/linux_util.h"
)

endif()

if(ANDROID)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/android/android_hardware_buffer_compat.cc"
      "base/android/android_hardware_buffer_compat.h"
      "base/android/android_image_reader_compat.cc"
      "base/android/android_image_reader_compat.h"
      "base/android/apk_assets.cc"
      "base/android/apk_assets.h"
      "base/android/application_status_listener.cc"
      "base/android/application_status_listener.h"
      "base/android/build_info.cc"
      "base/android/build_info.h"
      "base/android/bundle_utils.cc"
      "base/android/bundle_utils.h"
      "base/android/child_process_binding_types.h"
      "base/android/child_process_service.cc"
      "base/android/content_uri_utils.cc"
      "base/android/content_uri_utils.h"
      "base/android/cpu_features.cc"
      "base/android/early_trace_event_binding.cc"
      "base/android/early_trace_event_binding.h"
      "base/android/event_log.cc"
      "base/android/event_log.h"
      "base/android/feature_list_jni.cc"
      "base/android/feature_map.cc"
      "base/android/feature_map.h"
      "base/android/features_jni.cc"
      "base/android/field_trial_list.cc"
      "base/android/important_file_writer_android.cc"
      "base/android/input_hint_checker.cc"
      "base/android/input_hint_checker.h"
      "base/android/int_string_callback.cc"
      "base/android/int_string_callback.h"
      "base/android/jank_metric_uma_recorder.cc"
      "base/android/jank_metric_uma_recorder.h"
      "base/android/java_handler_thread.cc"
      "base/android/java_handler_thread.h"
      "base/android/java_heap_dump_generator.cc"
      "base/android/java_heap_dump_generator.h"
      "base/android/java_runtime.cc"
      "base/android/java_runtime.h"
      "base/android/library_loader/anchor_functions.cc"
      "base/android/library_loader/anchor_functions.h"
      "base/android/library_loader/library_prefetcher.cc"
      "base/android/library_loader/library_prefetcher.h"
      "base/android/library_loader/library_prefetcher_hooks.cc"
      "base/android/locale_utils.cc"
      "base/android/locale_utils.h"
      "base/android/meminfo_dump_provider.cc"
      "base/android/meminfo_dump_provider.h"
      "base/android/memory_pressure_listener_android.cc"
      "base/android/memory_pressure_listener_android.h"
      "base/android/memory_purge_manager_android.cc"
      "base/android/memory_purge_manager_android.h"
      "base/android/path_service_android.cc"
      "base/android/path_utils.cc"
      "base/android/path_utils.h"
      "base/android/pmf_utils.cc"
      "base/android/pmf_utils.h"
      "base/android/pre_freeze_background_memory_trimmer.cc"
      "base/android/pre_freeze_background_memory_trimmer.h"
      "base/android/radio_utils.cc"
      "base/android/radio_utils.h"
      "base/android/requires_api.h"
      "base/android/scoped_hardware_buffer_fence_sync.cc"
      "base/android/scoped_hardware_buffer_fence_sync.h"
      "base/android/scoped_hardware_buffer_handle.cc"
      "base/android/scoped_hardware_buffer_handle.h"
      "base/android/shared_preferences/shared_preferences_manager.cc"
      "base/android/shared_preferences/shared_preferences_manager.h"
      "base/android/statistics_recorder_android.cc"
      "base/android/sys_utils.cc"
      "base/android/sys_utils.h"
      "base/android/task_scheduler/post_task_android.cc"
      "base/android/task_scheduler/post_task_android.h"
      "base/android/task_scheduler/task_runner_android.cc"
      "base/android/task_scheduler/task_runner_android.h"
      "base/android/task_scheduler/task_traits_android.h"
      "base/android/thread_instruction_count.cc"
      "base/android/thread_instruction_count.h"
      "base/android/timezone_utils.cc"
      "base/android/timezone_utils.h"
      "base/debug/stack_trace_android.cc"
      "base/files/file_util_android.cc"
      "base/files/scoped_file_android.cc"
      "base/memory/platform_shared_memory_mapper_android.cc"
      "base/memory/platform_shared_memory_region_android.cc"
      "base/message_loop/message_pump_android.cc"
      "base/message_loop/message_pump_android.h"
      "base/os_compat_android.cc"
      "base/os_compat_android.h"
      "base/process/process_android.cc"
      "base/profiler/native_unwinder_android_map_delegate.h"
      "base/profiler/native_unwinder_android_memory_regions_map.h"
      "base/profiler/stack_sampler_android.cc"
      "base/system/sys_info_android.cc"
      "base/threading/platform_thread_android.cc"

      # Android uses some Linux sources.
      "base/debug/elf_reader.cc"
      "base/debug/elf_reader.h"
      "base/debug/proc_maps_linux.cc"
      "base/debug/proc_maps_linux.h"
      "base/power_monitor/power_monitor_device_source_android.cc"
      "base/process/internal_linux.cc"
      "base/process/internal_linux.h"
      "base/process/memory_linux.cc"
      "base/process/process_handle_linux.cc"
      "base/process/process_iterator_linux.cc"
      "base/process/process_metrics_linux.cc"
      "base/system/sys_info_linux.cc"
      "base/time/time_android.cc"
      # jni_zero
      "third_party/jni_zero/jni_zero.cc"
      "third_party/jni_zero/logging.cc"
      # ashmem
      "third_party/ashmem/ashmem-dev.c"
)

    if(can_unwind_with_cfi_table)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/trace_event/cfi_backtrace_android.cc"
        "base/trace_event/cfi_backtrace_android.h"
        )
    endif()

    if(ARM)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/profiler/chrome_unwind_info_android.cc"
        "base/profiler/chrome_unwind_info_android.h"
        "base/profiler/chrome_unwinder_android.cc"
        "base/profiler/chrome_unwinder_android.h"
        )

    endif()

    if(ARM64)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/profiler/frame_pointer_unwinder.cc"
        "base/profiler/frame_pointer_unwinder.h"
        )

    endif()

endif()
if(build_allocation_stack_trace_recorder)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
    PRIVATE
    "base/debug/allocation_trace.cc"
    "base/debug/allocation_trace.h"
    )
endif()

if(ANDROID)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/android/base_jni_onload.cc"
"base/android/base_jni_onload.h"
"base/android/callback_android.cc"
"base/android/callback_android.h"
"base/android/command_line_android.cc"
"base/android/java_exception_reporter.cc"
"base/android/java_exception_reporter.h"
"base/android/jni_android.cc"
"base/android/jni_android.h"
"base/android/jni_array.cc"
"base/android/jni_array.h"
"base/android/jni_bytebuffer.cc"
"base/android/jni_bytebuffer.h"
"base/android/jni_registrar.cc"
"base/android/jni_registrar.h"
"base/android/jni_string.cc"
"base/android/jni_string.h"
"base/android/jni_utils.cc"
"base/android/jni_utils.h"
"base/android/jni_weak_ref.cc"
"base/android/jni_weak_ref.h"
"base/android/library_loader/library_loader_hooks.cc"
"base/android/library_loader/library_loader_hooks.h"
"base/android/native_uma_recorder.cc"
"base/android/scoped_java_ref.h"
"base/android/token_android.cc"
"base/android/token_android.h"
"base/android/trace_event_binding.cc"
"base/android/trace_event_binding.h"
"base/android/unguessable_token_android.cc"
"base/android/unguessable_token_android.h"
"base/android/binder.cc"
"base/android/binder.h"
"base/android/binder_box.cc"
"base/android/binder_box.h"
)
endif(ANDROID)


nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
 "base/hash/md5.h"
    "base/hash/md5_constexpr.h"
    "base/hash/md5_constexpr_internal.h"
    "base/hash/sha1.h"
    "base/hash/md5_boringssl.cc"
    "base/hash/md5_boringssl.h"
    "base/hash/sha1_boringssl.cc"
    "base/hash/sha1_boringssl.h"
    "base/base_paths.cc"
      "base/base_paths.h"
      "base/cpu.cc"
      "base/cpu.h"
      "base/debug/crash_logging.cc"
      "base/debug/crash_logging.h"
      "base/debug/stack_trace.cc"
      "base/debug/stack_trace.h"
      "base/files/file_enumerator.cc"
      "base/files/file_enumerator.h"
      "base/files/file_proxy.cc"
      "base/files/file_proxy.h"
      "base/files/file_util.cc"
      "base/files/file_util.h"
      "base/files/important_file_writer.cc"
      "base/files/important_file_writer.h"
      "base/files/important_file_writer_cleaner.cc"
      "base/files/important_file_writer_cleaner.h"
      "base/files/scoped_temp_dir.cc"
      "base/files/scoped_temp_dir.h"
      "base/files/scoped_temp_file.cc"
      "base/files/scoped_temp_file.h"
      "base/json/json_file_value_serializer.cc"
      "base/json/json_file_value_serializer.h"
      "base/memory/discardable_memory.cc"
      "base/memory/discardable_memory.h"
      "base/memory/discardable_memory_allocator.cc"
      "base/memory/discardable_memory_allocator.h"
      "base/memory/discardable_memory_internal.h"
      "base/metrics/persistent_histogram_storage.cc"
      "base/metrics/persistent_histogram_storage.h"
      "base/native_library.cc"
      "base/native_library.h"
      "base/path_service.cc"
      "base/path_service.h"
      "base/process/process_metrics.cc"
      "base/process/process_metrics.h"
      "base/scoped_native_library.cc"
      "base/scoped_native_library.h"
      "base/system/sys_info.cc"
      "base/system/sys_info.h"
      "base/system/sys_info_internal.h"
      "base/task/thread_pool/initialization_util.cc"
      "base/task/thread_pool/initialization_util.h"
)

if(WIN32)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/base_paths_win.cc"
"base/base_paths_win.h"

)


endif(WIN32)

if(APPLE)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/base_paths_apple.cc"
"base/base_paths_apple.h"
)
endif()

if(MACOSX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/base_paths_mac.h"
"base/base_paths_mac.mm"
)
endif(MACOSX)

if(ANDROID)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/base_paths_android.cc"
"base/base_paths_android.h"
)

endif(ANDROID)

if(LINUX OR ANDROID)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/task/thread_pool/semaphore/semaphore_posix.cc"
)
endif(LINUX OR ANDROID)

if(POSIX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/base_paths_posix.h"
"base/memory/madv_free_discardable_memory_allocator_posix.cc"
"base/memory/madv_free_discardable_memory_allocator_posix.h"
"base/memory/madv_free_discardable_memory_posix.cc"
"base/memory/madv_free_discardable_memory_posix.h"
"base/posix/unix_domain_socket.cc"
"base/posix/unix_domain_socket.h"
"base/rand_util_posix.cc"
"base/system/sys_info_posix.cc"
"base/files/file_descriptor_watcher_posix.cc"
"base/files/file_descriptor_watcher_posix.h"
"base/files/file_enumerator_posix.cc"
"base/files/file_util_posix.cc"
"base/memory/page_size_posix.cc"

)

endif(POSIX)

if(POSIX AND NOT IOS)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
    PRIVATE
    "base/process/process_metrics_posix.cc"
    "base/sync_socket_posix.cc"
    )
endif(POSIX AND NOT IOS)

if(POSIX AND NOT APPLE)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
    PRIVATE
    "base/native_library_posix.cc"
    "base/posix/can_lower_nice_to.cc"
    "base/posix/can_lower_nice_to.h"
    "base/process/launch_posix.cc"
    "base/profiler/module_cache_posix.cc"
    "base/profiler/stack_base_address_posix.cc"
    "base/profiler/stack_base_address_posix.h"
    "base/profiler/stack_copier_signal.cc"
    "base/profiler/stack_copier_signal.h"
    "base/profiler/thread_delegate_posix.cc"
    "base/profiler/thread_delegate_posix.h"
    )
endif(POSIX AND NOT APPLE)

if(POSIX AND NOT ANDROID)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/debug/stack_trace_posix.cc"
)

endif()

if(POSIX AND NOT IOS)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/process/process_posix.cc"
)
endif(POSIX AND NOT IOS)

if(use_blink)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/memory/discardable_shared_memory.cc"
        "base/memory/discardable_shared_memory.h"
        "base/memory/shared_memory_switch.cc"
        "base/memory/shared_memory_switch.h"
        "base/metrics/histogram_shared_memory.cc"
        "base/metrics/histogram_shared_memory.h"
        "base/process/kill.cc"
        "base/process/kill.h"
        "base/process/launch.cc"
        "base/process/launch.h"
        "base/process/memory.cc"
        "base/process/memory.h"
        "base/process/process_iterator.cc"
        "base/process/process_iterator.h"

)
endif(use_blink)

if(POSIX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/process/kill_posix.cc"
)
endif(POSIX)

if(LINUX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/base_paths_posix.cc"
        "base/debug/elf_reader.cc"
        "base/debug/elf_reader.h"
        "base/stack_canary_linux.cc"
        "base/stack_canary_linux.h"

)
endif(LINUX)

if(use_partition_alloc)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/allocator/miracle_parameter.cc"
"base/allocator/miracle_parameter.h"
"base/allocator/partition_alloc_features.cc"
"base/allocator/partition_alloc_features.h"
"base/allocator/partition_alloc_support.cc"
"base/allocator/partition_alloc_support.h"
)

endif()

if(WIN32)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/debug/debugger_win.cc"
      "base/debug/gdi_debug_util_win.cc"
      "base/debug/gdi_debug_util_win.h"
      "base/debug/handle_hooks_win.cc"
      "base/debug/handle_hooks_win.h"
      "base/debug/invalid_access_win.cc"
      "base/debug/invalid_access_win.h"
      "base/debug/stack_trace_win.cc"
      "base/enterprise_util.cc"
      "base/enterprise_util.h"
      "base/enterprise_util_win.cc"
      "base/file_version_info_win.cc"
      "base/file_version_info_win.h"
      "base/files/file_enumerator_win.cc"
      "base/files/file_path_watcher_win.cc"
      "base/files/file_util_win.cc"
      "base/files/file_win.cc"
      "base/files/memory_mapped_file_win.cc"
      "base/logging_win.cc"
      "base/logging_win.h"
      "base/memory/page_size_win.cc"
      "base/memory/platform_shared_memory_mapper_win.cc"
      "base/memory/platform_shared_memory_region_win.cc"
      "base/memory/protected_memory_win.cc"
      "base/message_loop/message_pump_win.cc"
      "base/message_loop/message_pump_win.h"
      "base/moving_window.h"
      "base/native_library_win.cc"
      "base/power_monitor/battery_level_provider_win.cc"
      "base/power_monitor/power_monitor_device_source_win.cc"
      "base/power_monitor/speed_limit_observer_win.cc"
      "base/power_monitor/speed_limit_observer_win.h"
      "base/process/kill_win.cc"
      "base/process/launch_win.cc"
      "base/process/memory_win.cc"
      "base/process/process_handle_win.cc"
      "base/process/process_info_win.cc"
      "base/process/process_iterator_win.cc"
      "base/process/process_metrics_win.cc"
      "base/process/process_win.cc"
      "base/profiler/module_cache_win.cc"
      "base/profiler/native_unwinder_win.cc"
      "base/profiler/native_unwinder_win.h"
      "base/profiler/stack_sampler_win.cc"
      "base/profiler/suspendable_thread_delegate_win.cc"
      "base/profiler/suspendable_thread_delegate_win.h"
      "base/profiler/win32_stack_frame_unwinder.cc"
      "base/profiler/win32_stack_frame_unwinder.h"
      "base/rand_util_win.cc"
      "base/scoped_clear_last_error_win.cc"
      "base/strings/strcat_win.cc"
      "base/strings/strcat_win.h"
      "base/strings/string_number_conversions_win.cc"
      "base/strings/string_number_conversions_win.h"
      "base/strings/string_split_win.cc"
      "base/strings/string_split_win.h"
      "base/strings/string_util_win.cc"
      "base/strings/string_util_win.h"
      "base/strings/sys_string_conversions_win.cc"
      "base/sync_socket_win.cc"
      "base/synchronization/condition_variable_win.cc"
      "base/synchronization/lock_impl_win.cc"
      "base/synchronization/waitable_event_watcher_win.cc"
      "base/synchronization/waitable_event_win.cc"
      "base/system/sys_info_win.cc"
      "base/task/thread_pool/semaphore/semaphore_win.cc"
      "base/threading/platform_thread_win.cc"
      "base/threading/platform_thread_win.h"
      "base/threading/thread_local_storage_win.cc"
      "base/time/time_win.cc"
      "base/timer/hi_res_timer_manager_win.cc"
      "base/win/access_control_list.cc"
      "base/win/access_control_list.h"
      "base/win/access_token.cc"
      "base/win/access_token.h"
      "base/win/async_operation.h"
      "base/win/atl.h"
      "base/win/atl_throw.cc"
      "base/win/atl_throw.h"
      "base/win/com_init_balancer.cc"
      "base/win/com_init_balancer.h"
      "base/win/com_init_check_hook.cc"
      "base/win/com_init_check_hook.h"
      "base/win/com_init_util.cc"
      "base/win/com_init_util.h"
      "base/win/core_winrt_util.cc"
      "base/win/core_winrt_util.h"
      "base/win/current_module.h"
      "base/win/dark_mode_support.cc"
      "base/win/dark_mode_support.h"
      "base/win/default_apps_util.cc"
      "base/win/default_apps_util.h"
      "base/win/embedded_i18n/language_selector.cc"
      "base/win/embedded_i18n/language_selector.h"
      "base/win/enum_variant.cc"
      "base/win/enum_variant.h"
      "base/win/event_trace_consumer.h"
      "base/win/event_trace_controller.cc"
      "base/win/event_trace_controller.h"
      "base/win/event_trace_provider.cc"
      "base/win/event_trace_provider.h"
      "base/win/hstring_reference.cc"
      "base/win/hstring_reference.h"
      "base/win/i18n.cc"
      "base/win/i18n.h"
      "base/win/iat_patch_function.cc"
      "base/win/iat_patch_function.h"
      "base/win/map.h"
      "base/win/message_window.cc"
      "base/win/message_window.h"
      "base/win/nt_status.cc"
      "base/win/nt_status.h"
      "base/win/object_watcher.cc"
      "base/win/object_watcher.h"
      "base/win/patch_util.cc"
      "base/win/patch_util.h"
      "base/win/pe_image.cc"
      "base/win/pe_image.h"
      "base/win/pe_image_reader.cc"
      "base/win/pe_image_reader.h"
      "base/win/static_constants.h"
      "base/win/static_constants.cc"
      "base/win/post_async_results.h"
      "base/win/process_startup_helper.cc"
      "base/win/process_startup_helper.h"
      "base/win/propvarutil.h"
      "base/win/reference.h"
      "base/win/registry.cc"
      "base/win/registry.h"
      "base/win/resource_exhaustion.cc"
      "base/win/resource_exhaustion.h"
      "base/win/resource_util.cc"
      "base/win/resource_util.h"
      "base/win/scoped_bstr.cc"
      "base/win/scoped_bstr.h"
      "base/win/scoped_co_mem.h"
      "base/win/scoped_com_initializer.cc"
      "base/win/scoped_com_initializer.h"
      "base/win/scoped_gdi_object.h"
      "base/win/scoped_handle.cc"
      "base/win/scoped_handle.h"
      "base/win/scoped_handle_verifier.cc"
      "base/win/scoped_handle_verifier.h"
      "base/win/scoped_hdc.h"
      "base/win/scoped_hglobal.h"
      "base/win/scoped_hstring.cc"
      "base/win/scoped_hstring.h"
      "base/win/scoped_localalloc.h"
      "base/win/scoped_pdh_query.cc"
      "base/win/scoped_pdh_query.h"
      "base/win/scoped_process_information.cc"
      "base/win/scoped_process_information.h"
      "base/win/scoped_propvariant.h"
      "base/win/scoped_safearray.h"
      "base/win/scoped_select_object.h"
      "base/win/scoped_variant.cc"
      "base/win/scoped_variant.h"
      "base/win/scoped_windows_thread_environment.h"
      "base/win/scoped_winrt_initializer.cc"
      "base/win/scoped_winrt_initializer.h"
      "base/win/security_descriptor.cc"
      "base/win/security_descriptor.h"
      "base/win/security_util.cc"
      "base/win/security_util.h"
      "base/win/shlwapi.h"
      "base/win/shortcut.cc"
      "base/win/shortcut.h"
      "base/win/sid.cc"
      "base/win/sid.h"
      "base/win/sphelper.h"
      "base/win/startup_information.cc"
      "base/win/startup_information.h"
      "base/win/variant_conversions.h"
      "base/win/variant_vector.cc"
      "base/win/variant_vector.h"
      "base/win/vector.cc"
      "base/win/vector.h"
      "base/win/win_handle_types.h"
      "base/win/win_handle_types_list.inc"
      "base/win/win_util.cc"
      "base/win/win_util.h"
      "base/win/wincrypt_shim.h"
      "base/win/window_enumerator.cc"
      "base/win/window_enumerator.h"
      "base/win/windows_defines.inc"
      "base/win/windows_h_disallowed.h"
      "base/win/windows_types.h"
      "base/win/windows_undefines.inc"
      "base/win/windows_version.cc"
      "base/win/windows_version.h"
      "base/win/windowsx_shim.h"
      "base/win/winrt_foundation_helpers.h"
      "base/win/winrt_storage_util.cc"
      "base/win/winrt_storage_util.h"
      "base/win/wmi.cc"
      "base/win/wmi.h"
      "base/win/wrapped_window_proc.cc"
      "base/win/wrapped_window_proc.h"
)
else()
nice_target_sources(${PROJECT_NAME} ${chromium_real_path} 
PRIVATE
"base/file_descriptor_store.cc"
      "base/file_descriptor_store.h"
)
endif()

if(APPLE)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/apple/backup_util.h"
      "base/apple/backup_util.mm"
      "base/apple/bridging.h"
      "base/apple/bundle_locations.h"
      "base/apple/bundle_locations.mm"
      "base/apple/call_with_eh_frame.cc"
      "base/apple/call_with_eh_frame.h"
      "base/apple/call_with_eh_frame_asm.S"
      "base/apple/dispatch_source_mach.cc"
      "base/apple/dispatch_source_mach.h"
      "base/apple/foundation_util.h"
      "base/apple/foundation_util.mm"
      "base/apple/mach_logging.cc"
      "base/apple/mach_logging.h"
      "base/apple/osstatus_logging.h"
      "base/apple/osstatus_logging.mm"
      "base/apple/owned_objc.h"
      "base/apple/owned_objc.mm"
      "base/apple/scoped_cffiledescriptorref.h"
      "base/apple/scoped_cftyperef.h"
      "base/apple/scoped_dispatch_object.h"
      "base/apple/scoped_mach_port.cc"
      "base/apple/scoped_mach_port.h"
      "base/apple/scoped_mach_vm.cc"
      "base/apple/scoped_mach_vm.h"
      "base/apple/scoped_nsautorelease_pool.h"
      "base/apple/scoped_nsautorelease_pool.mm"
      "base/apple/scoped_nsobject.h"
      "base/apple/scoped_objc_class_swizzler.h"
      "base/apple/scoped_objc_class_swizzler.mm"
      "base/apple/scoped_typeref.h"
      "base/file_version_info_apple.h"
      "base/file_version_info_apple.mm"
      "base/files/file_util_apple.mm"
      "base/memory/platform_shared_memory_mapper_apple.cc"
      "base/memory/platform_shared_memory_region_apple.cc"
      "base/message_loop/message_pump_apple.h"
      "base/message_loop/message_pump_apple.mm"
      "base/process/process_metrics_apple.cc"
      "base/profiler/module_cache_apple.cc"
      "base/strings/sys_string_conversions_apple.mm"
      "base/synchronization/waitable_event_apple.cc"
      "base/system/sys_info_apple.mm"
      "base/task/thread_pool/semaphore/semaphore_apple.cc"
      "base/threading/platform_thread_apple.mm"
      "base/time/time_apple.mm"
)

endif()

if(MACOSX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/enterprise_util.cc"
"base/enterprise_util.h"
"base/enterprise_util_mac.mm"
"base/files/file_path_watcher_fsevents.cc"
"base/files/file_path_watcher_fsevents.h"
"base/files/file_path_watcher_kqueue.cc"
"base/files/file_path_watcher_kqueue.h"
"base/files/file_path_watcher_mac.cc"
"base/mac/authorization_util.h"
"base/mac/authorization_util.mm"
"base/mac/close_nocancel.cc"
"base/mac/launch_application.h"
"base/mac/launch_application.mm"
"base/mac/launch_services_spi.h"
"base/mac/launchd.cc"
"base/mac/launchd.h"
"base/mac/login_util.cc"
"base/mac/login_util.h"
"base/mac/mac_util.h"
"base/mac/mac_util.mm"
"base/mac/mach_port_rendezvous.cc"
"base/mac/mach_port_rendezvous.h"
"base/mac/os_crash_dumps.cc"
"base/mac/os_crash_dumps.h"
"base/mac/scoped_aedesc.h"
"base/mac/scoped_authorizationref.h"
"base/mac/scoped_authorizationref.mm"
"base/mac/scoped_ionotificationportref.h"
"base/mac/scoped_ioobject.h"
"base/mac/scoped_ioplugininterface.h"
"base/mac/scoped_launch_data.h"
"base/mac/scoped_mach_msg_destroy.h"
"base/mac/scoped_sending_event.h"
"base/mac/scoped_sending_event.mm"
"base/message_loop/message_pump_kqueue.cc"
"base/message_loop/message_pump_kqueue.h"
"base/native_library_mac.mm"
"base/power_monitor/battery_level_provider_mac.mm"
"base/power_monitor/battery_state_sampler_mac.cc"
"base/power_monitor/iopm_power_source_sampling_event_source.cc"
"base/power_monitor/iopm_power_source_sampling_event_source.h"
"base/power_monitor/power_monitor_device_source_mac.mm"
"base/power_monitor/thermal_state_observer_mac.h"
"base/power_monitor/thermal_state_observer_mac.mm"
"base/process/kill_mac.cc"
"base/process/launch_mac.cc"
"base/process/memory_mac.mm"
"base/process/port_provider_mac.cc"
"base/process/port_provider_mac.h"
"base/process/process_handle_mac.cc"
"base/process/process_info_mac.cc"
"base/process/process_iterator_mac.cc"
"base/process/process_mac.cc"
"base/process/process_metrics_mac.cc"
"base/profiler/frame_pointer_unwinder.cc"
"base/profiler/frame_pointer_unwinder.h"
"base/profiler/stack_sampler_mac.cc"
"base/profiler/suspendable_thread_delegate_mac.cc"
"base/profiler/suspendable_thread_delegate_mac.h"
"base/synchronization/waitable_event_watcher_mac.cc"
"base/system/sys_info_mac.mm"
)

endif()

if(IOS)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/base_paths_ios.h"
      "base/base_paths_ios.mm"
      "base/ios/block_types.h"
      "base/ios/crb_protocol_observers.h"
      "base/ios/crb_protocol_observers.mm"
      "base/ios/device_util.h"
      "base/ios/device_util.mm"
      "base/ios/ios_util.h"
      "base/ios/ios_util.mm"
      "base/ios/ns_error_util.h"
      "base/ios/ns_error_util.mm"
      "base/ios/ns_range.h"
      "base/native_library_ios.mm"
      "base/power_monitor/power_monitor_device_source_ios.mm"
      "base/process/process_metrics_ios.cc"
      "base/process/process_metrics_posix.cc"
      "base/profiler/stack_sampler_ios.cc"
      "base/system/sys_info_ios.mm"
)


    if(NOT ios_is_app_extension)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
    PRIVATE
        "base/critical_closure_internal_ios.mm"
        "base/ios/scoped_critical_action.h"
        "base/ios/scoped_critical_action.mm"
    )
    endif()



    if(use_blink)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/files/file_path_watcher_kqueue.cc"
        "base/files/file_path_watcher_kqueue.h"
        "base/files/file_path_watcher_mac.cc"
        "base/ios/sim_header_shims.h"
        "base/mac/mach_port_rendezvous.cc"
        "base/mac/mach_port_rendezvous.h"
        "base/process/kill_ios.cc"
        "base/process/memory_mac.mm"
        "base/process/port_provider_mac.cc"
        "base/process/port_provider_mac.h"
        "base/process/process_handle_mac.cc"
        "base/process/process_ios.cc"
        "base/process/process_iterator_mac.cc"
        "base/process/process_mac.cc"
        "base/process/process_posix.cc"
        "base/sync_socket_posix.cc"
        "base/synchronization/waitable_event_watcher_mac.cc"
        )

        if(SIMULATOR)
            nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
            PRIVATE
                "base/process/kill_mac.cc"
                "base/process/launch_mac.cc"
            )
        else()
            nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
            PRIVATE
                "base/process/launch_ios.cc"
            )
        endif(SIMULATOR)
    else()
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/process/launch_ios.cc"
        "base/process/memory_stubs.cc"
        "base/process/process_stubs.cc"
        )
    endif()
    
    if(is_cronet_build)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/message_loop/message_pump_io_ios.cc"
        "base/message_loop/message_pump_io_ios.h"
        )
    else()
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/message_loop/message_pump_kqueue.cc"
        "base/message_loop/message_pump_kqueue.h"
        )
    endif(is_cronet_build)
    
    if (ios_stack_profiler_enabled)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/profiler/frame_pointer_unwinder.cc"
        "base/profiler/frame_pointer_unwinder.h"
        "base/profiler/suspendable_thread_delegate_mac.cc"
        "base/profiler/suspendable_thread_delegate_mac.h"
        )
      endif()

endif(IOS)

if(LINUX)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
    PRIVATE
    "base/process/set_process_title_linux.cc"
        "base/process/set_process_title_linux.h"
        "base/system/sys_info_linux.cc"
    )

    if(NOT is_cronet_build)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
    PRIVATE
        "base/nix/mime_util_xdg.cc"
            "base/nix/mime_util_xdg.h"
            "base/nix/scoped_xdg_activation_token_injector.cc"
            "base/nix/scoped_xdg_activation_token_injector.h"
            "base/nix/xdg_util.cc"
            "base/nix/xdg_util.h"
    )
    endif(NOT is_cronet_build)
endif(LINUX)

if(use_blink)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/files/file_path_watcher.cc"
"base/files/file_path_watcher.h"
"base/sync_socket.cc"
"base/sync_socket.h"
)
endif(use_blink)

if(use_libevent)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/message_loop/message_pump_libevent.cc"
      "base/message_loop/message_pump_libevent.h"
)
endif(use_libevent)

if(enable_message_pump_epoll)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/message_loop/message_pump_epoll.cc"
      "base/message_loop/message_pump_epoll.h"
)
endif(enable_message_pump_epoll)

if(POSIX AND NOT ANDROID AND NOT APPLE)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/memory/platform_shared_memory_mapper_posix.cc"
"base/memory/platform_shared_memory_region_posix.cc"
)
endif(POSIX AND NOT ANDROID AND NOT APPLE)

if(POSIX AND NOT APPLE)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/strings/sys_string_conversions_posix.cc"
"base/synchronization/waitable_event_posix.cc"
"base/synchronization/waitable_event_watcher_posix.cc"
"base/threading/platform_thread_internal_posix.cc"
"base/threading/platform_thread_internal_posix.h"
"base/time/time_now_posix.cc"
)
endif()

if(POSIX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/time/time_exploded_posix.cc")
endif()

if(POSIX AND NOT ANDROID AND NOT APPLE)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
    PRIVATE
        "base/profiler/stack_sampler_posix.cc"
        "base/power_monitor/power_monitor_device_source_stub.cc"
    )
endif(POSIX AND NOT ANDROID AND NOT APPLE)

if(use_glib)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/message_loop/message_pump_glib.cc"
      "base/message_loop/message_pump_glib.h"
)
endif(use_glib)

if(enable_base_tracing)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/trace_event/auto_open_close_event.h"
"base/trace_event/builtin_categories.cc"
"base/trace_event/builtin_categories.h"
"base/trace_event/category_registry.cc"
"base/trace_event/category_registry.h"
"base/trace_event/heap_profiler.h"
"base/trace_event/interned_args_helper.cc"
"base/trace_event/interned_args_helper.h"
"base/trace_event/log_message.cc"
"base/trace_event/log_message.h"
"base/trace_event/malloc_dump_provider.cc"
"base/trace_event/malloc_dump_provider.h"
"base/trace_event/memory_allocator_dump.cc"
"base/trace_event/memory_allocator_dump.h"
"base/trace_event/memory_dump_manager.cc"
"base/trace_event/memory_dump_manager.h"
"base/trace_event/memory_dump_manager_test_utils.h"
"base/trace_event/memory_dump_provider.h"
"base/trace_event/memory_dump_provider_info.cc"
"base/trace_event/memory_dump_provider_info.h"
"base/trace_event/memory_dump_request_args.cc"
"base/trace_event/memory_dump_request_args.h"
"base/trace_event/memory_dump_scheduler.cc"
"base/trace_event/memory_dump_scheduler.h"
"base/trace_event/memory_infra_background_allowlist.cc"
"base/trace_event/memory_infra_background_allowlist.h"
"base/trace_event/memory_pressure_level_proto.cc"
"base/trace_event/memory_pressure_level_proto.h"
"base/trace_event/memory_usage_estimator.cc"
"base/trace_event/memory_usage_estimator.h"
"base/trace_event/optional_trace_event.h"
"base/trace_event/process_memory_dump.cc"
"base/trace_event/process_memory_dump.h"
"base/trace_event/trace_arguments.cc"
"base/trace_event/trace_arguments.h"
"base/trace_event/trace_buffer.cc"
"base/trace_event/trace_buffer.h"
"base/trace_event/trace_category.h"
"base/trace_event/trace_config.cc"
"base/trace_event/trace_config.h"
"base/trace_event/trace_config_category_filter.cc"
"base/trace_event/trace_config_category_filter.h"
"base/trace_event/trace_event.h"
"base/trace_event/trace_event_impl.cc"
"base/trace_event/trace_event_impl.h"
"base/trace_event/trace_event_memory_overhead.cc"
"base/trace_event/trace_event_memory_overhead.h"
"base/trace_event/trace_log.cc"
"base/trace_event/trace_log.h"
"base/trace_event/trace_log_constants.cc"
"base/trace_event/traced_value.cc"
"base/trace_event/traced_value.h"
"base/trace_event/traced_value_support.h"
"base/trace_event/tracing_agent.cc"
"base/trace_event/tracing_agent.h"
"base/trace_event/typed_macros.h"
"base/trace_event/typed_macros_embedder_support.h"
"base/trace_event/typed_macros_internal.cc"
"base/trace_event/typed_macros_internal.h"
"base/tracing/perfetto_platform.cc"
"base/tracing/perfetto_platform.h"
"base/tracing/perfetto_task_runner.cc"
"base/tracing/perfetto_task_runner.h"
"base/tracing/trace_time.cc"
"base/tracing/trace_time.h"
"base/tracing/tracing_tls.cc"
"base/tracing/tracing_tls.h"

)

    if(WIN32)
    nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
    PRIVATE

        "base/trace_event/etw_interceptor_win.cc"
        "base/trace_event/etw_interceptor_win.h"
        "base/trace_event/trace_event_etw_export_win.cc"
        "base/trace_event/trace_event_etw_export_win.h"
        "base/trace_event/trace_logging_minimal_win.cc"
        "base/trace_event/trace_logging_minimal_win.h"
    )
    endif(WIN32)

    if(ANDROID)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/trace_event/application_state_proto_android.cc"
        "base/trace_event/application_state_proto_android.h"
        "base/trace_event/cpufreq_monitor_android.cc"
        "base/trace_event/cpufreq_monitor_android.h"
        "base/trace_event/java_heap_dump_provider_android.cc"
        "base/trace_event/java_heap_dump_provider_android.h"
        )

    endif()

    if(use_partition_alloc_as_malloc)
        nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
        PRIVATE
        "base/trace_event/address_space_dump_provider.cc"
        "base/trace_event/address_space_dump_provider.h"
        )
    endif(use_partition_alloc_as_malloc)
    
else()
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
"base/trace_event/trace_event_stub.cc"
      "base/trace_event/trace_event_stub.h"
)
endif(enable_base_tracing)

if(LINUX)
nice_target_sources(${PROJECT_NAME} ${chromium_real_path}
PRIVATE
    "base/debug/buffered_dwarf_reader.cc"
    "base/debug/buffered_dwarf_reader.h"
    "base/debug/dwarf_line_no.cc"
    "base/debug/dwarf_line_no.h"
)

endif(LINUX)

if(CHROM_BUILD_SHARED)
    target_compile_definitions(${PROJECT_NAME} PRIVATE -DBASE_IMPLEMENTATION -DCOMPONENT_BUILD)
endif()

set(COMMON_LIBRARY crypto ssl double-conversion absl_base absl_int128 absl_hash absl_raw_hash_set absl_bad_variant_access raw_ptr allocator_core allocator_base modp_64)

if (WIN32)
list(APPEND COMMON_LIBRARY delayimp Mincore Shcore Setupapi runtimeobject ntdll Dbghelp Powrprof pdh wbemuuid)
elseif(MACOSX)
find_library(CoreServices_t CoreServices)
find_library(IOKit_t IOKit)
find_library(AppKit_t AppKit)
find_library(Security_t Security)
find_library(OpenDirectory_t OpenDirectory)

list(APPEND COMMON_LIBRARY ${CoreServices_t} ${IOKit_t} ${AppKit_t} ${Security_t} ${OpenDirectory_t} bsm)
elseif(IOS)
find_library(CoreFoundation_t CoreFoundation)
find_library(Foundation_t Foundation)
find_library(CoreGraphics_t CoreGraphics)
find_library(CoreText_t CoreText)
find_library(UIKit_t UIKit)
find_library(Security_t Security)

list(APPEND COMMON_LIBRARY ${CoreFoundation_t} ${Foundation_t} ${CoreGraphics_t} ${CoreText_t} ${UIKit_t} ${Security_t})
elseif(LINUX)
list(APPEND COMMON_LIBRARY event)
elseif(ANDROID)
list(APPEND COMMON_LIBRARY event android log cpu_features ndk_compat)
endif()

target_link_libraries(${PROJECT_NAME} PUBLIC  ${COMMON_LIBRARY})

add_subdirectory(example/console)
if(MACOSX)
    add_subdirectory(example/MACOSX)
endif(MACOSX)
