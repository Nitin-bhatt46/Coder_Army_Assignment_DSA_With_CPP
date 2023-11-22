//   advanced methods called up down search method

#include <iostream>

using namespace std;
int main()

{
    int arr[5][5] = {4, 8, 15, 25, 60, 18, 22, 26, 42, 80, 36, 40, 45, 68, 104, 48, 50, 72, 83, 130, 70, 99, 114, 128, 170};
    int row = 5;
    int col = 5;
    int x;

    cout << "enter the number you want to find." << endl;
    cin >> x;
    int i = 0, j = col - 1;

    while (i < row && j >= 0) // 2
    {
        if (arr[i][j] == x)
        {
            cout << "got it " << arr[i][j];
            return 0;
        }
        else if (arr[i][j] < x) // 45
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << "unable to find guru";
}