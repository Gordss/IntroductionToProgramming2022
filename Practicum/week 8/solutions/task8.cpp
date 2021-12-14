#include <iostream>

int strlen(char *str)
{
    int counter = 0;
    while (*str)
    {
        counter++;
        str++;
    }
    return counter;
}

bool isPalindrome(char *str)
{
    int size = strlen(str);
    for (int i = 0; i < size / 2; i++)
    {
        if (str[i] != str[size - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char palindrome[] = "bqlhlqb";
    std::cout << std::boolalpha << isPalindrome(palindrome) << std::endl;

    return 0;
}
