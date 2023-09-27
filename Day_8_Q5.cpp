#include<iostream>
using namespace std;
int main(){
    int row,col;
    char c;

    for(row=1;row<=7;row++){
        for(col=1;col<=7-row;col++){
            cout<<" ";
        }
        for(c='E';c>'E'-(row-2);c--){
            cout<<c;
        }
        cout<<endl;
    }
}