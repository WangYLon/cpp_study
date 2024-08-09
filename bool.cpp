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
}