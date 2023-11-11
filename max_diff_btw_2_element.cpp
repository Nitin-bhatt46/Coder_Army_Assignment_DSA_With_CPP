#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{ int maxi =INT_MIN;
    int arr[]={1,12,2,8,3,2};
int n = sizeof(arr)/sizeof(arr[0]);
 int suffix = arr[n-1];

 for(int i=n-2;i>=0;i--){
if(suffix - arr[i]<0){
    suffix = arr[i];
    
}
else {
   int ans = suffix- arr[i];
   maxi=max(maxi,ans);

}

 }
cout<< maxi;

    return 0;
}