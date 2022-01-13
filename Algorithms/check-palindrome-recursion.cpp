#include <iostream>

using namespace std;

static void check_palindrome(string &str, int left, int right) {
	if (left >= right) {
		cout << "Palindrome\n";
		return;
	}

	if (str[left] != str[right]) {
		cout << "Not a Palindrome\n";
		return;
	}

	check_palindrome(str, ++left, --right);
	return;
}

int main(int argc, char const *argv[]) {
	string str = "nittin";

	check_palindrome(str, 0, str.size() - 1);

	return 0;
}