#include <iostream>
#include <cmath>
#define BITS_SIZE 4

int main()
{
    bool num1[BITS_SIZE],
        num2[BITS_SIZE],
        result[BITS_SIZE + 1];
    /*
    input should be
    0 0 1 0
    0 0 0 1
    */

    for(int i = 0; i < BITS_SIZE; i++)
    {
        std::cin >> num1[i]; 
    }

    for(int i = 0; i < BITS_SIZE; i++)
    {
        std::cin >> num2[i]; 
    }

    bool carry = 0;
    for(int i = BITS_SIZE - 1; i >= 0; i--)
    {
        bool sum = num1[i] ^ num2[i] ^ carry;
        
        result[i + 1] = sum;

        carry = (num1[i] & num2[i]) | (num2[i] & carry) | (num1[i] & carry);
    }

    result[0] = carry;

    for(int i = 0; i < BITS_SIZE + 1; i++)
    {
        std::cout << result[i];
    }

    std::cout << std::endl;

    return 0;
}