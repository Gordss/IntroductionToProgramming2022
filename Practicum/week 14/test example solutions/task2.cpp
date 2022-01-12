#include <iostream>
#define NUMERIC_SYSTEM 10

bool hasSameDigits(int n)
{
    // 0 - 9
    int digitsHistogram[NUMERIC_SYSTEM] = {0}; 
    int nCpy = abs(n);
    while(nCpy > 0)
    {
        digitsHistogram[nCpy % 10]++;
        nCpy /= 10;
    }

    for(int i = 0; i < NUMERIC_SYSTEM; i++)
    {
        if(digitsHistogram[i] > 1)
        {
            return true;
        }
    }

    return false;
}

void addNumber(int*& numbers, int& size, int forAdd)
{
    int* newArray = new int[size + 1];
    for(int i = 0; i < size; i++)
    {
        newArray[i] = numbers[i];
    }
    delete[] numbers;

    newArray[size] = forAdd;
    numbers = newArray;
    size++;
}

int* collect(int** matrix, int n, int& resultSize)
{
    int* resultNumbers = nullptr;
    resultSize = 0;

    // lower diagonals including the main diagonal
    int x = n - 1, y = 0;
    while(x >= 0)
    {
        for(int i = x, j = 0; i <= n - 1; i++, j++)
        {
            if(hasSameDigits(matrix[i][j]))
            {
                addNumber(resultNumbers, resultSize, matrix[i][j]);
            }
        }
        x--;
    }

    // upper diagonals
    x = 0, y = 1;
    while(y <= n - 1)
    {
        for(int i = 0, j = y; j <= n - 1; i++, j++)
        {
            if(hasSameDigits(matrix[i][j]))
            {
                addNumber(resultNumbers, resultSize, matrix[i][j]);
            }
        }

        y++;
    }

    return resultNumbers;
}

int main()
{
    int n;

    do{
        std::cin >> n;
    }while(n < 1 || n > 30);

    int** matrix = new int*[n];
    for(int i = 0; i < n ;i++)
    {
        matrix[i] = new int[n];
        for(int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    int resultSize;
    int* collection = collect(matrix, n, resultSize);

    for(int i = 0; i < resultSize; i++)
    {
        std::cout << collection[i] << ' ';
    }
    std::cout << '\n';

    for(int i = 0; i < n ;i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] collection;

    return 0;
}