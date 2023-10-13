//3: There are three numbers a,b,c. Put the value of a into b, put
//value of b into c and put value of c into a. Do it using Function.
#include <iostream>
using namespace std;

void swap(int &a , int &b, int &c)
{
    int d;
    d=a;
    a=b;
    b=c;
    c=d;
}

int main()
{
    int a,b,c;
    cout << "enter the value of a and b";
    cin >> a>>b>>c;
    swap(a,b,c);
cout<<"a"<<"="<< a<<"  "<<"b ="<<b<<"  "<<"c ="<<c;
}