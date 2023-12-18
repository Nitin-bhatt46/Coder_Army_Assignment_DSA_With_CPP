#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    char arr[5]={"1234"};  // null factor play a major role in  this.

    for(int i=0;i<5;i++){
        cout<<*(arr+i);
    }

cout<<endl;

cout<<(void*)arr<<endl;
cout<<&arr<<endl;    
}