// Day_7_Q10.cpp
//   Pattern printing
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    char n;

    for (row = 4; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            n = 'A' + (col - 1);
            cout << n << " ";
        }
        cout << endl;
    }
}