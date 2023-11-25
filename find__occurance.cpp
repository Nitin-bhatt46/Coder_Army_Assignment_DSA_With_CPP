// find missing and repeating value inside the array.
#include <iostream>

using namespace std;
int main()

{
    int arr[8] = {3,2,5,3,1,2,3,7};
    int n = 8;

// substracting each value by one
    for(int i=0;i<n;i++){
      
        arr[i]-=1;
    }
     // finding the value and add n with the value of same index value.

  for(int i=0;i<n;i++){
    arr[arr[i]%n]+=n;
    }




    // occurance
     for(int i=0;i<n;i++){
        
            cout<<"occurance  "<<i+1<<" = "<<arr[i]/n<<" times"<<endl;
        }
    
}