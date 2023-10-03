// learning while loop
// factors of n
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int num;
    cout<<"enter the number which you want to print = ";
    cin>>num;
    while(a<=num){
        if(num%a==0){
            cout<<"factor of "<<num<<" is ="<<a<<endl;
        }
        a++;
    }
}