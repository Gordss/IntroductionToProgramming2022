#include<iostream>

double sumRec(int n) {
    if (n == 1)
    {
        return 1;
    }

    return sumRec(n - 1) + 1.0 / n;
}

int main() {
    int n;
    std::cin >> n;

    std::cout << sumRec(n);
    return 0;
}