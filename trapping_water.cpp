// most optimise form of trapping water condition.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={4,2,0,5,2,6,2,3};
    int n = arr.size();
    int leftmax=0,rightmax=0,maxarr=arr[0],index=0,water;
    // max height building 
    for(int i=1;i<n;i++)
    {
        if(maxarr<arr[i])
        {
            maxarr = arr[i];
            index =i;
        }
 
    }
// left aprt 
for( int i=0;i<index;i++){
    if(leftmax>arr[i]){
        water+=leftmax-arr[i];
    }
    else
    leftmax = arr[i];
}

// right part
for( int i=n-1;i>index;i--){
    if(rightmax>arr[i]){
        water+=rightmax-arr[i];
    }
    else
    rightmax = arr[i];

}
cout<<water;
}