
//2: Find the factorial of a number n using  do a while loop.
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num,fac=1;
    cout<<"enter the number ";
    cin>>num;
    do{
       fac=fac*a;
        a++;
    }while(a<=num);
    cout<<fac;
}