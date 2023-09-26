//Day_7_Q4.cpp
//  Pattern printing
#include<iostream>
using namespace std;
int main(){
    int row, col;

    for(row=1;row<=6;row++){
        for(col=1;col<=row;col++){
      int n = col+9;
            cout<<n<<" ";

        }
        cout<<endl;
    }
}