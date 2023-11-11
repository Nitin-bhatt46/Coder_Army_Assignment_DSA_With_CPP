#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {6, 4, 5, -3, 2, 8};

    vector<int> prefix(6);
    prefix[5] = arr[5];
    for (int i = 4; i >= 0; i--)
    {
        prefix[i] = prefix[i + 1 ] + arr[i];
    }

    for (int i=0;i<6;i++){
        cout<<prefix[i]<<" ";
    }

    return 0;
}