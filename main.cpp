#include <iostream>
#include <boost/array.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>

//https://github.com/boostorg/beast/tree/develop/example/http/server/async

using namespace std;

int main()
{
    boost::array<int,4> arr ={{1,2,3,4}};
    for(size_t i = 0; i < arr.size(); i++)
    {
        cout<< arr[i];
    }
    cout<<endl;
    return 0;

}
