#include <iostream>
#include <vector>

using namespace std;

void subsequence_equal_to_k(vector<int>array, int index, int sum, vector<int> &ds, int k, vector<vector<int>> &subsequences) {
	if (index == array.size()) {
		if (sum == k) {
			subsequences.push_back(ds);
			return;
		} else {
			return;
		}
	}
	
	ds.push_back(array[index]);
	sum += array[index];

	subsequence_equal_to_k(array, index + 1, sum, ds, k, subsequences);

	/*if (subsequences.size() == 1) {
		return;
	}*/

	ds.pop_back();
	sum -= array[index];

	subsequence_equal_to_k(array, index + 1, sum, ds, k, subsequences);

	/*if (subsequences.size() == 1) {
		return;
	}*/

	return;
}


int main(int argc, char const *argv[])
{
	vector<int>array = {1, 2, 3, 1, 4};
	int k = 6;
	int sum = 0;
	vector<int>ds;
	vector<vector<int>>subsequences;

	subsequence_equal_to_k(array, 0, sum, ds, k, subsequences);

	for (int i = 0; i < subsequences.size(); i++) {
		cout << "[ ";
		for (int j = 0; j < subsequences[i].size(); j++) {
			cout << subsequences[i][j] << " ";
		}

		cout << "]\n";
	}
	
	return 0;
}