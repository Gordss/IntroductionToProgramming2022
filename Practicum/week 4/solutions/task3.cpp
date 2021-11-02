#include <iostream>

int main()
{

    int a, b;
    char sign;

    std::cout << "a= ";
    std::cin >> a;
    std::cout << "b= ";
    std::cin >> b;
    std::cout << "Input operation:";
    std::cin >> sign;

    try
    {
        switch (sign)
        {
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        case '/':
            if (b == 0)
                std::cout << "Error! Division with 0!\n";
            else
                std::cout << a / b << std::endl;
            break;
        case '%':
            if (b == 0)
                std::cout << "Error! Division with 0!\n";
            else
                std::cout << a % b << std::endl;
            break;
        default:
            throw "Invalid operation symbol\n";
        }
    }
    catch (char const* e)
    {
        std::cout << e;
    }

    return 0;
}
