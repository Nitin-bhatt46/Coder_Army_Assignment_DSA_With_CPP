// another method
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {0, 0, 0, 0, 0, 1, 1}; // end =4,start 0

    int start = 0, end = 7 - 1;
    while (start <= end)
    {
        if (arr[start] == 0)
        {

            start = start + 1;
        }
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start = start + 1;
                end = end - 1;
            }
            else
            {
                end = end - 1;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
}