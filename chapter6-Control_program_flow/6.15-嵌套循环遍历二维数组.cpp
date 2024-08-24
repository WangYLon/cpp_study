#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLUMNS = 4;

    // 2D array of integers
    int MyInts[NUM_ROWS][NUM_COLUMNS] = {{34, -1, 879, 22},
                                         {24, 365, -101, -1},
                                         {-20, 40, 90, 97}};

    // iterate rows, each array of int
    // QUESTION: 引用与指针的关系
    // for(auto row : MyInts) // error
    for (auto &row : MyInts) // correct
    {
        cout << row << endl;
        // iterate integers in each row (columns)
        for (auto column : row)
        {
            cout << column << endl;
            // cout << "Integer[" << row << "][" << column << "] = " << endl;
        }
    }

    return 0;
}