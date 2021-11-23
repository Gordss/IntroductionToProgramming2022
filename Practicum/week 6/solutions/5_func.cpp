#include <iostream>

using namespace std;


bool isLowerLet(char symbol) {
	return symbol >= 'a' && symbol <= 'z;
}

bool isCapLet(char symbol) {
	return symbol >= 'A' && symbol <= 'Z';
}

int main() {
	char arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int smalls = 0;
	int bigs = 0;
	for (int i = 0; i < n; i++) {
		if (isLowerLet(arr[i])) {
			smalls++;
		}
		if (isCapLet(arr[i])) {
			bigs++;
		}
	}
	cout << smalls << bigs;
	return 0;
}