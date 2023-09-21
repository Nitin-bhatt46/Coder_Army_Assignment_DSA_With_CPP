// Find even till the entered number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number till you want to find even = ";
    cin>> num;
    for (int i=2;i<=num;i++){
        if(i%2==0){
            cout<<i<<" is a even  number"<<endl;
        }
    }
}