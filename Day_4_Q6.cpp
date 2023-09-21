// find a the number is positive , negative or neutral.
#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"enter the number with any sign"<<endl;
   cin>> num;

if ( num >0){
    cout<<"the number is positive"<<endl;

}
else if (num==0){
    cout<<"the number is neutral"<<endl;
}
else{
    cout<<"the number is negative"<<endl;
}
}