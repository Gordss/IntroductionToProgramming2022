#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int number_in_binary = 0;
	int order = 1;
	while (n > 0) {
		number_in_binary += order * (n % 2);
		n = n / 2;
		order = order * 10;
	}
	cout << number_in_binary;
	return 0;
}