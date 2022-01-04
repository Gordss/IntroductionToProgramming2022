#include<iostream>
#include<iomanip>

#define MAX 100

using namespace std;

void multi(int a[][MAX], int b[][MAX], int c[][MAX], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int arr[][MAX], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
}

int main(){
    int n, matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            result[i][j] = 0;
        }
    }

    cout << "Input first matrix\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix1[i][j];
        }
    }

    cout << "Input second matrix\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix2[i][j];
        }
    }

    multi(matrix1, matrix2, result, n);
    
    cout << endl;
    printMatrix(result, n, n);

    return 0;
}