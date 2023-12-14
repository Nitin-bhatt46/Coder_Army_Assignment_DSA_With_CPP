#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  int n=10;
  int *p=&n;
  int **ptr=&p;
 

cout<<"value of n = "<<n<<endl;

cout<<"address of n = "<<&n<<endl;

cout<<"value of p = "<<p<<endl;

cout<<"address of p = "<<&p<<endl;

cout<<"calling a value with p = "<<*p<<endl;

cout<<"value of ptr = "<<ptr<<endl;

cout<<"address of ptr = "<<&ptr<<endl;

cout<<"calling a value with ptr = "<<**ptr<<endl;

}