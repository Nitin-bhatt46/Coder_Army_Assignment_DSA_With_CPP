#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Initialize a vector of strings with size 10
    vector<string> ans(10, "");

    // Input string
    string s = "is2 sentence4 This1 a3";
    string temp;
    int count = 0, index = 0;

    // Loop through the characters of the input string
    while (index < s.size()) {
        if (s[index] == ' ') {
            // Extract the position value and update the corresponding index in the vector
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        } else {
            // Build the current word
            temp += s[index];
        }
        index++;
    }

    // Handle the last word
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    // Build the final reordered string
    for (int i = 1; i <= count; i++) {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();

    // Output the result
    cout << temp;

    return 0;
}
