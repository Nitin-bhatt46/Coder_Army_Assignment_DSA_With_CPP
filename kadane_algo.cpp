#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{ int maxi =INT_MIN;
    int arr[]={3,4,-5,8,-12,7,6,2};
int n = sizeof(arr)/sizeof(arr[0]);
 int prefix =0;
 for(int i=0;i<n;i++){
    prefix +=arr[i];
    maxi = max(maxi,prefix);
 if (prefix <0){
prefix=0;
 }

 }
cout<< maxi;

    return 0;
}