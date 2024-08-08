#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line(50, '-');
    int startValue = 101;
    cout << "start value of int being operated: " << startValue << endl;
    cout << line << endl;
    int postfixIncrement = startValue++;
    cout << "Rssult of Postfix Increment = " << postfixIncrement << endl;
    cout << "After postfix increment ,startvalue = " << startValue << endl;

    cout << line << endl;
    startValue = 101;
    int prefixIncrement = ++startValue;
    cout << "Result of prefix Increment = " << prefixIncrement << endl;
    cout << "After prefix increment ,startvalue = " << startValue << endl;

    cout << line << endl;
    startValue = 101;
    int postfixDecrement = startValue--;
    cout << "Result of postfix decrement = " << postfixDecrement << endl;
    cout << "After postfix decrement ,startvalue = " << startValue << endl;

    cout << line << endl;
    startValue = 101;
    int prefixDecrement = --startValue;
    cout << "Result of prefix decrement = " << prefixDecrement << endl;
    cout << "After prefix decrement ,startvalue = " << startValue << endl;
    cout << line << endl;
    return 0;
}