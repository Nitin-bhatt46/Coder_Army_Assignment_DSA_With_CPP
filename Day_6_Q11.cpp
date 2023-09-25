// Day_6_Q11
//  Pattern printing ( without 3rd variable)
#include <iostream>
using namespace std;
int main()
{

    char col;
    int row;

    for (row = 1; row <= 5; row++)
    {
        for (col = 'a'; col <= 'e'; col++)
        {   
            cout<<col<<" ";
        }
        cout << endl;
    }
}