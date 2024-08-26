#include <iostream>
using namespace std;

const double PI = 3.1415926;
// 形参result被定义为某个引用
void Area(double radius, double &result);

int main()
{
    double radius = 0;
    cout << "Enter the radius: " << endl;
    cin >> radius;
    double area;
    Area(radius, area); // 实参直接传入即可
    cout << "The area is: " << area << endl;
    return 0;
}

// 形参result是实参area的引用，二者指向的是同一块内存区域
void Area(double radius, double &result)
{
    result = PI * radius * radius;
}