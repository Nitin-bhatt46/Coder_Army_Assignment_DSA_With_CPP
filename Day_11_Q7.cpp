// Day_11_Q7.cpp
// do while loop (print even)

#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num;
    cout<<"enter the number ";
    cin>>num;
    do{
        if(a%2==0){
            cout<<a<<" is even "<<endl;
        }
        a++;
    }while(a<=num);
}