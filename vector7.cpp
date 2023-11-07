
// deleting all the value inside the array

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    
    vector<int> v3={1,2,3,4,5};
   
cout<<"Before deleting all the value = ";

    for ( i = 0; i < v3.size(); i++)
    {
        cout << v3[i]<<" ";
    }
    cout<<endl;
    v3.clear();

    cout<<"after deleting all the value = ";

    for ( i = 0; i < v3.size(); i++)
    {
        cout << v3[i]<<" ";
    }

}