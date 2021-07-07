#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char const *argv[]) {
	int numOfElements, array[100], i, j, k, addition = 0, maxSum = INT_MIN;
	int startIndex, endIndex;

	cout << "Enter number of elements : ";
	cin >> numOfElements;

	for (i = 0; i < numOfElements; i++) {
		cin >> array[i];
	}

	for (i = 0; i < numOfElements; i++) {
		for (j = i; j < numOfElements; j++) {
			for (k = i; k <= j; k++) {
				addition += array[k];
			}

			if (addition > maxSum) {
				maxSum = addition;
				startIndex = i;
				endIndex = j;
			}

			addition = 0;
		}
	}

	cout << "Max Sum subarray : \n";

	for (i = startIndex; i <= endIndex; i++) {
		cout << array[i] << "\t";
	}

	cout << "\n";

	return 0;
}
