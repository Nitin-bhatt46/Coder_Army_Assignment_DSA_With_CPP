//Day_7_Q7.cpp
//  Pattern printing
#include<iostream>
using namespace std;
int main(){
    int row, col;

    for(row=1;row<=7;row++){
        for(col=1;col<=row;col++){
            if(col>6) continue;
            cout<<col<<" ";

        }
        cout<<endl;
    }
}