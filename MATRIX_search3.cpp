// advanced methods called row major.
// row-index = index/col
// col-index =index%col

#include <iostream>

using namespace std;
int main()
{

    int arr[4][5] = {2, 6, 10, 14, 18, 20, 24, 27, 29, 38, 47, 52, 78, 93, 109, 108, 111, 200, 218, 320};
    int row = 4;
    int col = 5;
    int x;
    int start, end, mid;
    cout << "enter the number you want to find." << endl;
    cin >> x;

    start = 0, end = row * col;
    while (start <= end)
    {
        // mid value act as a index for the row major
        // as we know the formula for the
        // row= index / col
        // and
        // column = index % col
        mid = (start + end) / 2;
        if (arr[mid / col][mid % col] == x)
        {
            cout << "got it"
                 << " & your number is =" << arr[mid / col][mid % col];
            return 0;
        }
        else if (arr[mid / col][mid % col] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "unable to find guru";
}