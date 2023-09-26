//Day_7_Q4.cpp
//  Pattern printing with variable
#include<iostream>
using namespace std;
int main(){
    int row, col;

    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            int k = row-(col-1);
            cout<<k<<" ";

        }
        cout<<endl;
    }
}