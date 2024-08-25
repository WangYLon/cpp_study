#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool flag = 0;
    cout << "bool flag = " << flag << endl;

    int x = 0;
    bool int2bool = x;
    cout << "int2bool flag = " << int2bool << endl;

    float xx = 0.;
    bool float2bool = xx;
    cout << "float2bool flag = " << float2bool << endl;

    string xxx = "hello world";
    // bool string2bool = xxx;
    // cout << "string2bool flag = " << string2bool << endl;
    // if (xxx)
    // {
    //     cout << "string as condition" << endl;
    // }
    // string line(50, '*');
    // std::string s1 = "Hello, World!";
    // std::string s2 = ""; // 空字符串

    // if (s1)
    // {
    //     std::cout << "s1 is true" << std::endl; // 这行会被执行
    // }
    // else
    // {
    //     std::cout << "s1 is false" << std::endl;
    // }

    // if (s2)
    // {
    //     std::cout << "s2 is true" << std::endl;
    // }
    // else
    // {
    //     std::cout << "s2 is false" << std::endl; // 这行会被执行
    // }

    return 0;
}