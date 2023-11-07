// removing value from any where in a vector.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    
    vector<int> v3={1,2,3,4,5};
   
cout<<"Before deleting the value = ";

    for ( i = 0; i < v3.size(); i++)
    {
        cout << v3[i]<<" ";
    }
    cout<<endl;
// this is how we do a custom deletion in a vector.
// we do it but we need to use indexing in it.
    v3.erase(v3.begin()+2);

// after deletion

cout<<"After deleting the value = ";

    for ( i = 0; i < v3.size(); i++)
    {
        cout << v3[i]<<" ";
    }

}