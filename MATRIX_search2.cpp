// binary search
#include<iostream>

using namespace std;
int main(){

int arr[4][5]={2,6,10,14,18,20,24,27,29,38,47,52,78,93,109,108,111,200,218,320};
int row =4;
int col =5;
int x;
int start,end,mid;
cout<<"enter the number you want to find."<<endl;
cin>>x;
for(int i=0;i<row;i++){
if(arr[i][0]<=x && x<=arr[i][col-1] ){
    start=0,end=col-1;
    while(start<=end){
    
        mid=(start+end)/2;
        if(arr[i][mid]==x){
            cout<<"got it"<<" & your number is ="<<arr[i][mid];
            return 0;
        }
        else if(arr[i][mid]>x){
             end=mid-1;
            
        }
        else{
           start=mid+1;
        }
    }
}
}
cout<<"unable to find guru";
}