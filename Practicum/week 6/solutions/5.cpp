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
		bool arithmeticProgression = true;
		bool geometricProgression = true;
		double r = arr[1] / arr[0];
		int d = arr[1] - arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] - arr[i - 1] != d) {
				arithmeticProgression = false;
				break;
			}
			if ((double)arr[i] / arr[i - 1] != r) {
				geometricProgression = false;
				break;
			}
		}
		cout << arithmeticProgression;
		cout << geometricProgression;
	}
	return 0;
}