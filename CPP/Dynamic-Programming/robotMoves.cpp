#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> jumps;
    vector<int> obstacle;
		vector<float>energies, dp;
    vector<int>prev;
    int i, number, arrayLength, value;
		float floatValue, result;

    cout << "Enter the length of the robot path : ";
    cin >> arrayLength;

    cout << "Enter number of obstacles to put : ";
    cin >> number;

    if (number > arrayLength - 2) {
        cout << "First and last element can't have any obstacles\n";
    }

    for (i = 0; i < number; i++) {
        cin >> value;
				obstacle.push_back(value);
    }

    cout << "Enter number of jumps and energies to put : ";
    cin >> number;

    for (i = 0; i < number; i++) {
				cin >> value;
				jumps.push_back(value);
    }

    for (i = 0; i < number; i++) {
				cin >> floatValue;
				energies.push_back(floatValue);
    }

    for (int k = 0; k < arrayLength; k++) {
        dp.push_back(-1);
        prev.push_back(-1);
    }

    dp[0] = 0;

    for (int k = 0; k < obstacle.size(); k++) {
        dp[obstacle[k]] = -2;
    }

    for (int k = 1; k < arrayLength; k++) {
        if (dp[k - 1] != -2 and dp[k] != -2) {
            dp[k] = dp[k - 1] + 1;
            prev[k] = k - 1;
        } else {
            for (int j = 0; j < jumps.size(); j++) {
							if (dp[k] != -2 and k - jumps[j] >= 0 and dp[k - jumps[j]] != -2) {
								cout << k - jumps[j] << " " << dp[k - jumps[j]] << endl;

								result = dp[k - jumps[j]] + energies[j];
								if (dp[k] == -1 or result < dp[k]) {
									dp[k] = result;
									prev[k] = k - jumps[j];
								}
							}
						}
        }
    }

		cout << "Energy spent : " << dp[arrayLength - 1] << endl;
		return 0;
}