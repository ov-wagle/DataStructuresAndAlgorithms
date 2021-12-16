#include <iostream>

using namespace std;


void merge(int arr1[], int sizeOf1, int arr2[], int sizeOf2, int arr3[]) {
	int i = 0, j = 0, k = 0;

	while (i < sizeOf1 and j < sizeOf2) {
		if (arr1[i] <= arr2[j]) {
			arr3[k++] = arr1[i++];
		} else {
			arr3[k++] = arr2[j++];
		}
	}

	while (i < sizeOf1) {
		arr3[k++] = arr1[i++];
	}

	while (j < sizeOf2) {
		arr3[k++] = arr2[j++];
	}

	return;
}

int main(int argc, char const *argv[])
{
	int arr1[] = { 2, 4, 6, 8, 10 };
	int arr2[] = { 1, 4, 5, 7, 9, 11, 13 };
	int arr3[12] = { 0 };

	merge(arr1, 5, arr2, 7, arr3);

	for (int i = 0; i < 12; i++) {
		cout << arr3[i] << endl;
	}

	return 0;
}