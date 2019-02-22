
cmake_minimum_required (VERSION 3.0)
 
#add_definitions(-DBOOST_ALL_NO_LIB)

#SET(Boost_USE_STATIC_LIBS OFF)
#SET(Boost_USE_MULTITHREAD ON)

set(Boost_DEBUG 0)

find_package(Boost 1.69.0 REQUIRED COMPONENTS)
IF(Boost_FOUND)
  INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS})
  LINK_DIRECTORIES(${Boost_LIBRARY_DIRS})
ENDIF(Boost_FOUND)

message(STATUS "beast find result: Boost_INCLUDE_DIRS = " ${Boost_INCLUDE_DIRS})
message(STATUS "beast find result: Boost_LIBRARIES = " ${Boost_LIBRARIES})
 
add_library (HttpServer HttpServer.h HttpServer.cpp)
#target_include_directories(http-server-async PRIVATE ${Boost_INCLUDE_DIRS})
#target_link_libraries (http-server-async PRIVATE ${USED_LIBS})
 