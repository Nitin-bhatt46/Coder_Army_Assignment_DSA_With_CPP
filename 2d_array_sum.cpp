#include <iostream>
using namespace std;
int main()
{
    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr3[4][3];
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            arr3[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    cout << " the sum of matrix " << endl;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr3[row][col] << "\t";
        }
        cout << endl;
    }
}