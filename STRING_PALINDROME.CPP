#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>lower(26,0);
    vector<int>upper(26,0);
int count1 =0;

string palin="aAbBcbAdaa";
bool odd=0;


// counting the alphabets

for(int i =0;i<palin.size();i++){
if(palin[i]>='a'){
    lower[palin[i]-'a']++;
}
else{
upper[palin[i]-'A']++;
}

}



// counting the number in lower vector it is odd or even .

for(int i =0;i<26;i++){
if(lower[i]%2==0){
   count1+=lower[i];
}
else{
 count1+=lower[i]-1;
 odd=1;
}

}
 

// counting the number in upper vector it is odd or even .

for(int i =0;i<26;i++){
if(upper[i]%2==0){
   count1+=upper[i];
}
else{
 count1+=upper[i]-1;
 odd=1;
}

}

cout<<"longest length of the palindrom is  = "<<count1+odd;

}