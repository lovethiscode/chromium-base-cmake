#cmake . -GXcode  -B out/macosx -DCMAKE_TOOLCHAIN_FILE=cmake/toolchain/ios.toolchain.cmake -DPLATFORM=MAC_ARM64 -DMACOSX=ON -DAPPLE=ON -DPOSIX=ON -DCMAKE_CONFIGURATION_TYPES=Debug -DCMAKE_BUILD_TYPE=Debug
cmake . -GXcode  -B out/macosx -DCMAKE_TOOLCHAIN_FILE=cmake/toolchain/ios.toolchain.cmake -DPLATFORM=MAC -DMACOSX=ON -DAPPLE=ON -DPOSIX=ON -DCMAKE_CONFIGURATION_TYPES=Debug -DCMAKE_BUILD_TYPE=Debug
