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

	for (i = 0; i < numOfElements; i++) {
		storage = INT_MAX;
		for (j = i; j < numOfElements; j++) {
			if (array[j] < storage) {
				storage = array[j];
				index = j;
			}
		}

		swap(array[i], array[index]);
	}

	for (i = 0; i < numOfElements; i++) {
		cout << array[i] << "\t";
	}

	cout << "\n";
	return 0;
}