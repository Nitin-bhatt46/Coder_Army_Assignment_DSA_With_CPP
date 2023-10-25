// # DAY_19_Q2.Cpp
// # finding the smalles num in the index and giving out the index of it.
#include <iostream>
using namespace std;
int main()

{
    int arr[4] = {97, 112, 100, 98};
    int i;

    for (int j = 0; j < 4-1 ; j++)
    {

        int index = j;
        for (i = j+1; i < 4; i++)//
        {
            if (arr[i] < arr[index])
            {
                index = i;
                swap(arr[index], arr[j]);
            }
        }
        
    }
    for (i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
}