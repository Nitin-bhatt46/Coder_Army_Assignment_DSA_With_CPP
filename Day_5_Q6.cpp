// print a tabe of n number 
// printing n* 1= n

#include<iostream>
using namespace std;
int main(){
    int a,n ;
    cout<<"enter the number for which you want table. =";
    cin>>n;

    for (a=1;a<=10;a++){
        cout<<n<<"X"<<a<<"="<<n*a<<endl;
    }
return 0;
}