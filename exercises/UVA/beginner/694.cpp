#include <iostream>
using namespace std;

int collatz(long number, int limit) {
	int steps = 0;
	while (number <= limit) {
		steps++;
		if (number == 1)
			break;
		if (number & 1) {
			number = number * 3 + 1;
		} else {
			number = number >> 1;
		}
	}
	return steps;
}

int main() {

	long number, limit;
	cin >> number >> limit;
	for (int cases = 1; number > 0; cases++) {

		int steps = collatz(number, limit);

		cout << "Case " << cases << ": A = " << number << ", limit = " << limit
				<< ", number of terms = " << steps << endl;

		cin >> number >> limit;
	}

	return 0;
}
