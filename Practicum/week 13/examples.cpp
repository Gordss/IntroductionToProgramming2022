#include <iostream>

using namespace std;

unsigned int fact(unsigned int n) {
    if (n == 0) {
        return 1;
    }

    return n * fact(n-1);
}

bool arpr(int* arr, int n, int i) {
    if (i > n) { // i >= n-1
        return true;
    }

    return *(arr + i) <= *(arr + i + 1) && arpr(arr, n, i + 1);
}

int strlenrec(const char* str) {
    if (str[0] == '\0') { // empty string
        return 0;
    }

    return 1 + strlenrec(str + 1); 
}

int sum(const char* str) {
    if (str[0] == '\0') {
        return 0;
    }

    if (str[0] >= '0' && str[0] <= '9') {
        // 1 + sum("23456789")
        // 2 + sum("3456789")
        // ...
        // 1 + 2 + ... + 9 -> 45 
        return (str[0] - '0') + sum(str + 1);
    }

    return sum(str+1); s
}

int count(char**matrix, int n, int i, int m, int j) {
    if (i >= n || j >= m) { // i == 4, j == 4
        return 0;
    }

    if (matrix[i][j] == 'S') {
        // 1 + 1 + 0 -> 2
        return 1 + count(matrix, n, i + 1, m, j + 1);
    }
    
    return count(matrix, n, i + 1, m, j + 1);
}

int countS(char** matrix, int n, int m) {
    return count(matrix, n, 0, m, 0);
}

int main() {
    // int arr1[5] = {3, 2, 3, 4, 5};
    // cout << boolalpha << arpr(arr1, 5, 0) << endl;
    // cout << boolalpha << arpr(arr1 + 1, 4, 0) << endl;
    // cout << boolalpha << arpr(arr1, 5, 1) << endl;

    // cout << strlenrec("abcdef") << endl;
    
    // cout << sum("123456789") << endl; //45
    // cout << sum("ab1c1") << endl; //2
    // cout << sum("abcd") << endl;//0

    char** matrix = new char*[4];
    for(size_t i = 0; i < 4; i++) {
        matrix[i] = new char[4];
        cin >> matrix[i];
    }

    //abcd
    //eS1e
    //ghij
    //lmnS
    cout << countS(matrix, 4, 4) << endl;

    for(size_t i = 0; i < 4; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}