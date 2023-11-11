#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
int o=1;
cout<<"first sub array"<<endl;
 for ( int i =0;i<n;i++){
        
  
            cout<<arr[i];
       
        cout<<" "<<endl;
 }
 int d=(n*3)-n;
 while(d>0){


    for ( int i =0;i<n-o;i++){
        
        for(int j =i ;j<i+o+1;j++){
            cout<<arr[j];
        }
        cout<<" "<<endl;
        

    }
    o+=1;
    d-=1;
 }
}
   
  