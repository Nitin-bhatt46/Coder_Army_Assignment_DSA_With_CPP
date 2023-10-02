// 5: What will be the result below according to the precedence table.

//     2*3-48==5/4*6
//    6<<2-4*8/2
//    5>4<3/2-8%4+5
//    14-8+92>>2+70
#include <iostream>
using namespace std;
int main()
{
    long int a, b, c, d;
    a = 2 * 3 - 48 == 5 / 4 * 6;

    b = 6 << 2 - 4 * 8 / 2;
    c = 5 > 4 < 3 / 2 - 8 % 4 + 5;

    d = 14 - 8 + 92 >> 2 + 70;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}