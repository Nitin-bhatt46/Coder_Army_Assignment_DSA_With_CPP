// DAY_15_Q5
//  pass by value in which nothing is return use void main
// write a code swap a and b
#include <iostream>
using namespace std;

void swap(int &a , int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int a,b;
    cout << "enter the value of a and b";
    cin >> a>>b;
    swap(a,b);
cout<<"a"<<"="<< a<<"b ="<<b;
}