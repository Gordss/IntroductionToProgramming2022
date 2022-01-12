#include <iostream>

int sumStep(int n, int startVal, int k)
{
    if (startVal > n)
    {
        return 0;
    }

    return (startVal + sumStep(n, startVal + k, k));
}

int main()
{

    int n, k;
    std::cin >> n >> k;

    std::cout << sumStep(n, 1, k) << std::endl;
    return 0;
}