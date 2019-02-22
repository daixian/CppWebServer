#include <boost/filesystem.hpp>
#include <iostream>
#include <string>

namespace fs = boost::filesystem;

void find_file(const fs::path& dir_path)
{
    if (!fs::exists(dir_path)) return;
    fs::directory_iterator end_itr; // 缺省构造生成一个结束迭代器
    for (fs::directory_iterator itr(dir_path);
         itr != end_itr;
         ++itr) {
        if (fs::is_directory(itr->status())) {
            find_file(itr->path()); //递归查找
        }
        else {
            std::cout << *itr << std::endl;
        }
    }
}