#include <iostream>
#include <cstring>

#define MAX_INPUT_SIZE 1024

int getLetterIndex(char* letters, int n, char letter)
{
    for(int i = 0; i < n; i++)
    {
        if(letters[i] == letter)
        {
            return i;
        }
    }

    return -1;
}

double calculate(char* input, int n, char* letters, double* values)
{
    double currentMulti = 1;
    double currentSum = 0;
    for(int i = 0; i < strlen(input); i++)
    {
        if(input[i] == '+')
        {
            currentSum += currentMulti;
            currentMulti = 1;
        }
        else if(input[i] >= 'a' && input[i] <= 'z')
        {
            int letterIndex = getLetterIndex(letters, n, input[i]);
            currentMulti *= letterIndex != -1 ? values[letterIndex] : 0;
        }
    }

    return currentSum + currentMulti;
}

int main()
{
    char input[MAX_INPUT_SIZE];
    char letters[MAX_INPUT_SIZE];
    double values[MAX_INPUT_SIZE];
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> letters[i];
    }

    for(int i = 0; i < n; i++)
    {
        std::cin >> values[i];
    }

    std::cin >> input;

    double result = calculate(input, n, letters, values);

    std::cout << result << '\n';

    return 0;
}