#include <iostream>
#include <algorithm>
using namespace std;
int num(char c)
{
    if (c == 'I')
    {
        return 1;
    }

    else if (c == 'V')
    {
        return 5;
    }
    else if (c == 'X')
    {
        return 10;
    }
    else if (c == 'L')
    {
        return 50;
    }
    else if (c == 'C')
    {
        return 100;
    }
    else if (c == 'D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}
int main()
{
    // num is a function which convert string into number and logic play a crucial role to take it as + or -ve.
    string s = "XLIII";
    int sum = 0, index = 0;

// in this loop we only consider upto the second last in the string.
    while (index < s.size() - 1)
    {
        if (num(s[index]) < num(s[index + 1]))

           { sum -= num(s[index]);
           index++;
           }
        else
        {
            sum += num(s[index]);
            index++;
        }
    }
    // to add last value in the list we use the code once again outside the while loop
    sum += num(s[s.size() - 1]);
    // it is the number.
    cout << sum << endl;
}