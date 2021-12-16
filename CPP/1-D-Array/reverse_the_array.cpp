#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int>array;
	int end, start = 0;

	array.push_back(4);
	array.push_back(5);
	array.push_back(1);
	array.push_back(9);
	array.push_back(6);

	end = array.size() - 1;

	cout << "Enter the position from the point to reverse : \n";
	cin >> start;

	if (start > end) {
		return -1;
	}

	while (start <= end) {
		swap(array[start], array[end]);
		start++;
		end--;
	}

	for (int i = 0; i < array.size(); i++) {
		printf("%d\n", array[i]);
	}
	
	return 0;
}