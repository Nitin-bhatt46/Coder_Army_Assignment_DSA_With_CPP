//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void lpsfind(vector<int> &lps, string s)
{

    int suffix = 1, prefix = 0;

    while (suffix < s.size())
    {
        if (s[prefix] == s[suffix])
        {
            lps[suffix] += prefix + 1;
            prefix++;
            suffix++;
        }
        else
        {
            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            {

                prefix = lps[prefix - 1];
            }
        }
    }
}
int main()
{
    string needle="aaab";
    string hystack="aaaaab";
    vector<int> lps(needle.size(), 0);
    lpsfind(lps, needle);
    int first = 0, second = 0;
    while (second < needle.size() && first < hystack.size())
    {

        if (needle[second] == hystack[first])
        {
            second++;
            first++;
        }
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[second - 1];
            }
        }
        if (second == needle.size())
        {
            cout << first - second;
            
        }
        else
        {
            cout << "-1";
        }
    }
}