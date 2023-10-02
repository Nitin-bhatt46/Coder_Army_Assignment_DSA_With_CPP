// Day_10_Q2
//2: Even and Positive Number: Write a program that prints “YES” if a given number is 
// both even and positive, otherwise it will print “NO”.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number which you want to check";
    cin>>a;
    if(a%2==0 && a>0){
        cout<<"It is even and positive";
    }
    else if (a%2==0 && a<0){
        cout<<"It is -ve num but even ";
    }
    else if(a<0){
        cout<<"it is -ve number with odd number";
    }
else{
    cout<<"it is odd";
}
}