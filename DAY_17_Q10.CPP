// FIND THE SAMLLEST NUMBER IN THE ARRAY
#include <iostream>
using namespace std;
int main()
{
  int a[5]={1,2,3,4,5};
 int ans =INT_MAX;


    for (int i = 0; i <6; i++)
    {
        if(a[i]<ans)
        ans=a[i];
    }
    cout<<ans;
    return 0;
 
}