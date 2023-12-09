//  smallest string without repeating character.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s = "AABBBCBBAC";
    vector<int> count(256, 0);
    int len = s.size();
    int diff = 0;
    int first = 0, second = 0;

    // unique character
    while (first < s.size())
    {
        if (count[s[first]] == 0)
        {
            diff++;
        }

        count[s[first]]++;
        first++;
    }

    // creating whole vector to reset

    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }
    first = 0;

    while (second < s.size())
    {
        // diff exist karta hai
        while (diff && second < s.size())
        {
            if (count[s[second]] == 0)
                diff--;


            count[s[second]]++;
            second++;
        }
        len = min(len, second - first);
        // diff ki value 1 na ban jaye.

        while (diff != 1)
        {
            len = min(len, second - first);
            count[s[first]]--;
            if (count[s[first]] == 0)
                diff++;
            
                first++;
            
        }
    }
    cout << len;
}