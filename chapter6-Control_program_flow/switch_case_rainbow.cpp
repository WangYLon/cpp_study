#include <iostream>
using namespace std;
int main()
{
    enum Rainbow
    {
        Red,
        Orange,
        Yellow,
        Green,
        Blue,
        Indigo,
        Violet

    };
    cout << "这里是可用的颜色列表" << endl;
    for (int rainbow = 0; rainbow <= Violet; ++rainbow)
    {
        cout << rainbow << endl;
    }
    int select = Red;
    cout << "请选择你要的颜色: " << endl;
    cin >> select;
    switch (select)
    {
    default: // default 要是放在中间位置，因为其他case没有break，所以他也会执行到default
        cout << "您选择的颜色不在彩虹中" << endl;

        break;
    case Red:
    case Orange:
    case Yellow:
    case Green:
    case Blue:
    case Indigo:
    case Violet:
        cout << "您选择的颜色在彩虹中" << endl;
        break;
    }
    return 0;
}