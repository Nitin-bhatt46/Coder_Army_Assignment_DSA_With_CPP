//Bishop Problem
#include<iostream>
using namespace std;

int bishop(int a,int b){
int count =0;
count+= min(8-a,8-b);
count+= min(8-a,b-1);
count+= min(a-1,b-1);
count+= min(a-1,8-b);
return count;
}
int main(){
    int a ,b;
    cout<<"enter the position of bishop";
    cin>>a>>b;
    cout<<bishop(a,b);
}