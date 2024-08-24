#include <iostream>
using namespace std;

int main()
{
    int int_arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(int_arr) / sizeof(int_arr[0]);
    for (int i = size - 1; i >= 0; --i)
    {
        cout << int_arr[i] << " ";
    }
    return 0;
}