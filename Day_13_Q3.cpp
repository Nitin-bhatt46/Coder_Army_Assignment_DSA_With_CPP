// Day_13_Q1.cpp
//  binary to Decimal 
#include <iostream>
using namespace std;
int main()
{
    int num, rem, mul = 1, ans = 0;
    cout << "enter the number in binary =";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10; 
        num /= 10;  
        ans += rem * mul;
        mul *= 2;
    }
    cout << ans;
}