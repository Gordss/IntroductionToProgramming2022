#include <iostream>

using namespace std;

int maxRow(int** matrix, int n) {
	int max = INT16_MIN;
	int sum;
	int maxRow;
	for (size_t i = 0; i < n; i++) {
		sum = 0;
		for (size_t j = 0; j < n; j++) {
			sum += matrix[i][j];
		}
		if (sum > max) {
			maxRow = i;
			max = sum;
		}
	}
}

int maxCol(int** matrix, int n) {
	int max = INT16_MIN;
	int sum;
	int maxRow;
	for (size_t i = 0; i < n; i++) {
		sum = 0;
		for (size_t j = 0; j < n; j++) {
			sum += matrix[j][i];
		}
		if (sum > max) {
			maxRow = i;
			max = sum;
		}
	}
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

	cout << maxCol(matrix, n) << endl;
	cout << maxRow(matrix, n) << endl;
	return 0;
}