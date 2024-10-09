#include <iostream>

using namespace std;

int main()
{
    int age = 30;
    int *agePointer = &age;
    const double PI = 3.1415;
    cout << "Int age is located at: " << &age << endl;
    cout << "Int age's size: " << sizeof(age) << endl;
    cout << "Int pointer agePointer's value: " << agePointer << endl;
    cout << "Int pointer's size: " << sizeof(agePointer) << endl;
    cout << "Double PI is located at: " << &PI << endl;
    return 0;
}
// 在64位系统上，虽然地址的最大可能长度是16位十六进制数，但由于实际使用的地址空间较小，所以你看到的地址是12位十六进制数。这与系统架构、地址空间的实际使用以及内存管理方式有关。
