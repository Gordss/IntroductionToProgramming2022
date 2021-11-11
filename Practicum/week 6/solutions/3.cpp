#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100]; //тук не правим проверка дали заделената памет е < n, т.к. по условие n <= 1000;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int arr2[100];
	for (int i = 0; i < n; i++) {
		arr2[i] = arr[n - 1 - i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr2[i];
	}
	return 0;
}