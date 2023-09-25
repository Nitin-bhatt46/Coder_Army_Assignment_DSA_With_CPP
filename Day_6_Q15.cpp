// Day_6_Q14
//  Pattern printing ( with 3rd variable)
#include <iostream>
using namespace std;
int main()
{

    char col;
    int row;

    for (row = 1; row <= 5; row++)
    {
        for (col = 'F'; col <= 'K'; col++)
        {
          
            cout<<col<< " ";
            
        }
        cout << endl;
    }
}