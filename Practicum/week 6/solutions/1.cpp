#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	double arr[100];
	if (n > 100) {
		cout << "Not enough memory allocated!";
	} else {
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int minNumber = INT16_MAX;
		int maxNumber = INT16_MIN;
		for (int i = 0; i < n; i++) {
			if (arr[i] > maxNumber) {
				maxNumber = arr[i];
			}
			if (arr[i] < minNumber) {
				minNumber = arr[i];
			}
		}
		cout << "min" << minNumber;
		cout << "max" << maxNumber;
	}
	return 0;
}