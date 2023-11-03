// FINDING THE PEAK VALUE
#include <iostream>
using namespace std;

void Binary_search( int arr[], int n)
{
    int mid, start, end;
    int c;
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = start + (end-start) / 2;

        if (arr[mid] > arr[mid-1]   &&  arr[mid] > arr[mid+1])
        {
           cout<<"greatest number inside peak finding array: "<< arr[mid];

            return ;
        }
        
        else if (arr[mid] > arr[mid-1])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    cout << "invalid choice";
}

int main()
{

    int arr[1000];
    int n, mid, start, end, key;
    cout << "enter the size of array:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  
    Binary_search(arr, n);
    
}