#include <iostream>
#include <cstring>
#define MAX_INPUT_SIZE 1024

void addWord(char* source, int startIndex, int endIndex, char**& result, int& size)
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

bool isValidSymbol(char c)
{
    return c >= 'A' && c <= 'Z' ||
           c >= 'a' && c <= 'z' ||
           c >= '0' && c <= '9';
}

char* minWord(char* str)
{
    char** words = nullptr;
    int size = 0;
    int lastIndex = 0;
    // trim left
    while(!isValidSymbol(str[lastIndex]))
    {
        lastIndex++;
    }

    for(int i = lastIndex; i < strlen(str); i++)
    {
        if(!isValidSymbol(str[i]))
        {
            addWord(str, lastIndex, i, words, size);
            while(!isValidSymbol(str[i])){
                i++;
            }
            lastIndex = i;
        }
    }

    if(isValidSymbol(str[strlen(str) - 1]))
    {
        addWord(str, lastIndex, strlen(str), words, size);
    }

    int minIndex = 0;
    for(int i = 1; i < size; i++)
    {
        if(strcmp(words[minIndex], words[i]) > 0)
        {
            minIndex = i;
        }
    }

    int resultIndex;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == words[minIndex][0])
        {
            bool found = true;
            for(int j = 0; j < strlen(words[minIndex]); j++)
            {
                if(str[i + j] != words[minIndex][j])
                {
                    found = false;
                }
            }

            if(found)
            {
                resultIndex = i;
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        delete[] words[i];
    }
    delete[] words;

    return str + resultIndex;
}

int main()
{
    char input[MAX_INPUT_SIZE];
    std::cin.getline(input, MAX_INPUT_SIZE, '\n');

    char* minWordP = minWord(input);

    std::cout << minWordP << '\n';

    return 0;
}