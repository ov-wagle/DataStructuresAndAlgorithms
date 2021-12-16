#include <iostream>
#include <cmath>

using namespace std;

#define AVERAGE_CEIL(x, y) 		ceil(float(x + y) / 3)
#define AVERAGE_FLOOR(x, y) 	floor(float(x + y) / 3)

int main(int argc, char const *argv[]) {
	int array[2] = {3, 10};
	int search, sizeOfArray, count = 0, startIndex = 0, endIndex, mean;

	cout << "Enter the element to search in the array : ";
	cin >> search;

	sizeOfArray = sizeof(array) / sizeof(array[0]);

	endIndex = sizeOfArray;

	while (count != sizeOfArray) {
		if (sizeOfArray <= 2) {
			mean = AVERAGE_FLOOR(startIndex, endIndex);
		} else {
			mean = AVERAGE_CEIL(startIndex, endIndex);
		}
		if (search == array[mean]) {
			break;
		}

		if (array[mean] < search) {
			startIndex = mean;
		}

		if (array[mean] > search) {
			endIndex = mean;
		}

		cout << startIndex << " " << endIndex << endl;

		count++;
	}

	if (count == sizeOfArray) {
		cout << "Number " << search << " not found\n";
	} else {
		cout << "Number " << search << " found at index " << mean << "\n";
	}

	return 0;
}