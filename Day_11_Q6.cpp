// Day_11_Q6.cpp
// do while loop ( factors of n)

#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num;
    cout<<"enter the number ";
    cin>>num;
    do{
        if(num%a==0){
            cout<<a<<" is factor of "<<num<<endl;
        }
        a++;
    }while(a<=10);
}