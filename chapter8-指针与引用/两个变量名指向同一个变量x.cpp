#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = a; // 不行，在int b的时候就已经在内存中新开辟了一块内存，这块内存的标识符叫b，会将a内存区域的值复制到b内存区域
    cout << "a's value is " << a << '\t' << "a's address is " << &a << endl;
    cout << "b's value is " << b << '\t' << "b's address is " << &b << endl;
    return 0;
}