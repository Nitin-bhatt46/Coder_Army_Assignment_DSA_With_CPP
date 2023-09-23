// print a tabe of n number 
// printing direct table without mulitply of a*n

#include<iostream>
using namespace std;
int main(){
    int a,n ;
    cout<<"enter the number for which you want table. =";
    cin>>n;
    for (a=n;a<=n*10;a=a+n){
        cout<<a<<endl;
    }
return 0;
}