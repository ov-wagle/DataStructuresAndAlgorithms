#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int numOfElements, array[100], i, j, k;

	cout << "Enter number of elements to enter : ";
	cin >> numOfElements;

	for (i = 0; i < numOfElements; i++) {
		cin >> array[i];
	}

	for (i = 0; i < numOfElements; i++) {
		for (j = i; j < numOfElements; j++) {
			for (k = i; k <= j; k++) {
				cout << array[k];
			}
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}
