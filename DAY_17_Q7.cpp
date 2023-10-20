// 2: Calculate the average of elements in an array of size 18.
// DAY_17_Q7.cpp
#include<iostream>
using namespace std;
int main(){
    int a[18];
   float ans=0;
    cout<<"enter the 18 element to get its sum "<<endl;

  for(int i =0;i<18;i++){
        cin>>a[i];
    }


    for(int i =0;i<18;i++){
       ans = a[i]+ ans;
    }
    cout<<ans/18;
}
