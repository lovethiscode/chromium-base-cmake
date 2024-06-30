# This file is part of Desktop App Toolkit,
# a set of libraries for developing nice desktop applications.
#
# For license and copyright information please follow this link:
# https://github.com/desktop-app/legal/blob/master/LEGAL

set(MAXIMUM_CXX_STANDARD cxx_std_20)

function(init_target_folder target_name folder_name)
    if (NOT "${folder_name}" STREQUAL "")
        set_target_properties(${target_name} PROPERTIES FOLDER ${folder_name})
    endif()
endfunction()

function(init_target target_name) # init_target(my_target [cxx_std_..] folder_name)
    set(standard ${MAXIMUM_CXX_STANDARD})
    foreach (entry ${ARGN})
        if (${entry} STREQUAL cxx_std_14 OR ${entry} STREQUAL cxx_std_11 OR ${entry} STREQUAL cxx_std_17)
            set(standard ${entry})
        else()
            init_target_folder(${target_name} ${entry})
        endif()
    endforeach()
    target_compile_features(${target_name} PRIVATE ${standard})

    target_link_libraries(${target_name} PRIVATE desktop-app::common_options)
    set_target_properties(${target_name} PROPERTIES
        XCODE_ATTRIBUTE_CLANG_ENABLE_OBJC_WEAK YES
        XCODE_ATTRIBUTE_GCC_INLINES_ARE_PRIVATE_EXTERN YES
        XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    )

endfunction()

# This code is not supposed to run on build machine, only on target machine.
function(init_non_host_target target_name)
    init_target(${ARGV})
    if (APPLE)
        set_target_properties(${target_name} PROPERTIES
            OSX_ARCHITECTURES "${DESKTOP_APP_MAC_ARCH}"
        )
    endif()
endfunction()