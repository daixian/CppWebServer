# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.0)

#这种写法在windows下貌似无效
if(WIN32)
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "D:/SDK/vcpkg/scripts/buildsystems/vcpkg.cmake"
      CACHE STRING "") 
endif()
else()
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "~/vcpkg/scripts/buildsystems/vcpkg.cmake"
      CACHE STRING "") 
endif()
endif()
 

if(WIN32 AND NOT DEFINED DVCPKG_TARGET_TRIPLET)
  set(DVCPKG_TARGET_TRIPLET "x64-windows-static-md"
      CACHE STRING "") 
endif()

#add_definitions(-DBOOST_ALL_NO_LIB)

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
SET(RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 包含子项目。
add_subdirectory ("BoostTest")
add_subdirectory ("Server")
add_executable (${PROJECT_NAME} main.cpp)
target_link_libraries (${PROJECT_NAME} BooTest HttpServer)
