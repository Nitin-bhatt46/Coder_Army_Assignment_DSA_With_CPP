#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
int n=5;
cout<<"first sub array"<<endl;
 for ( int i =0;i<n;i++){
        
  
            cout<<arr[i];
       
        cout<<" "<<endl;
 }

cout<<"second sub array"<<endl;
    for ( int i =0;i<n-1;i++){
        
        for(int j =i ;j<i+2;j++){
            cout<<arr[j];
        }
        cout<<" "<<endl;

    }
   
 cout<<"third sub array"<<endl;  
    for ( int i =0;i<n-2;i++){
        
        for(int j =i ;j<i+3;j++){
            cout<<arr[j];
        }
        cout<<" "<<endl;

    }
    cout<<endl;
 cout<<"fourth sub array"<<endl;  
       for ( int i =0;i<n-3;i++){
        
        for(int j =i ;j<i+4;j++){
            cout<<arr[j];
        }
        cout<<" "<<endl;

    }
    cout<<"fifth sub array"<<endl; 
       for ( int i =0;i<n-4;i++){
        
        for(int j =i ;j<i+5;j++){
            cout<<arr[j];
        }
        cout<<" "<<endl;

    }
}