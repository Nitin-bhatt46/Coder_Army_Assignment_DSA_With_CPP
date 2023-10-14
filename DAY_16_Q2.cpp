//DAY_16_Q2.cpp
//armstrong
#include <iostream>
#include<math.h>
using namespace std;
int  digit(int a)
{
    int count=0;
    while(a){
        count++;
        a/=10;

    }
    return count;
}
bool  armstrong(int a,int power)
{int num =a;
    int rem,ans =0;
    while(num){
        rem = num%10;
        num/=10;
       ans = ans +pow(rem,power);
    
    }
   if( ans==a){
    return 1;
   }
   else {
    return 0;
   }
}
int main()
{
    int a;
    cout << "enter  = ";
    cin >> a;
    int power= digit(a);
    cout<< armstrong(a,power) ;
}