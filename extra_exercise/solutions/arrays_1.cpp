#include <iostream>

int getLen(size_t number)
{
    int counter = 0;

    while(number != 0)
    {
        number /= 10;
        counter++;
    }

    return counter;
}

char* toString(size_t number)
{
    int len = getLen(number);
    int lenC = len;
    char* result = new char[len];

    while(number != 0)
    {
        result[lenC - 1] = (char)('0' + number % 10);
        number /= 10;
        lenC--;
    }

    return result;
}

int main()
{
    size_t number;
    std::cin >> number;

    char* sNumber = toString(number);
    std::cout << sNumber << '\n';

    delete[] sNumber;

    return 0;
}