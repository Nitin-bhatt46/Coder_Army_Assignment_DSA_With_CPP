//  ROTATE MATRIX WITH 90 DEGREE with extra array.
#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int ans[4][4];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "BEFORE" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - 1 - i] = arr[i][j];
        }
    }

    cout << "AFTER" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cout<< ans[i][j]<<"\t";
        }
          cout<<endl;
    }
}