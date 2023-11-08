// max min etc
#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for max_element, min_element, and count functions
using namespace std;

int main() {
    int i;
    vector<int> v;

    // inserting the values
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(54);

    cout << "Before sorting the values: ";
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // max
    auto maximum = max_element(v.begin(), v.end());
    cout << "Maximum value: " << *maximum << endl;

    // min
    auto minimum = min_element(v.begin(), v.end());
    cout << "Minimum value: " << *minimum << endl;

    // count
    int countValue = 54;
    int count = count(v.begin(), v.end(), countValue);
    cout << "Count of " << countValue << ": " << count << endl;

    return 0;
}


