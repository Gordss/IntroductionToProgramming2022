#include<iostream>

int digitsSum(int n) {
    if (!n)
    {
        return 0;
    }
    
    return n % 10 + digitsSum(n / 10);
}

int main() {
    int n;
    std::cin >> n;

    std::cout << digitsSum(n);
    
    return 0;
}