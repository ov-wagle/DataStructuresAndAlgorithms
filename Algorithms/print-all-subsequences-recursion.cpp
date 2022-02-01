#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>array) {
	cout << "[ ";
	for (int i = 0; i < array.size(); i++) {
		cout << array[i] << " ";
	}
	cout << "]\n";
	return;
}

void f(vector<int>&ds, vector<int>array, int index) {
	if (index == array.size()) {
		print(ds);
		return;
	}

	ds.push_back(array[index]);
	f(ds, array, index + 1);
	ds.pop_back();
	f(ds, array, index + 1);
	return;
}

int main(int argc, char const *argv[]) {
	vector<int>array = { };	
	vector<int>ds;

	f(ds, array, 0);

	return 0;
}

