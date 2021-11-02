#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int rev = 0, originalNumber = number;

    do
    {
        rev = rev * 10 + number % 10;
        number /= 10;
    } while (number != 0);

    std::cout << "The reverse of the number is: " << rev << std::endl;

    if (originalNumber == rev)
    {
        std::cout << "The number is a palindrome.\n";
    }
    else
    {
        std::cout << "The number is not a palindrome.\n";
    }

    return 0;
}