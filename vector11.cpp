// sorting the value in vector with decreasing order

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i;
    // create a vector
    vector<int> v;
    // inserting the value
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);
    cout << "Before soritng the value = ";

    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // sorting in decreasing order
    sort(v.begin(), v.end(), greater<int>());

    // second method

    // sort(v.rbegin(), v.rend());


    cout << "after soritng the value = ";

    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
