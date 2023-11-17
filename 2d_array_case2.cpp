// find the sum of diagonal.
#include <iostream>
using namespace std;
int main()
{
    int total = 0;
    int arr1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    for (int row = 0; row < 4; row++)
    {

        for (int col = 0; col < 4; col++)
        {
            if (row == col)
            {
                total += arr1[row][col];
            }
        }
    }

    cout << "sum of the diagonal " << total;
}