#include <iostream>

bool isSumOfDigitsDivBy3(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n%10;
        n /= 10;
    }

    return sum % 3 == 0;
}

int main() {

    std::cout << "---Tests---\n";
    std::cout << "n = 123 -> " << std::boolalpha << isSumOfDigitsDivBy3(123) << std::endl;
    std::cout << "n = 1 -> " << std::boolalpha << isSumOfDigitsDivBy3(1) << std::endl;
    std::cout << "n = 10 -> " << std::boolalpha << isSumOfDigitsDivBy3(10) << std::endl;
    std::cout << "n = 10011 -> " << std::boolalpha << isSumOfDigitsDivBy3(10011) << std::endl;
}
