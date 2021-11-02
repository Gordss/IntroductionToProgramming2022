#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            std::cout << i << " ";
            n = n / i;
        }
    }

    // handle the case when n is a prime number itself n > 2
    if (n > 2)
    {
        std::cout << n << "\n";
    }

    return 0;
}