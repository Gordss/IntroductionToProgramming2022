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
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
			cout << arr[i];
		}
	}
	
	return 0;
}