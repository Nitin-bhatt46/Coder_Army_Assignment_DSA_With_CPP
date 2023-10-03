// 2: Find the factorial of a number n using a while loop .
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num,fac=1;
    cout<<"enter the number which you want to print = ";
    cin>>num;
    while(a<=num){
      fac =fac *a;
        
        a++;
    }
cout<<fac;
}