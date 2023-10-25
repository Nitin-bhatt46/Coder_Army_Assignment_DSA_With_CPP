// # DAY_19_Q1.Cpp
// # finding the smalles num in the index and giving out the index of it.
#include <iostream>
using namespace std;
int main()

{ int arr[]={4,5,3,1};
    int i;
        int index = 0;
        for (i = 1; i < 4; i++)
        {
            if (arr[i] < arr[index])
            {
                index = i;
            }
        }
   
        cout << index;
    
}