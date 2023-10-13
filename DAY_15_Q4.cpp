// DAY_15_Q4
//  pass by value in which nothing is return use void main
#include <iostream>
using namespace std;

void inc(int &a)
{
    a++;
}

int main()
{
    int a;
    cout << "enter the value of a which you want to increament";
    cin >> a;
    inc(a);
cout<<a;
}