#include<iostream>
using namespace std;
int main(){
    int row,col;
    char name;

    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            name = 'A'+(col-1);
            cout<<name;
        }
        cout<<endl;
    }
}