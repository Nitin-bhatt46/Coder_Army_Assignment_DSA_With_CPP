// even number by while loop
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num;
    cout<<"enter the number which you want to print = ";
    cin>>num;
    while(a<=num){
        if(a%2==0){
            cout<<"even number"<<a<<endl;
        }
        a++;
    }
}