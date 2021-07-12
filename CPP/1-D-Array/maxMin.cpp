#include <iostream>

using namespace std;

int main() {
	int array[5] = { 0 };
	int i, small = -1, large = -1;

	cout << "Enter 5 integers in the array : \n";
	
	for (i = 0; i < 5; i++) {
		cin >> array[i];
	}

	small = array[0];

	for (i = 1; i < 5; i++) {
		if (array[i] > large) {
			large = array[i];
		}

		if (array[i] < small) {
			small = array[i];
		}
	}

	cout << "Smallest Number : " << small << "\n";
	cout << "Largest Number : " << large << "\n";

	return 0;
}