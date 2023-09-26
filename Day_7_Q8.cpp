//Day_7_Q4.cpp
//  Pattern printing
#include<iostream>
using namespace std;
int main(){
    int row, col;
    char p,a;

    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            p= 'A'+ (col-1);

            cout<<p<<" ";

        }
        cout<<endl;
    }
}