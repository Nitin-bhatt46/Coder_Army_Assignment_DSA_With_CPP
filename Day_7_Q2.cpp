//Day_7_Q2.cpp
//  Pattern printing 
#include <iostream>
using namespace std;
int main()
{

   int col;
    int row;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
          
            cout<<col<< " ";
            
        }
        cout << endl;
    }
}