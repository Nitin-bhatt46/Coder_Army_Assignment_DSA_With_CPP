// REVERSE SELECT SORTING
#include <iostream>
using namespace std;
int main()

{

    int arr[5] = {10,4,3,2,8};
    int i,j;

 for (int j = 4; j>=0 ; j--)
    {
        int index = j;
        for (i = j-1; i >=0; i--)//
        {
            if (arr[i] > arr[index])
            {
                index = i;
                 swap(arr[index], arr[j]);
            }
         }
    }
       for (i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    // cout<<index;
}