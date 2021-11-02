#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int numberOfDigits = 0;
	int m = n;
	while (m > 0) {
		numberOfDigits++;
		m = m / 10;
	}
	int sum = 0;
	int l = n;
	for (int i = 0; i < numberOfDigits; i++) {
		int currentDigit = l % 10;
		sum += pow(currentDigit, numberOfDigits);
		l = l / 10;
	}
	cout << n << sum;
	cout << (n == sum);
	return 0;
}