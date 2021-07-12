#include <iostream>
#include <cmath>

using namespace std;

#define AVERAGE(x, y) 		(x + y) / 2

int main(int argc, char const *argv[]) {
	int array[10] = {3, 10, 24, 31, 43, 59, 68, 76, 81, 99};
	int search, sizeOfArray, count = 0, startIndex = 0, endIndex, mean;

	cout << "Enter the element to search in the array : ";
	cin >> search;

	sizeOfArray = sizeof(array) / sizeof(array[0]);

	endIndex = sizeOfArray;

	while (count != sizeOfArray) {
		mean = AVERAGE(startIndex, endIndex);

		if (search == array[mean]) {
			break;
		}

		if (array[mean] < search) {
			startIndex = mean;
		}

		if (array[mean] > search) {
			endIndex = mean;
		}

		count++;
	}

	if (count == sizeOfArray) {
		cout << "Number " << search << " not found\n";
	} else {
		cout << "Number " << search << " found at index " << mean << "\n";
	}

	return 0;
}