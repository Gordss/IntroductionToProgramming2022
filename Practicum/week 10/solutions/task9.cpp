#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if((i >= m - j - 1) && ((i + j) % 2 == 0)) {
                product *= matrix[i][j];
            }
        }
    }
    cout << product;
    

    return 0;
}
