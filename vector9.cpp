// copy one vecotr to other
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;

    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> v4;
    cout << "vector before copying  = ";

    for (i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    v4 = v3;
    cout << "vector after copying  = ";
    for (i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
}