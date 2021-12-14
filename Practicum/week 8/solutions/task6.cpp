#include <iostream>
#define ARR_SIZE 1024

bool substring(const char* str, const char* substr)
{
    int substringLen = 0;

    while(substr[substringLen++] != 0);
    substringLen--;

    int counter = 0;
    while(str[counter] != 0)
    {
        if(str[counter] == substr[0])
        {
            int k = 0;
            while(str[counter + k] != 0 && substr[k] != 0 && str[counter + k] == substr[k])
            {
                k++;
            }

            if(k == substringLen)
            {
                return true;
            }
        }

        counter++;
    }

    return false;
}

int main()
{
    char string1[ARR_SIZE], string2[ARR_SIZE];

    std::cin >> string1 >> string2;

    std::cout << "Is substring? " << std::boolalpha << substring(string1, string2) << '\n';

    return 0;
}