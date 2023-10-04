// Day_13_Q1.cpp
// Decimal to octal
#include <iostream>
using namespace std;
int main()
{
    int num, rem, mul = 1, ans = 0;
    cout << "enter the number in decimal =";
    cin >> num;
    while (num > 0)
    {
        rem = num % 8; // 4,1
        num = num / 8;  // 1,0
        ans = rem * mul + ans;//4+0=4,
        mul = mul * 10 ;//8
    }
    cout << ans;
}