# chromium-base-cmake

The chromium project is a very complex project, in which the base library provides many useful functions. However, chromium is built using gn, the dependencies are also relatively complex. It is difficult to use the base library in your project. So this project can help you use it very conveniently, because it is built based on cmake.

# How to build
Each platform provides a script. Running the script will automatically pull the code and third-party dependent libraries, and generate solutions for the corresponding platform, such as windows to generate vs projects, mac and ios to generate xcode projects, etc.
## Windows
  - visual studio: 2022
  - windows sdk: 10.0.26100.0
  - clang
  ```
  .\vs_generate.bat
  ```


## Mac/iOS


## Linux
```
wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key | sudo apt-key add -
sudo add-apt-repository "deb http://apt.llvm.org/focal/ llvm-toolchain-focal-17 main"
sudo apt update
sudo apt install clang-17
sudo apt-get install libc++-17-dev libc++abi-17-dev
sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-17 100

```
