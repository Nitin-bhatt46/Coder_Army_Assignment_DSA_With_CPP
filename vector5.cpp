// updating the value with pre-define value in a vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    
    vector<int> v = {1,2,3,4,5,6};
   // when we declare a vector it size and capacity remain the same.s  
cout<<"Before updating the value = ";

    for ( i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout<<endl;
    // updating the value
   // we can update the value with the help of indexing. 
   
   v[0]=6;

    // size and capacity;
cout<<"after updating the value = ";
       for ( i = 0; i < v.size(); i++)
    {
        cout <<  v[i]<<" ";
    }

}