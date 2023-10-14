// find it is recatngle or not.
// DAY_16_Q4.cpp
#include <iostream>

using namespace std;

bool size(int a,int b,int c, int d)
{
if ( a==b&&c==d ||  a==c&&b==d|| a==d&&b==c){
    return 1;
}
else return 0;
    
  
}
int main()
{
    int a,b,c,d;
    cout << "enter the side length  = ";
    cin >> a>>b>>c>>d;
    cout << size(a,b,c,d);
}