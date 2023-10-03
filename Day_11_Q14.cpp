// 5: Print all the small letters  using a while loop. It means  a-z.
#include <iostream>
using namespace std;
int main()
{
    char a = 'a';
    char alp='z';
    cout << "small alphabets  = ";
    
    while (a <= alp)
    {
      
        cout << a  <<" ";

        a++;
    }
}