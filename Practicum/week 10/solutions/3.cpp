#include <iostream>

using namespace std;

int product(int** matrix, int n) {
	int prod = 1;
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) {
			if (contains(matrix[i][j], 1) && i > n - 1 - j) {
				prod *= matrix[i][j];
			}
		}
	}
	return prod;
}

bool contains(int n, int k) {
	if (k < 0 || k > 9) {
		return false;
	}
	while (n > 0) {
		if (n % 10 == k) {
			return true;
		}
		n /= 10;
	}
	return false;
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

	cout << product(matrix, n);
    return 0;
}