#include<iostream>
using namespace std;
int main(){
    string f;
  cout<<"enter your name in one word"<<endl;
  cin>>f;
  int start, end ;
  start=0,end =f.size()-1;
  while(start<end){
    swap(f[start],f[end]);
start++;
end--;
  }

cout<<f;
    
}