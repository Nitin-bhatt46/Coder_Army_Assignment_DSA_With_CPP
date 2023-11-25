// find the number whose occurance is more than 2 times & least occurance.
#include <iostream>

using namespace std;
int main()

{
    int arr[11] = {3,3,2,3,1,3,2,2,1,3,3};
    int n = 11;
int least = INT_MAX;
// substracting each value by one
    for(int i=0;i<n;i++){
      
        arr[i]-=1;
    }
     // finding the value and add n with the value of same index value.

  for(int i=0;i<n;i++){
    arr[arr[i]%n]+=n;
    }




    // most occurance
     for(int i=0;i<n;i++){
       if( arr[i]/n > n/2)
            cout<<"most occurance  "<<i+1<<" = "<<arr[i]/n<<" times"<<endl;
        }


}