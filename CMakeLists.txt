cmake_minimum_required(VERSION 3.0.0)
project(cpp_web_server VERSION 0.1.0)

#include_directories ("D:/SDK/eigen/eigen")

add_executable(cpp_web_server main.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(cpp_web_server Threads::Threads)




