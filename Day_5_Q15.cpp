// sum  of cube first n natural number
#include<iostream>
using namespace std;
int main(){
    int a,i,sum=0;

cout<<"enter the number till you want to find cube sum";
cin>>a;
for(i=1;i<=a;i++){
    sum=sum+i*i*i;
}
cout<<sum;
}