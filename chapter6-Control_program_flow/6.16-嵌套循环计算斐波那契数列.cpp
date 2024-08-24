#include <iostream>
using namespace std;

int main()
{
    const long long num = 10; // 一次计算10个斐波那契数
    cout << "一次性计算10个斐波那契数列:" << endl;
    long long num1 = 0, num2 = 1, num3 = 0;
    cout << num1 << " " << num2 << " ";
    char flag = '\0';
    do
    {
        for (int idx = 0; idx < num; ++idx)
        {
            num3 = num1 + num2;
            cout << num3 << " ";
            num1 = num2;
            num2 = num3;
        }
        cout << endl;
        cout << "你是否还要继续计算? (y/n):" << " ";
        cin >> flag;
        cout << endl;
    } while (flag == 'y' || flag == 'Y');
    return 0;
}