//  SMALLEST string without repeating character.
// this is easy way but the correct way it will work only for all the ascii value to give you smalles number 
// in complex scenrios it will fail . 
// use sliding window concept
// it will not work on online compiler test. because even if the answer is correct then also because they want only to use sliding window.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s = "aabcbcdbca";
    vector<int> count(256, 0);
    int len = 0;

    for (int i = 0; i < s.size(); i++)
    {

        count[s[i]] = 1;
    }

    for (int i = 0; i < count.size(); i++)
    {
        len += count[i];
    }
    cout << len;
}