cmake_minimum_required(VERSION 3.0.0)
project(cpp_web_server VERSION 0.1.0)

set (Boost_DETAILED_FAILURE_MSG ON)
set (Boost_THREADAPI win32)
set (Boost_USE_STATIC_RUNTIME ON)  
set (BOOST_DEBUG ON) 

#include_directories ("D:/SDK/eigen/eigen")
include_directories(./)

if (MSVC)
set(BOOST_ROOT D:/SDK/boost/boost_1_68_0/)
set(BOOST_INCLUDEDIR D:/SDK/boost/boost_1_68_0/)
set(Boost_LIBRARY_DIR D:/SDK/boost/boost_1_68_0-lib-x64-vs2017/)

set(Boost_INCLUDE_DIRS D:/SDK/boost/boost_1_68_0/)
set(Boost_LIBRARY_DIRS D:/SDK/boost/boost_1_68_0-lib-x64-vs2017/)

#add_definitions(-DBOOST_ALL_NO_LIB)

set (Boost_NO_SYSTEM_PATHS ON)
set (Boost_USE_MULTITHREADED ON)
set (Boost_USE_STATIC_LIBS ON)
set (Boost_USE_STATIC_RUNTIME OFF)
set (BOOST_ALL_DYN_LINK OFF)

include_directories(${Boost_INCLUDE_DIRS}) 
endif()

find_package(Boost 1.66.0 REQUIRED COMPONENTS filesystem )

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
SET(RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(cpp_web_server main.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(cpp_web_server Threads::Threads)
TARGET_LINK_LIBRARIES(cpp_web_server ${Boost_LIBRARIES})





