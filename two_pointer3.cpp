// find the target with the two value of the array with substract
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {2,3,5,10,50,80}; // end =4,start 0
int result = 45;

    int start = 0, end = 1;
    while (end < 6)
    {
        if ( arr[end]-arr[start]> result){
            start = start +1;
        }
        else if(arr[end]-arr[start]< result){
            end = end +1;
        }
        else{
            cout<<" got it"<< endl;
            cout<< arr[end]<< " - " <<arr[start]<<" = "<<arr[end]-arr[start];
            break;
        }
        
    }
   
}