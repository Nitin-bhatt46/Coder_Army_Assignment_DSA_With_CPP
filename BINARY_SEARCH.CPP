// binary search in this array must be sorted otherwise it will not work.
#include <iostream>
using namespace std;

void Binary_search(int key, int arr[], int n)
{
    int mid, start, end;
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "got it";
            return;
        }
        else if (arr[mid] < key)
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

    cout << "enter the number you want to search :" << endl;
    cin >> key;
    Binary_search(key, arr, n);
}
