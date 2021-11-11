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
		for (int i = 0; i < n / 2; i++) {
			int temp = arr[i];
			arr[i] = arr[n - 1 - i];
			arr[n - 1 - i] = temp;
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}
	}
}