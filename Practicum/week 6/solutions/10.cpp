#include <iostream>

using namespace std;

int main() {
	int arr[100];
	int arr2[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < i) {
			arr[i] = arr[i] * arr[i];
		}
		else if (arr[i] == i) {
			arr[i] = -arr[i];
		}
		else {
			arr[i] = arr[i] - 1;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	return 0;
}
