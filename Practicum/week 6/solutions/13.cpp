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
	int max = 1;
	for (int i = 0; i < n - 1; i++) {
		int currLen = 1;
		while (arr[i] <= arr[i + 1]) {
			currLen++;
			i++;
		}
		if (currLen > max) {
			max = currLen;
		}
	}
	cout << max;
	return 0;
}
