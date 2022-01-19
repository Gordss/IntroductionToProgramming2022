#include <iostream>
#include <cstring>
#define MAX_INPUT_SIZE 1024

int toStringLen(int number)
{
    int digitsCounter = 0;
    while(number > 0)
    {
        digitsCounter++;
        number /= 10;
    }

    return digitsCounter;
}

char* numberToStr(int number)
{
    int size = toStringLen(number);
    char* result = new char[size + 1];

    while(number > 0)
    {
        // '5'   int(5)
        result[size - 1] = char(number % 10 + int('0'));
        size--;
        number /= 10;
    }
    
    return result;
}

int calculateCompressSize(char* source)
{
    int finalStringSize = 0;
    int currentSize = 1;
    for(int i = 0; i < strlen(source) - 1; i++)
    {

        if(source[i] == source[i + 1])
        {
            currentSize++;
        }

        if(source[i] != source[i + 1])
        {
            if(currentSize == 1)
            {
                finalStringSize++;
            }
            else // currentSize > 1
            {
                //a20
                finalStringSize += (1 + toStringLen(currentSize));
            }
            currentSize = 1 ;
        }
    }

    if(currentSize == 1)
    {
        finalStringSize++;
    }
    else // currentSize > 1
    {
        //a20
        finalStringSize += (1 + toStringLen(currentSize));
    }

    return finalStringSize;
}

char* compress(char* source)
{

    // aaaaaaaZZZZZaaaaaa
    // aaaaaaaaaaaaaZZZZZaaaaaa
    // a13Z5a6
    int size = calculateCompressSize(source);
    char* compressedString = new char[size + 1];
    
    int currentSize = 1;
    int counter = 0;
    for(int i = 0; i < strlen(source) - 1; i++)
    {
        if(source[i] == source[i + 1])
        {
            currentSize++;
        }

        if(source[i] != source[i + 1])
        {
            compressedString[counter++] = source[i];
            if(currentSize > 1)
            {
                //a20
                char* number = numberToStr(currentSize);
                for(int i = 0; i < strlen(number); i++)
                {
                    compressedString[counter] = number[i];
                    counter++;
                }

                delete[] number;
            }

            currentSize = 1;
        }
    }

    compressedString[counter++] = source[strlen(source) - 1];
    if (currentSize > 1)
    {
        char* number = numberToStr(currentSize);
        for(int i = 0; i < strlen(number); i++)
        {
            compressedString[counter] = number[i];
            counter++;
        }

        delete[] number;
    }

    compressedString[counter] = 0;

    return compressedString;
}

int main()
{
    char* input = new char[MAX_INPUT_SIZE];

    std::cin >> input;

    int size = calculateCompressSize(input);
    std::cout << "Compressed string has size: " << size + 1 << '\n';
    char* compressedString = compress(input);

    std::cout << compressedString << '\n';

    delete[] input;
    delete[] compressedString;

    return 0;
}