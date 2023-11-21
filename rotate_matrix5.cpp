
//  ROTATE MATRIX n time
#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
int r;
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

    cout<<"enter the no.of time you want to rotate the matrix."<<endl;
    cin>>r;
while(r>0){
        // transpose the arr(matrix)

    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
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
r--;
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