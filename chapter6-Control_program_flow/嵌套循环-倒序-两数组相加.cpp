#include <iostream>
using namespace std;
int main()
{
    int Arr_A_Len = 3;
    int Arr_B_Len = 4;
    int arr_a[Arr_A_Len] = {3, 4, 21};
    int arr_b[Arr_B_Len] = {2, 4, 1, 5};

    for (int i = Arr_A_Len - 1; i >= 0; --i)
    {
        for (int j = Arr_B_Len - 1; j >= 0; --j)
        {
            cout << arr_a[i] << "+" << arr_b[j] << "=" << arr_a[i] + arr_b[j] << endl;
        }
    }

    return 0;
}