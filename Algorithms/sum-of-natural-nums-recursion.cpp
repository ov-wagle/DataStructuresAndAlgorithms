#include <iostream>

using namespace std;

int sumOfNaturalNum(int number) {
	if (number == 0) {
		return 0;
	}

	return number + sumOfNaturalNum(number - 1);
}

int main(int argc, char const *argv[]) {
	int number, result;

	cout << "Enter the number of natural number : ";
	cin >> number;

	result = sumOfNaturalNum(number);
	cout << result << endl;

	return 0;
}