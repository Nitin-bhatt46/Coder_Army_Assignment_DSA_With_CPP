//DAY_17_Q6.cpp
// 1: Take 20 elements from user input and find its sum with the help of an array
#include<iostream>
using namespace std;
int main(){
    int a[20];
    int ans=0;
    cout<<"enter the 20 element to get its sum "<<endl;

  for(int i =0;i<20;i++){
        cin>>a[i];
    }


    for(int i =0;i<20;i++){
       ans = a[i]+ ans;
    }
    cout<<ans;
}
