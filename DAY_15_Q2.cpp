// DAY_15_Q2
//  FIND THE number is prime or not and than finds its factorial.
#include <iostream>
using namespace std;

bool prime(int a)
{
    if (a < 2)
    {
        return 0;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int fac(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int a;
    cout << "enter the value of a  =";
    cin >> a ;

    cout << prime(a) << endl;
    cout << fac(a);
}