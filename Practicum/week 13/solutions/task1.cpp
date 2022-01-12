#include <iostream>

void toBinary(int n)
{
    if (n == 0)
    {
        return;
    }

    toBinary(n / 2);
    std::cout << n % 2;
}

int main()
{
    int n;
    std::cin >> n;

    toBinary(n);
    std::cout << '\n';

    return 0;
}