#include <iostream>

// Дадена е квадратна матрица от естествени числа с размерност n×n,n∈[2;20]. 
// Да се напише функция, която сортира редовете на матрицата в низходящ ред 
// според сумата на цифрите във всеки от елементите.

// 123 456 789 -> 6 15 24 -> 123 456 789
// 111 0 123 -> 3 0 6 ->     0   111 123
// 368 124 125 -> 17 7 8 ->  124 125 368

void swap(unsigned long& a, unsigned long& b) {
    unsigned long temp = a;
    a = b;
    b = temp;
}

int sumDigits(unsigned long number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void selectionSort(unsigned long* arr, int size) {
    int minIndex;
    for(int i = 0; i < size - 1; i++) {
        minIndex = i;
        for(int j = i+1; j < size; j++) {
            int sumDigitsJ = sumDigits(arr[j]);
            int sumDigitsMinIndex = sumDigits(arr[minIndex]);

            if (sumDigitsJ < sumDigitsMinIndex) {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

void sortRows(unsigned long** matrix, int rows)  {
    for(int i = 0; i < rows; i++) {
        selectionSort(matrix[i], rows);
    }
}

void printMatrix(unsigned long** matrix, int rows) {
    for(size_t i = 0; i < rows; i++) {
        for(size_t j = 0; j < rows; j++) {
            std::cout <<  matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    size_t n;
    do {
        std::cout << "Enter dimension of matrix: ";
        std::cin >> n;
    } while (n < 2 || n > 20);

    unsigned long** matrix = new unsigned long*[n];
    for(size_t i = 0; i < n; i++) {
        matrix[i] = new unsigned long[n];
        for(size_t j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Matrix before sort: \n";
    printMatrix(matrix, n);
    sortRows(matrix, n);
    std::cout << "Matrix after sort: \n";
    printMatrix(matrix, n);

    for(size_t i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}