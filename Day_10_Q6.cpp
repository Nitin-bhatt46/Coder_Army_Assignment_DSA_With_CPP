// find the vowels

#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the temperature of water in swimming pool"<<endl;
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'){
        cout<<"It is vowels";

    }
    else{
        cout<<"It is a consonant";
    }
}