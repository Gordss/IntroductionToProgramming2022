#include <iostream>

using namespace std;

bool even(int n) {
	return !(n % 2);
}

int matrixSum(int** matrix, int n) {
	int sum = 0;
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) {
			sum += even(matrix[i][j]) * matrix[i][j];
		}
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}

	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << matrixSum(matrix, n);
	return 0;
}