cmake_minimum_required(VERSION 3.29)

# 相对路径
get_filename_component(partition_allocator_real_path ${CMAKE_CURRENT_SOURCE_DIR} REALPATH)

set(PROJECT_NAME_RAW_PTR raw_ptr)
add_library(${PROJECT_NAME_RAW_PTR} STATIC)
set_target_properties(${PROJECT_NAME_RAW_PTR} PROPERTIES FOLDER "allocator")
init_target(${PROJECT_NAME_RAW_PTR})

nice_target_sources(${PROJECT_NAME_RAW_PTR} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/pointers/instance_tracer.h"
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr.h"
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_cast.h"
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_exclusion.h"
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_noop_impl.h"
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ref.h"
"base/allocator/partition_allocator/src/partition_alloc/pointers/instance_tracer.cc"
)

if(use_raw_ptr_backup_ref_impl)
    nice_target_sources(${PROJECT_NAME_RAW_PTR} ${partition_allocator_real_path}
    PRIVATE
    "base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_backup_ref_impl.cc"
    "base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_backup_ref_impl.h"
    )      
elseif(use_raw_ptr_hookable_impl)
nice_target_sources(${PROJECT_NAME_RAW_PTR} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_hookable_impl.cc"
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_hookable_impl.h"
)      
elseif(use_raw_ptr_asan_unowned_impl)
nice_target_sources(${PROJECT_NAME_RAW_PTR} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_asan_unowned_impl.cc"
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_asan_unowned_impl.h"
)  
else()
nice_target_sources(${PROJECT_NAME_RAW_PTR} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr_noop_impl.h"
"base/allocator/partition_allocator/src/partition_alloc/pointers/empty.cc"
)  
endif(use_raw_ptr_backup_ref_impl)

if(WIN32)
target_include_directories(${PROJECT_NAME_RAW_PTR} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/win/base/allocator/partition_allocator/src")
elseif(MACOSX)
target_include_directories(${PROJECT_NAME_RAW_PTR} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/macosx/base/allocator/partition_allocator/src")
elseif(IOS)
    target_include_directories(${PROJECT_NAME_RAW_PTR} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/ios/base/allocator/partition_allocator/src")
elseif(LINUX)
    target_include_directories(${PROJECT_NAME_RAW_PTR} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/linux/base/allocator/partition_allocator/src")
elseif(ANDROID)
    target_include_directories(${PROJECT_NAME_RAW_PTR} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/android/base/allocator/partition_allocator/src")
endif()

target_link_libraries(${PROJECT_NAME_RAW_PTR})



#  allocator  core 
set(PROJECT_NAME_ALLOCATOR_CORE allocator_core)
add_library(${PROJECT_NAME_ALLOCATOR_CORE} STATIC)
set_target_properties(${PROJECT_NAME_ALLOCATOR_CORE} PROPERTIES FOLDER "allocator")
init_target(${PROJECT_NAME_ALLOCATOR_CORE})

nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/aarch64_support.h"
"base/allocator/partition_allocator/src/partition_alloc/address_pool_manager.cc"
"base/allocator/partition_allocator/src/partition_alloc/address_pool_manager.h"
"base/allocator/partition_allocator/src/partition_alloc/address_pool_manager_bitmap.cc"
"base/allocator/partition_allocator/src/partition_alloc/address_pool_manager_bitmap.h"
"base/allocator/partition_allocator/src/partition_alloc/address_pool_manager_types.h"
"base/allocator/partition_allocator/src/partition_alloc/address_space_randomization.cc"
"base/allocator/partition_allocator/src/partition_alloc/address_space_randomization.h"
"base/allocator/partition_allocator/src/partition_alloc/address_space_stats.h"
"base/allocator/partition_allocator/src/partition_alloc/allocation_guard.cc"
"base/allocator/partition_allocator/src/partition_alloc/allocation_guard.h"
"base/allocator/partition_allocator/src/partition_alloc/compressed_pointer.cc"
"base/allocator/partition_allocator/src/partition_alloc/compressed_pointer.h"
"base/allocator/partition_allocator/src/partition_alloc/dangling_raw_ptr_checks.cc"
"base/allocator/partition_allocator/src/partition_alloc/dangling_raw_ptr_checks.h"
"base/allocator/partition_allocator/src/partition_alloc/flags.h"
"base/allocator/partition_allocator/src/partition_alloc/freeslot_bitmap.h"
"base/allocator/partition_allocator/src/partition_alloc/freeslot_bitmap_constants.h"
"base/allocator/partition_allocator/src/partition_alloc/gwp_asan_support.cc"
"base/allocator/partition_allocator/src/partition_alloc/gwp_asan_support.h"
"base/allocator/partition_allocator/src/partition_alloc/in_slot_metadata.h"
"base/allocator/partition_allocator/src/partition_alloc/internal_allocator.cc"
"base/allocator/partition_allocator/src/partition_alloc/internal_allocator.h"
"base/allocator/partition_allocator/src/partition_alloc/internal_allocator_forward.h"
"base/allocator/partition_allocator/src/partition_alloc/lightweight_quarantine.cc"
"base/allocator/partition_allocator/src/partition_alloc/lightweight_quarantine.h"
"base/allocator/partition_allocator/src/partition_alloc/memory_reclaimer.cc"
"base/allocator/partition_allocator/src/partition_alloc/memory_reclaimer.h"
"base/allocator/partition_allocator/src/partition_alloc/oom.cc"
"base/allocator/partition_allocator/src/partition_alloc/oom.h"
"base/allocator/partition_allocator/src/partition_alloc/oom_callback.cc"
"base/allocator/partition_allocator/src/partition_alloc/oom_callback.h"
"base/allocator/partition_allocator/src/partition_alloc/page_allocator.cc"
"base/allocator/partition_allocator/src/partition_alloc/page_allocator.h"
"base/allocator/partition_allocator/src/partition_alloc/page_allocator_constants.h"
"base/allocator/partition_allocator/src/partition_alloc/page_allocator_internal.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_address_space.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_address_space.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc-inl.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_allocation_data.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_check.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_config.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_constants.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_forward.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_hooks.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_hooks.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_bucket.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_bucket.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_bucket_lookup.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_cookie.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_dcheck_helper.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_dcheck_helper.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_direct_map_extent.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_freelist_entry.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_freelist_entry.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_lock.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_oom.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_oom.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_page.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_page.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_page_constants.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_root.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_root.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_stats.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_stats.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_superpage_extent_entry.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_tls.h"
"base/allocator/partition_allocator/src/partition_alloc/random.cc"
"base/allocator/partition_allocator/src/partition_alloc/random.h"
"base/allocator/partition_allocator/src/partition_alloc/reservation_offset_table.cc"
"base/allocator/partition_allocator/src/partition_alloc/reservation_offset_table.h"
"base/allocator/partition_allocator/src/partition_alloc/reverse_bytes.h"
"base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.cc"
"base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.h"
"base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc"
"base/allocator/partition_allocator/src/partition_alloc/stack/stack.h"
"base/allocator/partition_allocator/src/partition_alloc/tagging.cc"
"base/allocator/partition_allocator/src/partition_alloc/tagging.h"
"base/allocator/partition_allocator/src/partition_alloc/thread_cache.cc"
"base/allocator/partition_allocator/src/partition_alloc/thread_cache.h"
"base/allocator/partition_allocator/src/partition_alloc/thread_isolation/alignment.h"
"base/allocator/partition_allocator/src/partition_alloc/thread_isolation/pkey.cc"
"base/allocator/partition_allocator/src/partition_alloc/thread_isolation/pkey.h"
"base/allocator/partition_allocator/src/partition_alloc/thread_isolation/thread_isolation.cc"
"base/allocator/partition_allocator/src/partition_alloc/thread_isolation/thread_isolation.h"
"base/allocator/partition_allocator/src/partition_alloc/yield_processor.h"
)

if (use_starscan)
nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/starscan/logging.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/pcscan.cc"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/pcscan.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/pcscan_internal.cc"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/pcscan_internal.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/pcscan_scheduling.cc"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/pcscan_scheduling.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/raceful_worklist.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/scan_loop.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/snapshot.cc"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/snapshot.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/starscan_fwd.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/state_bitmap.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/stats_collector.cc"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/stats_collector.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/stats_reporter.h"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/write_protector.cc"
        "base/allocator/partition_allocator/src/partition_alloc/starscan/write_protector.h"
)
endif()

if(WIN32)
nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/page_allocator_internals_win.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_tls_win.cc"
)
elseif(POSIX)
nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/page_allocator_internals_posix.h"
"base/allocator/partition_allocator/src/partition_alloc/page_allocator_internals_posix.cc"
)
endif(WIN32)
if (CURRENT_CPU STREQUAL "x86")
nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/stack/asm/x86/push_registers_asm.cc"
)
elseif(CURRENT_CPU STREQUAL "x64")
nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/stack/asm/x64/push_registers_asm.cc"
)
elseif(CURRENT_CPU STREQUAL "arm64")
nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/stack/asm/arm64/push_registers_asm.cc"
)
elseif(CURRENT_CPU STREQUAL "arm")
nice_target_sources(${PROJECT_NAME_ALLOCATOR_CORE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/stack/asm/arm/push_registers_asm.cc"
)
else()
    #if (current_cpu == "x64") {
    #assert(stack_scan_supported)
    #sources += [ "stack/asm/x64/push_registers_asm.cc" ]
  #} else if (current_cpu == "x86") {
   # assert(stack_scan_supported)
    #sources += [ "stack/asm/x86/push_registers_asm.cc" ]
  #} else if (current_cpu == "arm") {
   # assert(stack_scan_supported)
    #sources += [ "stack/asm/arm/push_registers_asm.cc" ]
  #} else if (current_cpu == "arm64") {
    #assert(stack_scan_supported)
   # sources += [ "stack/asm/arm64/push_registers_asm.cc" ]
  #} else if (current_cpu == "riscv64") {
   # assert(stack_scan_supported)
  #  sources += [ "stack/asm/riscv64/push_registers_asm.cc" ]
 # } else {
    # To support a trampoline for another arch, please refer to v8/src/heap/base.
  #  assert(!stack_scan_supported)
  #}
  message(FATAL_ERROR "unknown cpu")
endif()


if(WIN32)
target_include_directories(${PROJECT_NAME_ALLOCATOR_CORE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/win/base/allocator/partition_allocator/src")
elseif(MACOSX)
target_include_directories(${PROJECT_NAME_ALLOCATOR_CORE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/macosx/base/allocator/partition_allocator/src")
elseif(IOS)
target_include_directories(${PROJECT_NAME_ALLOCATOR_CORE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/ios/base/allocator/partition_allocator/src")
elseif(LINUX)
target_include_directories(${PROJECT_NAME_ALLOCATOR_CORE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/linux/base/allocator/partition_allocator/src")
elseif(ANDROID)
target_include_directories(${PROJECT_NAME_ALLOCATOR_CORE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src"
"${CMAKE_CURRENT_SOURCE_DIR}/gen/android/base/allocator/partition_allocator/src")
endif()
target_link_libraries(${PROJECT_NAME_ALLOCATOR_CORE})



# allocator  base
set(PROJECT_NAME_ALLOCATOR_BASE allocator_base)
add_library(${PROJECT_NAME_ALLOCATOR_BASE} STATIC)
set_target_properties(${PROJECT_NAME_ALLOCATOR_BASE} PROPERTIES FOLDER "allocator")
init_target(${PROJECT_NAME_ALLOCATOR_BASE})

nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/atomic_ref_count.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/augmentations/compiler_specific.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/bit_cast.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/bits.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/check.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/check.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/compiler_specific.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/component_export.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/cpu.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/cpu.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/cxx20_is_constant_evaluated.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/alias.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/alias.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/stack_trace.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/stack_trace.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/export_template.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/immediate_crash.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/log_message.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/log_message.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/logging.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/logging.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/memory/page_size.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/memory/ref_counted.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/memory/ref_counted.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/memory/scoped_policy.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/memory/scoped_refptr.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/no_destructor.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/notreached.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/checked_math.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/checked_math_impl.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/clamped_math.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/clamped_math_impl.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/safe_conversions.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/safe_conversions_arm_impl.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/safe_conversions_impl.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/safe_math.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/safe_math_arm_impl.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/safe_math_clang_gcc_impl.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/numerics/safe_math_shared_impl.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/posix/eintr_wrapper.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/process/process_handle.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/rand_util.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/rand_util.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/scoped_clear_last_error.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/cstring_builder.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/cstring_builder.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/safe_sprintf.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/safe_sprintf.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/string_util.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/string_util.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/stringprintf.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/strings/stringprintf.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/system/sys_info.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/thread_annotations.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/threading/platform_thread.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/threading/platform_thread.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/threading/platform_thread_ref.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time_override.cc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time_override.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/types/strong_alias.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/win/win_handle_types.h"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/win/win_handle_types_list.inc"
      "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/win/windows_types.h"

)

if (WIN32)
nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/stack_trace_win.cc"
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/memory/page_size_win.cc"
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/process/process_handle_win.cc"
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/rand_util_win.cc"
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/scoped_clear_last_error_win.cc"
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/threading/platform_thread_win.cc"
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time_win.cc"
)
elseif(POSIX)
    nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
    PRIVATE
    "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/stack_trace_posix.cc"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/files/file_util.h"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/files/file_util_posix.cc"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/memory/page_size_posix.cc"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/posix/safe_strerror.cc"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/posix/safe_strerror.h"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/process/process_handle_posix.cc"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/rand_util_posix.cc"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/threading/platform_thread_internal_posix.h"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/threading/platform_thread_posix.cc"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time_conversion_posix.cc"
    )
    if(LINUX)
        nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/stack_trace_linux.cc"
      )
    endif()

    if(APPLE)
        nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/stack_trace_mac.cc"
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time_apple.mm"
        ) 
    else()
        nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/time/time_now_posix.cc"
        ) 
    endif()
endif()

if (ANDROID)
nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
PRIVATE
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/debug/stack_trace_android.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/files/file_path.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/files/file_path.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/native_library.cc"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/native_library.h"
"base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/native_library_posix.cc"
) 

endif()
if (APPLE)
    nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
    PRIVATE
    "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/apple/foundation_util.h"
    "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/apple/foundation_util.mm"
    "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/apple/mach_logging.cc"
    "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/apple/mach_logging.h"
    "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/apple/scoped_cftyperef.h"
    "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/apple/scoped_typeref.h"
    ) 

    if (IOS)
        nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/ios/ios_util.h"
                "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/ios/ios_util.mm"
                "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/system/sys_info_ios.mm"

        ) 
    endif()

    if(MACOSX)
        nice_target_sources(${PROJECT_NAME_ALLOCATOR_BASE} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/mac/mac_util.h"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/mac/mac_util.mm"
            "base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/system/sys_info_mac.mm"
    ) 

    endif()

endif()

if(WIN32)
target_include_directories(${PROJECT_NAME_ALLOCATOR_BASE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/win/base/allocator/partition_allocator/src")
elseif(MACOSX)
target_include_directories(${PROJECT_NAME_ALLOCATOR_BASE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/macosx/base/allocator/partition_allocator/src")
elseif(IOS)
target_include_directories(${PROJECT_NAME_ALLOCATOR_BASE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/ios/base/allocator/partition_allocator/src")
elseif(LINUX)
target_include_directories(${PROJECT_NAME_ALLOCATOR_BASE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
"${CMAKE_CURRENT_SOURCE_DIR}/gen/linux/base/allocator/partition_allocator/src")
elseif(ANDROID)
target_include_directories(${PROJECT_NAME_ALLOCATOR_BASE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src"
"${CMAKE_CURRENT_SOURCE_DIR}/gen/android/base/allocator/partition_allocator/src")
endif()
target_link_libraries(${PROJECT_NAME_ALLOCATOR_BASE})



# allocator  shim
if(0)
    set(PROJECT_NAME_ALLOCATOR_SHIM allocator_shim)
    add_library(${PROJECT_NAME_ALLOCATOR_SHIM} STATIC)
    set_target_properties(${PROJECT_NAME_ALLOCATOR_SHIM} PROPERTIES FOLDER "allocator")
    init_target(${PROJECT_NAME_ALLOCATOR_SHIM})

    if(WIN32 OR ANDROID OR APPLE)
    nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_dispatch_to_noop_on_free.cc"
        )
    else()
    nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
    PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim.cc"
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_dispatch_to_noop_on_free.cc"
        )
    endif()

    if(use_partition_alloc)
        nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_default_dispatch_to_partition_alloc.cc"
        "base/allocator/partition_allocator/src/partition_alloc/shim/nonscannable_allocator.cc"
        )
    endif(use_partition_alloc)

    if(ANDROID)
    nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_android.cc"
        )
    endif(ANDROID)

    if(APPLE)
    nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_interception_apple.mm"
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_apple.cc"
        "base/allocator/partition_allocator/src/partition_alloc/shim/malloc_zone_functions_apple.cc"
        )
    endif(APPLE)

    if(WIN32)
    nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/shim/winheap_stubs_win.cc"
        )
        if(CHROM_BUILD_SHARED)
            nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
            PRIVATE
            "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_functions_win_component.cc"
            "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_win_component.cc"
            )
        else()
            nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
            PRIVATE
            "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_win_static.cc"
            )
        endif(CHROM_BUILD_SHARED)
    endif()


    if(use_partition_alloc_as_malloc)
        if(ANDROID)
            nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
            PRIVATE
            "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_default_dispatch_to_linker_wrapped_symbols.cc"
            )
        endif(ANDROID)
        
        if(APPLE)
            nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
            PRIVATE
            "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_default_dispatch_to_apple_zoned_malloc.cc"
            )
        endif(APPLE)
        
        if(LINUX)
            nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
            PRIVATE
            "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_default_dispatch_to_glibc.cc"
            )
        endif(LINUX)
        
        if(WIN32)
        nice_target_sources(${PROJECT_NAME_ALLOCATOR_SHIM} ${partition_allocator_real_path}
        PRIVATE
        "base/allocator/partition_allocator/src/partition_alloc/shim/allocator_shim_default_dispatch_to_winheap.cc"
        )
        endif(WIN32)
        

    endif(use_partition_alloc_as_malloc)




if(WIN32)
    target_include_directories(${PROJECT_NAME_ALLOCATOR_SHIM} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/win/base/allocator/partition_allocator/src")
    elseif(MACOSX)
    target_include_directories(${PROJECT_NAME_ALLOCATOR_SHIM} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/macosx/base/allocator/partition_allocator/src")

    set(full_name "${partition_allocator_real_path}/base/allocator/partition_allocator/src/partition_alloc/shim/allocator_interception_apple.mm")
    set_source_files_properties(${full_name} PROPERTIES COMPILE_FLAGS -fno-objc-arc)

    elseif(IOS)
    target_include_directories(${PROJECT_NAME_ALLOCATOR_SHIM} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src" 
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/ios/base/allocator/partition_allocator/src")
    elseif(LINUX)
    target_include_directories(${PROJECT_NAME_ALLOCATOR_SHIM} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/linux/base/allocator/partition_allocator/src")
    elseif(ANDROID)
    target_include_directories(${PROJECT_NAME_ALLOCATOR_SHIM} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/base/allocator/partition_allocator/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/android/base/allocator/partition_allocator/src")
endif()
    target_link_libraries(${PROJECT_NAME_ALLOCATOR_SHIM})

endif(0)


