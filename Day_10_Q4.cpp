// Day_10_Q4

// 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c.
// Otherwise print NO.

#include<iostream>
using namespace std;
int main(){
    int a,b,c ;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is the greatest";
    }
    else if(b>a && b>c){
        cout<<"b is the greatest";
    }
    else {
        cout<<"c is the greatest";
    }

}