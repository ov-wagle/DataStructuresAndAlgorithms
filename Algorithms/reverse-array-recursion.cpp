#include <iostream>
#include <vector>

using namespace std;

static vector<int>output;

static void reverse_array(vector<int>input, int index) {
	if (index == input.size() - 1) {
		output.push_back(input[input.size() - 1]);
		return;
	}

	reverse_array(input, index + 1);
	output.push_back(input[index]);
	return;
}

static void reverse_array(vector<int> &input, int left, int right) {
	if (left >= right) {
		return;
	}

	swap(input[left], input[right]);
	reverse_array(input, ++left, --right);
	return;
}


int main(int argc, char const *argv[]) {
	vector<int>input = {1, 2, 3, 8, 6, 7};

	reverse_array(input, 0);

	for (int i = 0; i < input.size(); i++) {
		cout << output[i] << " ";
	}

	cout << endl;

	reverse_array(input, 0, input.size() - 1);

	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << " ";
	}

	cout << endl;

	return 0;
}