// DAY_15_Q1
//  FIND THE SUM OF TWO DIGIT WITH FUNCTION.
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int ans;
    ans = a + b;
    return ans;
}
int mul(int a, int b)
{
    int ans;
    ans = a * b;
    return ans;
}
int main()
{
    int a, b;
    cout << "enter the value of a and b =";
    cin >> a >> b;
    
    cout << sum(a, b)<<endl;
    cout<<mul(a,b);

}