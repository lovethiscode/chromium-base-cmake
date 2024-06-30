# This file is part of Desktop App Toolkit,
# a set of libraries for developing nice desktop applications.
#
# For license and copyright information please follow this link:
# https://github.com/desktop-app/legal/blob/master/LEGAL

target_compile_options(common_options
INTERFACE
    -fPIC
    $<$<NOT:$<CONFIG:Debug>>:-fno-strict-aliasing>
    -pipe
)

target_compile_options(common_options
INTERFACE
    -Wall
    -Wextra
    -Wno-unused-parameter
    -Wno-switch
    -Wno-missing-field-initializers
    -Wno-sign-compare
    -Wno-deprecated # implicit capture of 'this' via '[=]' is deprecated in C++20
)

if (DESKTOP_APP_SPECIAL_TARGET)
    target_compile_options(common_options
    INTERFACE
        -Werror
        $<$<NOT:$<CONFIG:Debug>>:-g>
        $<$<NOT:$<CONFIG:Debug>>:-flto=auto>
    )
    target_link_options(common_options
    INTERFACE
        $<$<NOT:$<CONFIG:Debug>>:-flto=auto>
        $<$<NOT:$<CONFIG:Debug>>:-fwhole-program>
    )
endif()


target_link_libraries(common_options
INTERFACE
    ${CMAKE_DL_LIBS}
)
