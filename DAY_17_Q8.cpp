//DAY_17_Q8.cpp
//3: Find the index of a specific element in an array, 
//if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
#include<iostream>
using namespace std;
int main(){
    int a[5];
    int ind;
   
    cout<<"enter the 5 element  "<<endl;

  for(int i =0;i<5;i++){
        cin>>a[i];
    }

cout<<"enter the number to get the indexing"<<endl;
cin>>ind;
    for(int i =0;i<5;i++){
        if(a[i]==ind){
            cout<<"index number is"<<i;
            return 0;
        }
  
    }
    cout<<"-1";
  

}
