//  ROTATE MATRIX WITH 180 DEGREE with new approach.
#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "BEFORE" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // colum-wise reverse the arr(matrix)
for (int j = 0; j < 4; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }
   
// row reverse
    for (int i = 0; i < 4; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    cout << "AFTER" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}