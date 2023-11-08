// printing the first value in the vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;

    vector<int> v3={1,2,3,4,5} ;
    cout << "vector  = ";




    for (i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
  

    cout << "front value = " << v3.front() << endl;
    cout << "back value = "  << v3.back() << endl;
    
}