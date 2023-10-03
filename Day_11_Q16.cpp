// Day_11_Q15.cpp
//  6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int num;
    cout << "enter the number  = ";
    cin >> num;

    if (num < 2)
    {
        cout << "not a prime number";
    }
    else
    {

        while (a < num)
        {
            if (num % a == 0)
            {
                cout << "it is not a prime"<<endl ;
                break;
            }

            a++;
        }
          if (a == num) {
            cout << "It is a prime";
        }
    }
}