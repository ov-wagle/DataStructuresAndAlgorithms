#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int numOfElements, i, j, array[100] = { 0 }, index, storage;

	cout << "Enter number of array elements : \n";
	cin >> numOfElements;

	for (i = 0; i < numOfElements; i++) {
		cin >> array[i];
	}

	// Descending Order
	for (i = 0; i < numOfElements; i++) {
		for (j = 0; j < numOfElements - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}

	for (i = 0; i < numOfElements; i++) {
		cout << array[i] << "\t";
	}

	cout << "\n";

	// Ascending Order
	for (i = 0; i < numOfElements; i++) {
		for (j = 0; j < numOfElements - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}

	for (i = 0; i < numOfElements; i++) {
		cout << array[i] << "\t";
	}

	cout << "\n";
	
	return 0;
}