#include <iostream>
#include <vector>

using namespace std;

int subsequence_equal_to_k(vector<int>array, int index, int sum, int k) {
	if (index == array.size()) {
		if (sum == k) {
			return 1;
		} else {
			return 0;
		}
	}
	
	sum += array[index];

	int take = subsequence_equal_to_k(array, index + 1, sum, k);

	sum -= array[index];

	int notTake = subsequence_equal_to_k(array, index + 1, sum, k);

	return take + notTake;
}


int main(int argc, char const *argv[])
{
	vector<int>array = {1, 2, 3, 1, 4};
	int k = 6;
	int sum = 0;
	
	cout << subsequence_equal_to_k(array, 0, sum, k) << endl;
	return 0;
}