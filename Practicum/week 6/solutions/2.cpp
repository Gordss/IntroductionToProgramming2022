#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100];
	if (n > 100) {
		cout << "Not enough memory allocated!";
	} else {
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			int sum = 0;
			int numberOfDigs = 0;
			int copyOfArri = arr[i];
			if (copyOfArri == 0) {
				cout << arr[i] << 1;
				continue;
			}
			while (copyOfArri > 0) {
				sum += copyOfArri % 10;
				copyOfArri /= 10;
				numberOfDigs++;
			}
			if (sum % 3 == 0) {
				cout << arr[i] << " " << numberOfDigs;
			}
		}
	}
	return 0;
}