# chromium-base-cmake

The chromium project is a very complex project, in which the base library provides many useful functions. However, chromium is built using gn, the dependencies are also relatively complex. It is difficult to use the base library in your project. So this project can help you use it very conveniently, because it is built based on cmake.

# How to build
Each platform provides a script. Running the script will automatically pull the code and third-party dependent libraries, and generate solutions for the corresponding platform, such as windows to generate vs projects, mac and ios to generate xcode projects, etc.
- build shared: -DCHROM_BUILD_SHARED=ON

## Windows
  - visual studio: 2022
  - windows sdk: 10.0.26100.0
  - clang
  ```
   //cmake . -B out/win -G "Visual Studio 17 2022" -A x64 -T ClangCL -DCHROM_BUILD_SHARED=ON
  .\vs_generate.bat
  ```


## Mac/iOS
```
-DPLATFORM: 
#    OS = armv7 armv7s arm64 (if applicable)
#    OS64 = arm64 (if applicable)
#    SIMULATOR = i386
#    SIMULATOR64 = x86_64
#    SIMULATORARM64 = arm64
#    MAC = x86_64
#    MAC_ARM64 = arm64
//cmake . -GXcode  -B out/macosx -DCMAKE_TOOLCHAIN_FILE=cmake/toolchain/ios.toolchain.cmake -DPLATFORM=MAC_ARM64 -DMACOSX=ON -DAPPLE=ON -DPOSIX=ON -DCMAKE_CONFIGURATION_TYPES=Debug -DCMAKE_BUILD_TYPE=Debug
.\osx_generate.sh

```

## Linux
```
wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key | sudo apt-key add -
sudo add-apt-repository "deb http://apt.llvm.org/focal/ llvm-toolchain-focal-17 main"
sudo apt update
sudo apt install clang-17
sudo apt-get install libc++-17-dev libc++abi-17-dev
sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-17 100



//cmake . -B out/linux -DCMAKE_TOOLCHAIN_FILE=cmake/toolchain/x86_64-linux-clang.toolchain.cmake -DLINUX=ON -DPOSIX=ON -DCMAKE_CONFIGURATION_TYPES=Debug -DCMAKE_BUILD_TYPE=Debug
.\linux_generate.sh
```

## Android
 - cmake_version: 3.29
 - arguments: "-DPOSIX=ON", "-DCHROM_BUILD_SHARED=ON"
 - ndk: 26

```
plugins {
    alias(libs.plugins.android.application)
}

android {
    namespace = "com.example.myapplication"
    compileSdk = 34

    defaultConfig {
        applicationId = "com.example.myapplication"
        minSdk = 29
        targetSdk = 34
        versionCode = 1
        versionName = "1.0"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
        externalNativeBuild {
            cmake {
                cppFlags += "-std=c++20"
                arguments("-DPOSIX=ON", "-DCHROM_BUILD_SHARED=ON")
            }
        }
        ndk {
            abiFilters.addAll(listOf("arm64-v8a"))
        }
    }

    buildTypes {
        release {
            isMinifyEnabled = false
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    externalNativeBuild {
        cmake {
            path = file("src/main/cpp/CMakeLists.txt")
            version = "3.29.2"
        }
    }
    buildFeatures {
        viewBinding = true
    }
}

dependencies {

    implementation(libs.appcompat)
    implementation(libs.material)
    implementation(libs.constraintlayout)
    testImplementation(libs.junit)
    androidTestImplementation(libs.ext.junit)
    androidTestImplementation(libs.espresso.core)
}

```