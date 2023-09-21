// Enter the number and week day name 1= monday etc.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number between 1 to 7"<<endl;
    cin>>num;

    if(num==1){
        cout<<"MONDAY";
    }
    else if(num==2){
        cout<<"TUESDAY";
    }
    else if(num==3){
        cout<<"WEDNESDAY";
    }
    else if(num==4){
        cout<<"THURSDAY";
    }
    else if(num==5){
        cout<<"FRIDAY";
    }
    else if(num==6){
        cout<<"SATURDAY";
    }
    else if(num==7){
        cout<<"SUNDAY";
    }
else{
    cout<<"INVALID ENTRY"<<endl;
}
}