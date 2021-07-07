#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int i, numOfElements, maxSum = 0, currSum = 0, array[100];

	cout << "Enter number of elements : ";
	cin >> numOfElements;

	for (i = 0; i < numOfElements; i++) {
		cin >> array[i];
	}

	// Kadane's Algorithm states that we can find the maximum sum of a subarray in O(n) time
	// If current sum with the current index is coming as -ve, keep current Sum as 0
	// If current sum with the current index is coming as +ve, add array[i] to currSum
	// If currentSum > maxSum, replace maxSum with currentSum
	for (i = 0; i < numOfElements; i++) {
		if (array[i] + currSum < 0) {
			currSum = 0;
		} else {
			currSum += array[i];

			maxSum = max(maxSum, currSum);
		}
	}

	cout << "Maximum sum of the subArray : " << maxSum << "\n";

	return 0;
}
