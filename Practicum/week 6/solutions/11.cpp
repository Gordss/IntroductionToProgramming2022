#include <iostream>

using namespace std;

int main() {
	double a[100];
	double b[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	double scalarProduct = 0;
	for (int i = 0; i < n; i++) {
		scalarProduct += a[i] * b[i];
	}
	cout << scalarProduct;
	return 0;
}