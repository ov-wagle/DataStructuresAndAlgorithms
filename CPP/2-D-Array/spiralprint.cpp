#include <iostream>

using namespace std;
	
void spiral_print(int a[][100], int row, int col) {
	int startRow = 0, startCol = 0, endRow = row - 1, endCol = col - 1, i;

	while (startRow <= endRow and startCol <= endCol) {

		for (i = startCol; i <= endCol; i++) {
			cout << a[startRow][i] << " ";
		}
		startRow++;

		for (i = startRow; i <= endRow; i++) {
			cout << a[i][endCol] << " ";
		}

		endCol--;

		if (endRow > startRow) {
			for (i = endCol; i >= startCol; i--) {
				cout << a[endRow][i] << " ";
			}
			endRow--;
		}

		if (endCol > startCol) {
			for (i = endRow; i >= startRow; i--) {
				cout << a[i][startCol] << " ";
			}
			startCol++;
		}
	}
}


int main(int argc, char const *argv[]) {
	int array[100][100] = { 0 };
	int value = 1, i, j, col = 0, row = 0;

	cout << "Insert row and column : ";
	cin >> row >> col;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			array[i][j] = value;
			value++;
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}

	spiral_print(array, row, col);

	cout << "\n";
	return 0;
}