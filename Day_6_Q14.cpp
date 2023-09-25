// Day_6_Q14
//  Pattern printing ( with 3rd variable)
#include <iostream>
using namespace std;
int main()
{

    int col, row,n;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
          n= (row-1)*5+col;
            cout<< n << " ";
            
        }
        cout << endl;
    }
}