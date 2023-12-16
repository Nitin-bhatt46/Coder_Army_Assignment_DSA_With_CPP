#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a = 35;
    int *p= &a;

    cout<<"value of a = "<<a<<endl;
    cout<<"address of a = "<<&a<<endl;
    cout<<"value of p = "<<p<<endl;
    cout<<"address of p = "<<&p<<endl;
    cout<<"pointer p has address as a value , to access address within p we use * = "<<*p<<endl;
    cout<<"size of pointer depend on the RAM of the system = "<<sizeof(p)<<" Byte";
    
}