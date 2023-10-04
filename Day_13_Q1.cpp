// Day_13_Q1.cpp
// Decimal to binary
#include <iostream>
using namespace std;
int main()
{
    int num, rem, mul = 1, ans = 0;
    cout << "enter the number in decimal =";
    cin >> num;
    while (num > 0)
    {
        rem = num % 2; 
        num /= 2;  
        ans += rem * mul;
        mul *= 10;
    }
    cout << ans;
}