// print the sum of square of n number enter by the user.
#include <iostream>
using namespace std;
int main()
{
    int i, a, sum = 0;
    cout << "enter the number till you want to find the sum of square.";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        sum = sum + ( i * i);
    }
    cout<<sum;
    return 0;
}