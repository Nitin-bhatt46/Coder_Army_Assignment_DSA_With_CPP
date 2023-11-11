#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool divide(vector<int> arr)
{
    int  prefix = 0, total_sum = 0, n = arr.size();
    // Total sum
    for (int i = 0; i < n; i++){
        total_sum+=arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        
        if (total_sum == 2 * prefix)
            return 1;
    }
    return 0;
}
int main()

{
    int arr[] = {6, 4, 5, -3, 2, 8};
    int n;
    cout << "Enter the size of array";
    cin >> n;
    vector<int> v(n);
    cout << "enter the element in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << divide(v);

    return 0;
}