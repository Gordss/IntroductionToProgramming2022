#include<iostream>

int smallestDigitUtil(int n, int smallestDigit) {
    if (n == 0)
    {
        return smallestDigit;
    }
    if (n % 10 < smallestDigit)
    {
        return smallestDigitUtil(n / 10, n % 10);
    }
    
    return smallestDigitUtil(n / 10, smallestDigit);
}

int smallestDigit(int n) {
    return smallestDigitUtil(n, n % 10);
}

int main() {
    int n;
    std::cin >> n;

    std::cout << smallestDigit(n);
    return 0;
}