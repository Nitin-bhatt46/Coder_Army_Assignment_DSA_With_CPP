#include<iostream>
using namespace std;
int main(){
    int row,col,c;
    char name;

    for(row=1;row<=5;row++){

        for(col=1;col<=5-row;col++){
            cout<<" ";
        }
        for(c=1;c<=row;c++){
            name = 'A'+(row-1);
            cout<<name;
        }
        cout<<endl;
    }
}