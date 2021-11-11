#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;
	int arr[100];
	if (n > 100) {
		cout << "Not enough memory allocated!";
	}
	else {
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		bool allAreContained = true;
		for (int i = a; i <= b; i++) {
			bool currentIsContained = false;
			for (int j = 0; j < n; j++) {
				if (arr[j] == i) {
					currentIsContained = true;
					break;
				}
			}
			if (!currentIsContained) {
				allAreContained = false;
				break;
			}
		}
		cout << allAreContained;
	}
	return 0;
}