// Day_6_Q10
//  Pattern printing ( with 3rd variable)
#include <iostream>
using namespace std;
int main()
{

    int col, row;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            char n = 'a' + (row - 1);
           
            cout<< n << " ";
        }
        cout << endl;
    }
}