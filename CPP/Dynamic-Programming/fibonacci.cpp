#include <iostream>

using namespace std;

typedef enum {
	METHOD_RECURSION = 1,
	METHOD_DYNAMIC_PROG
}	fibonacci_methods_t;

int dp[100] = { 0 };

// This problem becomes much faster when done using dynamic programming
// When we draw a tree of recursion, we see that many times, the sum is already calculated for one node.
// In recursion, we end up calculating for different node with same node value again. This way we are wasting the
// computation time. Instead, in dp, we can store those calculated numbers in memory and instead of calculating again,
// we can refer to the index and retrieve the numbers at a faster pace
int fibonacci_dp(int number) {
	int sum;

	if (0 != dp[number - 1]) {
		return dp[number - 1];
	}

	if (number <= 2) {
		dp[number - 1] = 1;
		return 1;
	}

	sum = fibonacci_dp(number - 1) + fibonacci_dp(number - 2);

	dp[number - 1] = sum;

	return sum;
}

int fibonacci_recursion(int number) {
	if (number <= 2) {
		return 1;
	}

	return fibonacci_recursion(number - 1) + fibonacci_recursion(number - 2);
}

int fibonacci(int number, int method) {
	switch (method) {
		case METHOD_RECURSION:
			return fibonacci_recursion(number);

		case METHOD_DYNAMIC_PROG:
			return fibonacci_dp(number);
	}

	return 0;
}

int main(int argc, char const *argv[]) {
	int number, result, method;

	cout << "Enter the term to find in fibonacci : ";
	cin >> number;

	cout << "Enter method to find the term : 1. Recursion, 2. Dynamic Programming : ";
	cin >> method;

	result = fibonacci(number, method);

	cout << number << " term in the fibonacci series : " << result << "\n";
	return 0;
}