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
		cin >> arr2[i];
	}
	bool allFromFirstAreContainedInSecond = true;
	for (int i = 0; i < n; i++) {
		bool isContained = false;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr2[j]) {
				isContained = true;
				break;
			}
		}
		if (!isContained) {
			allFromFirstAreContainedInSecond = false;
			break;
		}
	}
	if (!allFromFirstAreContainedInSecond) {
		cout << "false";
	}
	else {
		bool allFromSecondAreContainedInFirst = true;
		for (int i = 0; i < n; i++) {
			bool isContained = false;
			for (int j = 0; j < n; j++) {
				if (arr2[i] == arr[j]) {
					isContained = true;
					break;
				}
			}
			if (!isContained) {
				allFromSecondAreContainedInFirst = false;
				break;
			}
		}
		if (!allFromSecondAreContainedInFirst) {
			cout << "false";
		}
		else {
			cout << "true";
		}
	}
	return 0;
}
