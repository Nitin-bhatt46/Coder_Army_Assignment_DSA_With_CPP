// char sorting 

#include <iostream>
using namespace std;
int main()

{
    char arr[4] = {'n', 'b', 'a', 'z'};
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