
cmake_minimum_required (VERSION 3.0)

#GroupSources(include/boost/beast beast)
#GroupSources(example/http/server/async "/")
set( Boost_USE_STATIC_LIBS ON )
set( Boost_USE_MULTITHREADED ON )
set( Boost_USE_STATIC_RUNTIME OFF )

add_definitions(-DBOOST_ALL_NO_LIB)

set (Boost_NO_SYSTEM_PATHS ON)
set (Boost_USE_MULTITHREADED ON)
set (Boost_USE_STATIC_LIBS ON)
set (Boost_USE_STATIC_RUNTIME OFF)
set (BOOST_ALL_DYN_LINK OFF)

set(Boost_DEBUG 0)

find_package(Boost 1.69.0 REQUIRED COMPONENTS filesystem)

message(STATUS "filesystem find result: Boost_INCLUDE_DIRS = " ${Boost_INCLUDE_DIRS})
message(STATUS "filesystem find result: Boost_LIBRARIES = " ${Boost_LIBRARIES})

if(Boost_FOUND)
message("filesystem found!!!")
add_library (BooTest BooTest.cpp)
target_include_directories(BooTest PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries (BooTest PRIVATE ${Boost_LIBRARIES})
endif()