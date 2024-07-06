cmake_minimum_required(VERSION 3.21)
project(MyApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
# 设置 macOS 版本
set(CMAKE_OSX_DEPLOYMENT_TARGET "10.13" CACHE STRING "Minimum macOS deployment version" FORCE)

# 查找必需的库和框架
find_library(COCOA_LIBRARY Cocoa)
find_library(QUARTZ_LIBRARY Quartz)

# 添加源文件
set(SOURCE_FILES main.mm AppDelegate.mm AppDelegate.h ViewController.h ViewController.mm)

# 指定应用程序的类型
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework Cocoa -framework Quartz")

# 添加资源文件
set(RESOURCE_FILES Base.lproj/Main.storyboard Assets.xcassets)
set_source_files_properties(${RESOURCE_FILES} PROPERTIES MACOSX_PACKAGE_LOCATION Resources)


# 添加可执行文件
add_executable(MyApp MACOSX_BUNDLE ${SOURCE_FILES} ${RESOURCE_FILES})

file(WRITE ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist "<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<!DOCTYPE
    plist
    PUBLIC
    \"-//Apple//DTD PLIST 1.0//EN\"
    \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">

<plist version=\"1.0\">
<dict>
  <key>CFBundleDevelopmentRegion</key>
  <string>English</string>
  <key>CFBundleExecutable</key>
  <string>$(EXECUTABLE_NAME)</string>
  <key>CFBundleGetInfoString</key>
  <string></string>
  <key>CFBundleIconFile</key>
  <string></string>
  <key>CFBundleIdentifier</key>
  <string></string>
  <key>CFBundleInfoDictionaryVersion</key>
  <string>6.0</string>
  <key>CFBundleLongVersionString</key>
  <string></string>
  <key>CFBundleName</key>
  <string></string>
  <key>CFBundlePackageType</key>
  <string>APPL</string>
  <key>CFBundleShortVersionString</key>
  <string></string>
  <key>CFBundleSignature</key>
  <string>????</string>
  <key>CFBundleVersion</key>
  <string></string>
  <key>CSResourcesFileMapped</key>
  <true/>
  <key>NSHumanReadableCopyright</key>
  <string></string>
   <key>NSMainStoryboardFile</key>
   <string>Main</string>
</dict>
</plist>")
set_target_properties(MyApp PROPERTIES MACOSX_BUNDLE_INFO_PLIST "${CMAKE_CURRENT_SOURCE_DIR}/Info.plist")
# 链接库

macro (set_xcode_property TARGET XCODE_PROPERTY XCODE_VALUE)
  set_property (TARGET ${TARGET} PROPERTY XCODE_ATTRIBUTE_${XCODE_PROPERTY} ${XCODE_VALUE})
endmacro (set_xcode_property)

set_xcode_property(MyApp CLANG_CXX_LANGUAGE_STANDARD "gnu++20")


target_link_libraries(MyApp ${COCOA_LIBRARY} ${QUARTZ_LIBRARY} chromium_base)
