#include <iostream>
#include <cmath>

int main()
{
    int n;
    do
    {
        std::cin >> n;
    } while (n % 2 == 0);

    double result = sqrt(n);
    for (int i = n - 2; i >= 1; i -= 2)
    {
        result = sqrt(i + result);
    }

    std::cout << result << std::endl;

    return 0;
}