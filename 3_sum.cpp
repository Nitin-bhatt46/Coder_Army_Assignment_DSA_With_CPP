#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a = {1, 4, 6, 8, 10, 45};
    int n = 6;
    int X = 24;
    for (int i = 0; i < n - 1; i++)
    {
        int ans = X - a[i];
        int start = i + 1;
        int end = n - 1;

        while (start < end)
        {
            if (a[start] + a[end] == ans)
            {
                cout << a[i] << endl;
                cout << a[start] << endl;
                cout << a[end]<<endl;

                cout<< a[i]<<" + "<<a[start]<<" + "<<a[end]<<" = "<<a[i]+a[start]+a[end];
                return 0;
            }
            else if (a[start] + a[end] > ans)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        
    }
    cout<<"not possible";
}