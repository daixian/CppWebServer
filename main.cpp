#include <iostream>
#include <boost/array.hpp>
#include <boost/filesystem.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>

//https://github.com/boostorg/beast/tree/develop/example/http/server/async

using namespace std;

int main()
{
    boost::array<int, 4> arr = {{1, 2, 3, 4}};
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    boost::filesystem::directory_iterator di("./");
    for (auto& item : di)
    {
        cout << item.path().string() << endl;
    }
    cin.get();
    return 0;
}
