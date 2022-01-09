#include <iostream>
#include <cstring>
#define MAX_INPUT_SIZE 2048

void addSlice(char* source, int startIndex, int endIndex, char**& result, int& size)
{
    char** newResult = new char*[size + 1];

    for(int i = 0; i < size; i++)
    {
        newResult[i] = new char[strlen(result[i])];
        strcpy(newResult[i], result[i]);
        delete[] result[i];
    }
    delete[] result;

    newResult[size] = new char[endIndex - startIndex + 1];
    int len = 0;
    for(int i = startIndex; i < endIndex; i++)
    {
        newResult[size][len++] = source[i];
    }
    newResult[size][len] = 0;

    result = newResult;
    size++;
}

char** split(char* source, char delimiter, int& size)
{
    int left = 0;
    int right = strlen(source) - 1;

    // trim left
    while(source[left] == delimiter)
    {
        left++;
    }

    // trim right
    while(source[right] == delimiter)
    {
        right++;
    }

    char** result = nullptr;
    size = 0;
    int lastIndex = left;

    for(int i = left; i <= right; i++)
    {
        if(source[i] == delimiter)
        {
            addSlice(source, lastIndex, i, result, size);
            lastIndex = i + 1;
        }
    }

    addSlice(source, lastIndex, right + 1, result, size);

    return result;
}

int main()
{
    char input[MAX_INPUT_SIZE];
    std::cin.getline(input, MAX_INPUT_SIZE, '\n');
    
    char delimiter;
    int splitSize;
    std::cout << "Input delimiter:";
    std::cin.get(delimiter);

    char** splitted = split(input, delimiter, splitSize);

    if(splitted != nullptr)
    {
        for(int i = 0; i < splitSize; i++)
        {
            std::cout << splitted[i] << '\n';
        }
    }

    for(int i = 0; i < splitSize; i++)
    {
        delete[] splitted[i];
    }
    delete[] splitted;

    return 0;
}