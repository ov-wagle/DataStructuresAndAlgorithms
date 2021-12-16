#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> testVector = { 2, 6, 0, 0, 3, 12, -1, 6};

    sort(testVector.begin(), testVector.end());

    bool present = binary_search(testVector.begin(), testVector.end(), 87);

    cout << present << endl;

    vector<int>::iterator it = lower_bound(testVector.begin(), testVector.end(), 0);
    vector<int>::iterator it2 = upper_bound(testVector.begin(), testVector.end(), 0);

    cout << *it << " " << *it2 << endl;
    //cout << it << " " << it2 << endl;

    for (int i: testVector) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}