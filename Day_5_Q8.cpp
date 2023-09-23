// enter the number with user and power, give square of it.
#include<iostream>
using namespace std;
int main(){
    int a,sq=1;
    int n;
    int p;
    cout<<"enter the number ";
    cin>>n;
    cout<<"enter the power";
    cin>>p;

    for(a=0;a<p;a++){
        sq=sq*n;
    }
    cout<<sq;
}