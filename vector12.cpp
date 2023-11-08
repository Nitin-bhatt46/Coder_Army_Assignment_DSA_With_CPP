// searching with binary search with STL

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
    v.push_back(54);
    cout << "Before soritng the value = ";

    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout<<binary_search(v.begin(), v.end(),54)<<endl;

    // finding index 
    cout<<find(v.begin(),v.end(),54)-v.begin()<<endl;
}