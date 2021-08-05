#include <iostream>

using namespace std;

int route(char park[][10], int row, int col, int threshold, int iniEnergy, int *energyLeft) {
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (0 != j) {
				iniEnergy--;
			}

			if ('.' == park[i][j]) {
				iniEnergy -= 2;
			} else if ('*' == park[i][j]) {
				iniEnergy += 5;
			} else if ('#' == park[i][j]) {
				break;
			}
		}

		if (iniEnergy < threshold) {
			*energyLeft = iniEnergy;
			return -1;
		}
	}

	*energyLeft = iniEnergy;
	return 0;
}

int main(int argc, char const *argv[]) {
	int row, col, threshold, iniEnergy, i, j, energyLeft;
	char park[10][10] = { 0 };

	cout << "Enter the rows and columns : ";
	cin >> row >> col;

	cout << "Enter the threshold energy to get out of the park : ";
	cin >> threshold;

	cout << "Enter initial energy of the person : ";
	cin >> iniEnergy;

	cout << "Enter the path : \n";

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cin >> park[i][j];
		}
	}

	if (-1 == route(park, row, col, threshold, iniEnergy, &energyLeft)) {
		cout << "No\n";
	} else {
		cout << "Yes\n" << energyLeft << "\n";
	}



	return 0;
}