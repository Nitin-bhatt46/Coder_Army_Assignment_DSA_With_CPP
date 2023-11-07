// vector cannot be declare it can only be initialize

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    
    vector<int> v(5,2);
   // when we declare a vector it size and capacity remain the same.
cout<<"Before updating the value = ";

    for ( i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    

}