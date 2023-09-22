// Print 1 to 100 with 3 num gap between each print like [1,4,7.....]
#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"printing 1 to 100 with 3 jump/skip"<<endl;

    for(a=1;a<=100;a=a+3){
        cout<<a<<endl;
    }
    return 0;
}