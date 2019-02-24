# CMakeList.txt: SqliteTest 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.0)

find_package(Sqlite3 REQUIRED)
find_package(RapidJSON CONFIG REQUIRED)

# 将源代码添加到此项目的可执行文件。
aux_source_directory(. SRC_LIST)
add_library(SqliteTest ${SRC_LIST})

target_include_directories(SqliteTest PRIVATE ${RAPIDJSON_INCLUDE_DIRS})
target_link_libraries(SqliteTest sqlite3)
# TODO: 如有需要，请添加测试并安装目标。
