// find trailing zero in a factorial.
// DAY_16_Q3.cpp
#include <iostream>

using namespace std;

int trail_zero(int a)
{int count=0;

while(a>=5){
    count+= a/5;
    a/=5;

}
return count;
   
    
  
}
int main()
{
    int a,fact;
    cout << "enter  = ";
    cin >> a;
    cout << trail_zero(a);
}