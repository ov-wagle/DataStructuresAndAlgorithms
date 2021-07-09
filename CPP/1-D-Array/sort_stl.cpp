#include <iostream>
#include <algorithm>

using namespace std;

// comparator function acts as a callback function to the sort() API
// We can use this comparator function to sort the elements in whatever order we want to
bool comparator(int currElement, int nextElement) {
	return currElement > nextElement;
}

int main(int argc, char const *argv[]) {
	int array[100] = { 0 }, numOfElements, i;

	cout << "Enter number of elements to enter : \n";
	cin >> numOfElements;

	if (numOfElements > 100) {
		cout << "100 is the limit\n";
		return -1;
	}

	for (i = 0; i < numOfElements; i++) {
		cin >> array[i];
	}

	// Sort the array in ascending order using STL function sort()
	sort(array, array + numOfElements);

	for (i = 0; i < numOfElements; i++) {
		cout << array[i] << "\t";
	}

	cout << "\n";

	// Sort the array in descending order using STL function sort()
	sort(array, array + numOfElements, comparator);

	for (i = 0; i < numOfElements; i++) {
		cout << array[i] << "\t";
	}

	cout << "\n";

	return 0;
}
