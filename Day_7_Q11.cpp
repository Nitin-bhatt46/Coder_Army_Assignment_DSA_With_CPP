//Day_7_Q11.cpp
//  Pattern printing
#include<iostream>
using namespace std;
int main(){
    int row, col;

    for(row=1;row<=5;row++){
        for(col=1;col<=5-(row-1);col++){
            cout<<col<<" ";

        }
        cout<<endl;
    }
}