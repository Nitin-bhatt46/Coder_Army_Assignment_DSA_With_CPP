// reverse the row.
#include <iostream>
using namespace std;
int main()
{
    int start = 0, end = 0;
    int arr1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    for (int row = 0; row < 4; row++)
    {
        start = 0, end = 3;
        while (start < end)
        {
            swap(arr1[row][start], arr1[row][end]);
            start ++;
            end--;
        }
    }

 for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr1[row][col] << "\t";
        }
        cout << endl;
    }
}