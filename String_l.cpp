//  longest string without repeating character.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s="ab";
    vector<bool> count(256, 0);
    int len = 0;
    int first = 0, second = 0;
    while (second < s.size())
    {
        // deleting repeating  value

        while (count[s[second]])
        {
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;
        len = max(len, second - first + 1);
        second++;
    }
    cout << len;
}