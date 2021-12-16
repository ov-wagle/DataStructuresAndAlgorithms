#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int arr1[] = { 1, 0, 3, 0, 0, 0, 12, 0 };
	int j = 0;

	for (int i = 0; i < 8; i++) {

		if (arr1[i] != 0) {
			swap(arr1[i], arr1[j++]);
		}
	}

	for (int i = 0; i < 8; i++) {
		cout << arr1[i] << endl;	
	}

	return 0;
}