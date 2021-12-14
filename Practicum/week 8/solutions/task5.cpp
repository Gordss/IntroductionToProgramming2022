#include <iostream>

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapNumbers2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5, b = 7;

    swapNumbers(a, b);

    std::cout << a << ' ' << b << '\n';

    swapNumbers2(&a, &b);

    std::cout << a << ' ' << b << '\n';

    return 0;
}