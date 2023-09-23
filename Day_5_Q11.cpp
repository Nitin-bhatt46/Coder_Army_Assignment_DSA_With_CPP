// find factorial till n enter by the user
#include<iostream>
using namespace std;
int main(){
    int a, fact =1,i;
    cout<<"enter the number to get the factorial = ";
    cin>>a;
    for(i=1;i<=a;i++){
        fact = fact*i;
    }
cout<<fact;
return 0;
}