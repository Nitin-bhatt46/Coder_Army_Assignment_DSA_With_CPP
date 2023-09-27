#include<iostream>
using namespace std;
int main(){
    int row,col;

    for(row=1;row<=7;row++){
        for(col=1;col<=7-row;col++){
            cout<<" ";
        }
        for(col=5;col>5-(row-2);col--){
            cout<<col;
        }
        cout<<endl;
    }
}