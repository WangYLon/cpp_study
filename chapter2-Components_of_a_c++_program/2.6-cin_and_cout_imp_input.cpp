#include <iostream>
#include <string>
using namespace std;

int main()
{
     int inputNumber1;
     int inputNumber2 = 0;

     cout << "Please Enter an integer" << endl;

     cin >> inputNumber1 >> inputNumber2;

     cout << "Enter your name" << endl;
     string name;
     cin >> name;

     cout << name << " entered " << inputNumber1 << '\t' << inputNumber2 << endl;

     cout << "这是单引号的换行符" << '\n'
          << "end";
     cout << "这是双引号的换行符" << "\n"
          << "end";

     cout << "这是单引号的换行符与数字连接" << 1 + '\n'
          << "end";
     cout << "这是双引号的换行符与数字连接" << 1 << "\n"
          << "end";
     // 双引号是字符串，内含终止符'\0'

     return 0;
}