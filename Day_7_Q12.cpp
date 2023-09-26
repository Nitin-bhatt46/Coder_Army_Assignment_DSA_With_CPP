// Day_7_Q4.cpp
//   Pattern printing
#include <iostream>
using namespace std;
int main()
{
    int row, col, n;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            n = 5 -( col - 1);

            cout << n << " ";
        }
        cout << endl;
    }
}