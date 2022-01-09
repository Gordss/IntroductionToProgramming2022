#include <iostream>

// Да се напише функция, която получава като параметри матрица от числа във вид на двумерен масив.
// Функцията да извежда на екрана сумата на числата в редовете и колоните, в които броят на елементите, 
// удовлетворяващи условието да са четни числа, по-малки от 6, е максимален за матрицата.

// 1 2 2 4
// 3 4 4 5
// 3 4 6 7 -> 19

// 1 3 3
// 2 4 4
// 2 4 6
// 4 5 7 -> 1

// 1. броим елементи в масив, които удовлетворяват предиката
// 2. функция за предиката 
// 3. пускаме върху всеки ред и намираме индекса на този ред с макс. брой -> индекс
// 4. същото, но за колоните; за целта транспонираме -> индекс
// 5. транспониране на матрица
// 6. събираме елементите от реда, намерен в 3 с елементите от колоната намерена в 4 и 
// това е резултатът

bool pred(int number) {
    return (number % 2 == 0) && (number < 6);
}

int countElements(int* numbers, int size) {
    int counter = 0;
    for(size_t i = 0; i < size; i++) {
        if (pred(numbers[i])) {
            counter++;
        }
    }
    return counter;
}

size_t getMax(int** matrix, int n) {
    size_t maxRow;
    int maxCount = INT32_MIN;
    for(size_t i = 0; i < n; i++) {
        int countOfElements = countElements(matrix[i], n);

        if (countOfElements > maxCount) {
            maxCount = countOfElements;
            maxRow = i;
        }
    }
    return maxRow;
}

int** transponse(int** matrix, int oldRows, int oldCols) {
    int rows = oldCols, cols = oldRows;
    int** transponseMatrix = new int*[rows];
    for(int i = 0; i < rows; i++) {
        transponseMatrix[i] = new int[cols];
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transponseMatrix[i][j] = matrix[j][i];
        }
    }
    return transponseMatrix;
}

int getSum(int** matrix, int rows, int cols) {
    size_t maxRow = getMax(matrix, rows);
    int** transponseMatrix = transponse(matrix, rows, cols);
    size_t maxCol = getMax(transponseMatrix, cols);
    for(int i = 0; i < cols; i++) {
        delete[] transponseMatrix[i];
    }
    delete[] transponseMatrix;

    int sum = 0;
    for(int i = 0; i < cols; i++) {
        sum += matrix[maxRow][i];
    }

    for(int i = 0; i < rows; i++) {
        sum += matrix[i][maxCol];
    }

    return sum;
}

void printMatrix(int** matrix, int rows, int cols) {
    for(size_t i = 0; i < rows; i++) {
        for(size_t j = 0; j < cols; j++) {
            std::cout <<  matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    size_t n, m;
    std::cin >> n >> m;

    int** matrix = new int*[n];
    for(int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for(int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Wanted sum is: " << getSum(matrix, n, m) << "\n";

    for(int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}