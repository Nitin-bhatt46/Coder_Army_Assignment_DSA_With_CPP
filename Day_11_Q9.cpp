// Day_11_Q8.cpp
// do while loop (print sum till num)

#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num,sum=0;
    cout<<"enter the number ";
    cin>>num;
    do{
       sum=sum+a;
        a++;
    }while(a<=num);
    cout<<sum;
}