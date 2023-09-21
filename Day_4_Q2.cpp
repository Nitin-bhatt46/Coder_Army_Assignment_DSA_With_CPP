#include <iostream>
using namespace std;
int main()
{

    int marks;
    cout << "enter your marks out of 100" << endl;
    cin >> marks;
    if (marks >= 33)
    {
        cout << "the student is pass";
    }
    else
    {
        cout << "the student is fail." << endl;
    }
}
