#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int numOfElements, i, array[100], target, left = 0, right, result;

	cout << "Enter number of elements : ";
	cin >> numOfElements;

	right = numOfElements - 1;

	for (i = 0; i < numOfElements; i++) {
		cin >> array[i];
	}

	cout << "Enter target Sum : ";
	cin >> target;

	// This algorithm is only applicable if the array is sorted.
	// In this array, we use two pointer approach where we start with 0 and N - 1 index.
	// If the sum is greater than target, make right--
	// If sum is less than target, make left++
	// If sum matches the target, we do left++ and right--

	while (left < right) {
		result = array[left] + array[right];

		if (result < target) {
			left++;
		} else if (result > target) {
			right--;
		} else {
			cout << "Pair of elements result into target : " << target << " are : " << array[left] << ", " << array[right] << "\n";
			left++;
			right--;
		}
	}

	return 0;
}