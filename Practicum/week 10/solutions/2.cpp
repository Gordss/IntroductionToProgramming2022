#include <iostream>

using namespace std;

bool isPrime(int n) {
    for (size_t i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int count(int** matrix, int n) {
    int counter = 0;
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (i <= j && isPrime(matrix[i][j])) {
                counter++;
            }
        }
    }
    return counter;
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

    cout << count(matrix, n);
	return 0;
}