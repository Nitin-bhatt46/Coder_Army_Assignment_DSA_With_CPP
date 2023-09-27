#include<iostream>
using namespace std;
int main(){
    int row,col,c;

    for(row=1;row<=5;row++){

        for(col=1;col<=5-row;col++){
            cout<<" ";
        }
        for(c=row;c>=1;c--){
            cout<<c;
        }
        cout<<endl;
    }
}