//2: Reverse a number n using Function, Constraints:
//-5000<=n<=5000
// DAY_15_Q7

#include <iostream>
using namespace std;

int reverse(int a )
{int rem,sum =0;//12
while(a>0){
  rem = a%10;//2
  a=a/10;//1
  sum = sum*10+rem;//2
}return sum;
}

int main()
{
    int a;
    cout << "enter the value of a ";
    cin >> a;
    cout<<reverse(a);

}