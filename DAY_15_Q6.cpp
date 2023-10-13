//1: Find the cube of a number using Function.
// DAY_15_Q6

#include <iostream>
using namespace std;

int cube(int a )
{int c;
   c=a*a*a;
   return c;
}

int main()
{
    int a;
    cout << "enter the value of a ";
    cin >> a;
    cout<<cube(a);

}