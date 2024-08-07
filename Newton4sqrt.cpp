// #include <iostream>
// #include <cmath>
// using namespace std;

// // err 是允许的误差
// const float err = 1e-8;

// float NtSqrt(const float num)
// {
//     if (num < 0)
//     {
//         return -1;
//     }
//     else
//     {
//         float root = num;
//         // 如果原值减去近似根的平方大于误差，继续循环
//         while (abs(num - root * root) >= err)
//         {
//             // 得到下一个近似根
//             root = (num / root + root) / 2.0;
//         }
//         return root;
//     }
// }

// int main()
// {
//     float num;
//     cout << "请输入一个数: ";
//     cin >> num;
//     float ans = NtSqrt(num);
//     if (ans == -1)
//     {
//         cout << "负数没有平方根" << endl;
//     }
//     else
//     {
//         cout << num << " 的平方根是 " << ans << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

const float err = 1e-8;

float NtSqrt(float num)
{
    if (num < 0)
    {
        return -1.0;
    }
    else
    {
        float root = num;
        while (abs(num - root * root) >= err)
        {
            /* code */
            cout << root << endl;
            root = (num / root + root) / 2;
        }
        return root;
    }
}

int main()
{
    float num;
    cout << "请输入一个数：";
    cin >> num;
    cout << endl
         << num << endl;
    float res = NtSqrt(num);
    while (res == -1.0)
    {
        cout << "输入为负数，请检查输入" << endl;
        cout << "请输入一个数：";
        cin >> num;
        res = NtSqrt(num);
    }
    cout << num << "的平方根为" << res << endl;
    return 0;
}