// empty vector with inserintg and deleting value

#include <iostream>
#include <vector>
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

cout<<"Before poping the value = ";

    for ( i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    // size and capacity;
cout<<endl;
    cout << "size before the value deletion"
         << "  =  " << v.size() << endl; // 3
    cout << "capacity before the value deletion"
         << "  =  " << v.capacity() << endl; // 4
    // in this case we will know how memory is allocated to a vector in a multiple of 2 with a size
    // eg :- 2,4,8,16,32 etc which means capacity of the vector not the size , size will be the no.of element in the vector.

    // deleting the value

    // pop directly delete the last value in the vector , it don't take any argument

    v.pop_back();

    // size and capacity;
cout<<"after poping the value = ";
       for ( i = 0; i < v.size(); i++)
    {
        cout <<  v[i];
    }
cout<<endl;
    cout << "size after the value deletion"
         << "  =  " << v.size() << endl; // 2
    cout << "capacity after the value deletion"
         << "  =  " << v.capacity() << endl; // 4

    //  even after deleting the value from the vector the size changes but
    // the capacity remain the same due to allocation has been done in the heap memory
}