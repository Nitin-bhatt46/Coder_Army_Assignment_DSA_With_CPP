// 3: Given a number n, print all the numbers from 1 to n(inclusive) which
//  are not divisible by 3 and 5. (use Continue here).
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int num;
    cout << "enter the number  = ";
    cin >> num;
    while (a <= num)
    {
        if (a%3==0 ||a%5==0)
        {
            a++;
            continue;
            
        }

        cout << a << endl;

        a++;
    }
}