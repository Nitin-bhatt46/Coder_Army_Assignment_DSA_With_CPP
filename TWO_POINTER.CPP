// method 1
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {0, 0, 0, 0, 0, 1, 1}; // end =4,start 0

    int start = 0, end = 7 - 1;
    while (start <= end)
    {
        if (arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start = start + 1;
            end = end - 1;
        }
        else
        {
            if (arr[start] == 1 && arr[end] == 1)
            {
                end = end - 1;
            }
            else
            {
                start = start + 1;
                
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
}