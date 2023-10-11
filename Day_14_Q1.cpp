// Day_14_Q1.cpp
// Add digit till single number
#include <iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout << "enter the num =";
    cin >> num;

    while (num > 9)//22
    {
        while (num)
        {
            rem =num%10;
            num /=10;
            sum=rem+sum;

        }
        num=sum;
    }
    cout<<num;
}
