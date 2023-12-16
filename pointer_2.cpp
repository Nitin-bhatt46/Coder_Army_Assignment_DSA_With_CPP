// different way to access value of a array.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    // printintg the value with different method not the traditional
    
    for(int i=0;i<5;i++)
{
    cout<<*(arr+i);
}

cout<<endl;

// printing address :- 

 for(int i=0;i<5;i++)
{
    cout<<arr+i<<endl;
}
}