// find missing and repeating value inside the array.
#include <iostream>

using namespace std;
int main()

{
    int arr[7] = {4,3,2,1,2,7,6};
    int n = 7;

// substracting each value by one
    for(int i=0;i<n;i++){
      
        arr[i]-=1;
    }


    // finding the value and add n with the value of same index value.

    for(int i=0;i<n;i++){
    arr[arr[i]%n]+=n;
    }

// missing 
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
            cout<<"missing number = "<<i+1<<endl;
        }
    }
    // repeating 
     for(int i=0;i<n;i++){
        if(arr[i]%n==2){
            cout<<"repeating value = "<<i+1;
        }
    }
}