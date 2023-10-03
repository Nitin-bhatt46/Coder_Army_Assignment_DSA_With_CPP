// Day_11_Q5.cpp
// do while loop ( table)

#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num;
    cout<<"enter the number ";
    cin>>num;
    do{
        cout<<a*num<<endl;
        a++;
    }while(a<=10);
}