//Day_7_Q3.cpp
//  Pattern printing
#include<iostream>
using namespace std;
int main(){
    int row, col;

    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            cout<<row<<" ";

        }
        cout<<endl;
    }
}