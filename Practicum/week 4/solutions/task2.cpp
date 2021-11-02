#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    (a + b > c && a + c > b && b + c > a)
        ? std::cout << "Triangle can be formed \n"
        : std::cout << "Triangle can not be formed \n";

    return 0;
}