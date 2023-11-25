// find the number whose occurance is more than 2 times & least occurance.
#include <iostream>

using namespace std;
int main()

{
    int arr[11] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    int n = 11;
    int candidate, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count += 1;
            candidate = arr[i];
        }
        else
        {
            if (candidate == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }

    // verification if the number is really greater than N/2;

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        cout << "got it brother" << endl <<count<<" times";
    }
}