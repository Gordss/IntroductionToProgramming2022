#include <iostream>

using namespace std;

int numDig(int n){
	int num = 0;
	while (n > 0) {
		num++;
		num = num / 10;
	}
	return 0;
}

int reverse(int n) {
	int rev = 0;
	int num = n;
	do {
		int digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	} while (num != 0);
	return rev;
}

bool isPal(int number) {
	int reversed = reverse(number);
	return reversed == number;
}

int main() {
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bool fl = true;
	for (int i = 0; i < n; i++) {
		if (!isPal(arr[i])) {
			fl = false;
			break;
		}
	}
	cout << fl;
	return 0;
}