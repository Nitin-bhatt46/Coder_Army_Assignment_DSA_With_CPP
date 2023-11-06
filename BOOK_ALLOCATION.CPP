#include<iostream>
using namespace std;
int main(){

    int arr[6]={3,2,2,4,1,4};
    int start =0,end=0,ans,mid,m=3;// m is the number of student
    for(int i=0;i<6;i++){
start =max(start,arr[i]); //4
end +=arr[i];//13
    }
    while(start<=end){
        mid = start +(end-start)/2;// 8
        int page =0,count =1;
        for(int i=0;i<6;i++){
            page +=arr[i];//
            if(page>mid){
                count++;
                page=arr[i];
            }
        }
        if(count<=m){
ans = mid;
end =mid-1;
        }
        else{
            start = mid+1;
        }
    }

    cout<<ans;
}