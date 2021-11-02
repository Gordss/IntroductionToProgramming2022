#include <iostream>

int main()
{
    int n;

    do
    {
        std::cin >> n;
    } while (n < 0);

    int f1 = 0, f2 = 1, temp;

    if (n == 0)
    {
        std::cout << f1 << std::endl;
    }
    else if (n == 1)
    {
        std::cout << f2 << std::endl;
    }
    else
    {
        while (n > 1)
        {
            temp = f2;
            f2 += f1;
            f1 = temp;
            n--;
        }
        std::cout << f2 << std::endl;
    }

    return 0;
}