//Day_7_Q4.cpp
//  Pattern printing
#include<iostream>
using namespace std;
int main(){
    int row, col;

    for(row=1;row<=5;row++){
        for(col=5;col>=row;col--){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
}