#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int array[5][5] = { 0 };
	int value = 1, i, j, col = 0, row = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			array[i][j] = value;
			value++;
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\n";

	for (col = 0; col < 5; col++) {
		if (0 == col % 2) {
			for (row = 0; row < 5; row++) {
				cout << array[row][col] << " ";
			}
		} else {
			for (row = 4; row >= 0; row--) {
				cout << array[row][col] << " ";
			}
		}
	}

	cout << "\n";

	return 0;
}