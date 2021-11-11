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
			bool isPrime = true;
			for (int j = 1; j < arr[i]; j++) {
				if (arr[i] % j == 0 && j != 1) {
					isPrime = false;
					break;
				}
			}
			if (isPrime && arr[i] != 1) {
				cout << arr[i];
			}
		}
	}
	return 0;
}