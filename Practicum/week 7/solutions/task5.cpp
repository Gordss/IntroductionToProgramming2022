#include <iostream>
#define NUMBER_SIZE 4

using namespace std;

int main() {
    bool firstNum[NUMBER_SIZE], secondNum[NUMBER_SIZE];
    for(int i = 0; i < NUMBER_SIZE; i++) {
        std::cin >> firstNum[i];
    } 

    for(int i = 0; i < NUMBER_SIZE; i++) {
        std::cin >> secondNum[i];
    }

    bool sum[NUMBER_SIZE+1];
    bool carry = 0;
    for(int i = NUMBER_SIZE; i >= 0; i--) {
        sum[i+1] = (firstNum[i] ^ secondNum[i]) ^ carry;
        carry = (firstNum[i] && secondNum[i]) || 
                (firstNum[i] && carry) ||
                (secondNum[i] && carry);
    }
    sum[0] = carry;

    for(int i = 0; i < 5; i++) {
        std::cout << sum[i];
    }
    std::cout << endl;

    return 0;
}