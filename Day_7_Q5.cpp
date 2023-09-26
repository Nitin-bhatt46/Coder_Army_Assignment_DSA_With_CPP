//Day_7_Q4.cpp
//  Pattern printing
#include<iostream>
using namespace std;
int main(){
    int row, col;
    char a,k;

    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
           k= 'a'+(row-1);
            cout<<k<<" ";

        }
        cout<<endl;
    }
}