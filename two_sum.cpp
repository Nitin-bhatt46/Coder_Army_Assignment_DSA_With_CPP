// find the target with the two value of the array with additon;
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1,2,4,6,8,25}; // end =4,start 0
int result = 10;

    int start = 0, end = 6 - 1;
    while (start < end)
    {
        if ( arr[start]+arr[end]> result){
            end = end -1;
        }
        else if(arr[start]+arr[end]< result){
            start = start +1;
        }
        else{
            cout<<" got it"<< endl;
            cout<< arr[start]<< " + " <<arr[end]<<" = "<<arr[start]+arr[end];
            break;
        }
        
    }
   
}