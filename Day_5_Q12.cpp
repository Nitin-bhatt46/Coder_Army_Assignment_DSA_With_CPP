// prime number find a single input
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number to find out prime or not";
    cin >> n;

    if (n < 2)
    {
        cout << "It is not a prime number";
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {

            if (n % i == 0)
            {
                cout << "It is not a prime number";
                return 0;
            }
            
        }
       
            {
                cout << "it is a prime number";
                return 0;
            }
    }
}