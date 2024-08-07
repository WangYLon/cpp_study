#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "type: \t\t" << "************size**************" << endl;

    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;

    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;

    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;

    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;

    cout << "unsigned int: \t" << "所占字节数：" << sizeof(unsigned int);
    cout << "\t最大值：" << (numeric_limits<unsigned int>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned int>::min)() << endl;

    cout << "signed int: \t" << "所占字节数：" << sizeof(signed int);
    cout << "\t最大值：" << (numeric_limits<signed int>::max)();
    cout << "\t最小值：" << (numeric_limits<signed int>::min)() << endl;

    cout << "short int: \t" << "所占字节数：" << sizeof(short int);
    cout << "\t最大值：" << (numeric_limits<short int>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short int>::min)() << endl;

    cout << "unsigned short int: \t" << "所占字节数：" << sizeof(unsigned short int);
    cout << "\t最大值：" << (numeric_limits<unsigned short int>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned short int>::min)() << endl;

    cout << "signed short int: \t" << "所占字节数：" << sizeof(signed short int);
    cout << "\t最大值：" << (numeric_limits<signed short int>::max)();
    cout << "\t最小值：" << (numeric_limits<signed short int>::min)() << endl;

    cout << "long int: \t" << "所占字节数：" << sizeof(long int);
    cout << "\t最大值：" << (numeric_limits<long int>::max)();
    cout << "\t最小值：" << (numeric_limits<long int>::min)() << endl;

    cout << "signed long int: \t" << "所占字节数：" << sizeof(signed long int);
    cout << "\t最大值：" << (numeric_limits<signed long int>::max)();
    cout << "\t最小值：" << (numeric_limits<signed long int>::min)() << endl;

    cout << "unsigned long int: \t" << "所占字节数：" << sizeof(unsigned long int);
    cout << "\t最大值：" << (numeric_limits<unsigned long int>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long int>::min)() << endl;

    cout << "long long int: \t" << "所占字节数：" << sizeof(long long int);
    cout << "\t最大值：" << (numeric_limits<long long int>::max)();
    cout << "\t最小值：" << (numeric_limits<long long int>::min)() << endl;

    cout << "signed long long int: \t" << "所占字节数：" << sizeof(signed long long int);
    cout << "\t最大值：" << (numeric_limits<signed long long int>::max)();
    cout << "\t最小值：" << (numeric_limits<signed long long int>::min)() << endl;

    cout << "unsigned long long int: \t" << "所占字节数：" << sizeof(unsigned long long int);
    cout << "\t最大值：" << (numeric_limits<unsigned long long int>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long long int>::min)() << endl;

    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;

    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;

    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    // wchar_t是一个宽字符类型，用于表示Unicode字符
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    // size_t是一个无符号整数类型，用于表示大小或长度
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;

    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;

    cout << "type: \t\t" << "************size**************" << endl;
    return 0;
}