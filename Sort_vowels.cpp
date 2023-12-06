// sort vowels in a string .

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s = "rebAl";
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    // counting vowels and seperating vowels into smaller and larger.
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }

        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }

    // creating a string which can convert and store the ans in string format . because in both the  vector the value is in int format.
    string ans;

    // in this we are iterating the value in the vector and converting it into string , in this our string value directly convert into sorted manner.
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            ans += c;
            upper[i]--;
        }
    }

    // first we have done larger and then we are doing for the smaller letter.
    // so, that it can be sorted into corrected sequence.

    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            ans += c;
            lower[i]--;
        }
    }

// assigning both with a new int so that we can iterate to get the value.

int second=0;
int first = 0;

  while(second <ans.size()){
    if(s[first]=='#'){
        s[first]=ans[second];
        second++;
    }
    first++;
  }
  cout<<s;
}
