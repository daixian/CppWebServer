# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.0)

if(NOT WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "~/vcpkg/scripts/buildsystems/vcpkg.cmake"
      CACHE STRING "")
endif()

project ("CppWebServer")
#add_definitions(-DBOOST_ALL_NO_LIB)

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
SET(RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 包含子项目。
add_subdirectory ("BoostTest")
add_subdirectory ("SqliteTest")
add_subdirectory ("Server")
add_executable (${PROJECT_NAME} main.cpp)
target_link_libraries (${PROJECT_NAME} SqliteTest BooTest HttpServer)
