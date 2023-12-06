// saving long into string we can save lot of space which cannot satisfy the limit of int, long etc.
// addition of string and get the value '11' + '22' = 33 but in normal we get 1122 it is a string.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string num1 = "99845";
    string num2 = "938";

    // lets assume num1>num2
    int index1 = num1.size() - 1; // 4
    int index2 = num2.size() - 1; // 2
    string ans;
    int carry = 0;
    int sum = 0;
    while (index2 >= 0)
    {

        sum = (num1[index1]) - '0' + (num2[index2] - '0') + carry; // 5 + 8
        carry = sum / 10;                                          // 13 = 1
        char c = '0' + sum % 10;                                   // 3
        ans += c;                                                  // 3
        index2--, index1--; // 1,3 -->  0,2  --> -1,1
    }


    while (index1 >= 0)             // 1    --->   0
    {
        sum = num1[index1] - '0' + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;                          // 0  -->  -1
    }
    if(carry){
        ans+='1';
    }

   for(int i=ans.size()-1;i>=0;i--){
    cout<<ans[i];
   }
}