//Day_11_Q15.cpp
// 5: Print all the Capital  letters  using a while loop. It means A-Z 
#include <iostream>
using namespace std;
int main()
{
    char a = 'A';
    char alp='Z';
    cout << "capital alphabets  = ";
    
    while (a <= alp)
    {
      
        cout << a  <<" ";

        a++;
    }
}