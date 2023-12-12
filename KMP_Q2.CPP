#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s = "ABCABDABCABDABDAB";
    vector<int> N(s.size(), 0);
    int suffix = 1, prefix = 0;

    while (suffix < s.size())
    {
        if (s[prefix] == s[suffix])
        {
            N[suffix] += prefix + 1;
            prefix++;
            suffix++;
        }
        else
        {
            if (prefix == 0)   //  
            {
                N[suffix] = 0; //  n[14]= 0
                suffix++;                  // suffix = 15           
            }
            else
            {

                prefix = N[prefix - 1];     // pr = 2  suff = 14 , pr = 0 suff 14
              
            }
        }
    }
   for(int i=0;i<N.size();i++){
    cout<<N[i];
   }
}