// LONGEST PREFIX SUFFIX 
// TIME COMPLEXCITY N^2;
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s ="AAAAAD";
int suffix =1 ,prefix =0; 

while(suffix<s.size()){
    if(s[prefix]==s[suffix]){
       
        prefix++;
        suffix++;
    }
    else{
        prefix=0;
        suffix++;
    }

}
cout<<prefix;
}