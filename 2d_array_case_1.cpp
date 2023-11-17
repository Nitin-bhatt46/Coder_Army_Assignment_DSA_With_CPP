// find the max sum of the row .with row index.
#include <iostream>
using namespace std;
int main()
{
    int sum = INT_MIN, index = -1;
    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int row = 0; row < 4; row++)
    {
        int total = 0;
        for (int col = 0; col < 3; col++)
        {
            total += arr1[row][col];

            if (sum < total)
            {
                sum = total;
                index = row;
            }
        }
        cout << "row"
             << " " << row + 1 << " = " << total << endl;
    }
    cout << "index of the row" << index << endl;
    cout << "sum of the row " << sum;
}