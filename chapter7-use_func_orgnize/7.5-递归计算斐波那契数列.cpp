#include <iostream>
using namespace std;

int GetFibNumber(int fibIndex)
{
    if (fibIndex < 2) // 斐波那契数列的前两项为0 1
    {
        return fibIndex;
    }
    else // recursion if fibIndex >= 2
    {
        return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
    }
    // return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
}

int main()
{
    // cout << "Enter 0-based index of desired Fibonacci Number: ";
    cout << "Enter the num of desired Fibonacci: ";
    int num = 0;
    cin >> num;
    for (int i = 0; i < num; ++i)
        cout << GetFibNumber(i) << '\t';
    // cout << "Fibonacci number is: " << GetFibNumber(num) << endl;
}