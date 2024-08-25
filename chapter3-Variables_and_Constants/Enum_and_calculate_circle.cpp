#include <iostream>
using namespace std;
const double PI = 3.1415926;

enum YourCards
{
    Ace = 43,
    Jack,
    Queen,
    King,
};

int main()
{
    cout << "Ace's idx=" << Ace << endl;
    cout << "Jack's idx=" << Jack << endl;
    cout << "Queen's idx=" << Queen << endl;
    cout << "King's idx=" << King << endl;

    cout << "int's size=" << sizeof(int) << "Bytes" << endl;
    cout << "unsigned's size=" << sizeof(unsigned int) << "Bytes" << endl;
    cout << "long int's size=" << sizeof(long int) << "Bytes" << endl;

    double r = 0;
    cout << "Please input the circle's radius:";
    cin >> r;
    double circumference = 2 * PI * r;
    double area = PI * r * r;
    cout << "circle's circumference=" << circumference << endl;
    cout << "circle's area=" << area << endl;

    return 0;
}