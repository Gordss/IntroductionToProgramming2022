#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    //под главния диагонал, включително в него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << matrix[i][j] << " ";
            }
            
        }
        cout << "\n";
        
    }
    cout << endl;
    //над главния диагонал, без елементите в него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                cout << matrix[i][j] << " ";
            }
            
        }
        cout << "\n";
        
    }
    cout << endl;

    //под второстепенния, без елементите по него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > n - j - 1) 
            {
                cout << matrix[i][j] << " ";
            }
            
        }
        cout << "\n";
        
    }
    cout << endl;


    //над второстепенния, с елементите по него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= n - j - 1) 
            {
                cout << matrix[i][j] << " ";
            }
            
        }
        cout << "\n";
        
    }
    cout << endl;
    /*
    1 2 3
    4 5 6
    7 8 9
    */


    return 0;
}
