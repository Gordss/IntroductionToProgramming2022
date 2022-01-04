#include <iostream>

using namespace std;

void copyArray(int* arr1, int* arr2, int n) {
    for (int i = 0; i < n; i++) {
        arr1[i] = arr2[i];
    }
}

void removeRow(int** matrix, int n, int m, int k) {
    for(int i = k; i < n - 1; i++){
        copyArray(matrix[i], matrix[i + 1], m);
    }
    matrix[n - 1] = nullptr;
}

void print(int** matrix, int n, int m) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
	const int CONST_SIZE_FOR_TODAY = 5;

	int* dynamicNumber = new int; 

	*dynamicNumber = CONST_SIZE_FOR_TODAY; 

	int** dynamicMatrix = new int* [CONST_SIZE_FOR_TODAY]; 
	for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++) {
		dynamicMatrix[i] = new int[CONST_SIZE_FOR_TODAY];
	}

	for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++) {
		for (size_t j = 0; j < CONST_SIZE_FOR_TODAY; j++) {
			cin >> dynamicMatrix[i][j];
		}
	}

	removeRow(dynamicMatrix, 5, 5, 3);
	print(dynamicMatrix, CONST_SIZE_FOR_TODAY - 1, CONST_SIZE_FOR_TODAY);
	return 0;
}