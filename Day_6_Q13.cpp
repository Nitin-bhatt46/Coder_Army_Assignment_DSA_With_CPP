// Day_6_Q13
//  Pattern printing ( with 3rd variable)
#include <iostream>
using namespace std;
int main()
{

    int col, row,n=1;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
          
            cout<< n << " ";
             n = n + 1;
        }
        cout << endl;
    }
}