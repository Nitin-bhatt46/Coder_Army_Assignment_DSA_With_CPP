// Day_14_Q3.cpp
// power of 2
#include <iostream>
using namespace std;
int main()
{
    int num, rem, sum = 0;
    cout << "enter the num =";
    cin >> num;
    cout << num << endl;

    if (num < 0)
    {
        cout << "not a power of 2";

        return 0;
    }
    while (num != 1)
    {

        if (num % 2 == 1)
        {
            cout << "not a power";
           
            return 0;
        }
         num = num / 2;
    }
    cout << "power of 2";
}
