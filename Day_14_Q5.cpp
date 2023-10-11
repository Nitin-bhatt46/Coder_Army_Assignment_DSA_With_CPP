// Day_14_Q3.cpp
// palimdrome
#include <iostream>
using namespace std;
int main()
{
    int n,num,rem,sum=0;
    cout << "enter the num =";
    cin >> n;

num=n;
    if(num<0){
        cout<<"invalid number";
    }
    else {
        while(num){
            rem=num%10;//21
            num/=10;//10
            sum=sum*10+rem;//20
        }
cout<<sum<<endl;
    }
    if(sum==n){
        cout<<"it is palindrome";

    }
    else{
        cout<<"not palindrome";
    }
   
}