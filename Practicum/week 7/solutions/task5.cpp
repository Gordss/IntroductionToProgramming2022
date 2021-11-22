#include <iostream>
#define NUMBER_SIZE 3

int main() {
    bool firstNum[NUMBER_SIZE], secondNum[NUMBER_SIZE];
    for(int i = 0; i < NUMBER_SIZE; i++) {
        std::cin >> firstNum[i];
    } 

    for(int i = 0; i < NUMBER_SIZE; i++) {
        std::cin >> secondNum[i];
    }

    bool firstSum[NUMBER_SIZE*2 - 1] = {0}, secondSum[NUMBER_SIZE*2 - 1] = {0}, thirdSum[NUMBER_SIZE*2 - 1] = {0};
    for(int i = 0; i < NUMBER_SIZE; i++) {
        firstSum[NUMBER_SIZE + i - 1] = firstNum[i] & secondNum[2];
    }

    for(int i = 0; i < NUMBER_SIZE; i++) {
        secondSum[NUMBER_SIZE + i - 2] = firstNum[i] & secondNum[1];
    }

    for(int i = 0; i < NUMBER_SIZE; i++) {
        thirdSum[NUMBER_SIZE + i - 3] = firstNum[i] & secondNum[0];
    }
    
    bool result[NUMBER_SIZE * 2];    
    bool carry = 0;
    for(int i = NUMBER_SIZE * 2 - 2; i >= 0; i--) {
        result[i+1] = firstSum[i] ^ secondSum[i] ^ thirdSum[i] ^ carry;
        carry = (firstSum[i] & secondSum[i]) | (firstSum[i] & carry) | (secondSum[i] & carry) |
        (firstSum[i] & thirdSum[i]) | (thirdSum[i] & carry) | (secondSum[i] & thirdSum[i]);
    }

    result[0] = carry;

    for(int i = 0; i < NUMBER_SIZE * 2; i++) {
        std::cout << result[i];
    }    

    std::cout << std::endl;
    return 0;
}