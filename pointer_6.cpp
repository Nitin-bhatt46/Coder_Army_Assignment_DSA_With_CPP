#include <iostream>
#include <algorithm>
using namespace std;
void inc(int *arr, int n)
{
    int i;
    for(i=0;i<n;i++){
        arr[i]*=2;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    inc(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}