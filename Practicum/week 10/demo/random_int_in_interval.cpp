#include <iostream>
#include <ctime>
#include <stdlib.h>

int main ()
{
    //set seed
    srand(time(NULL));
    // pseydo random number

    int min = 1, max = 10;

    for(int i = 0; i < 10; i++)
    {
        // [0, 9]
        // std::cout << rand() % 10 << '\n';
        // number in interval [10, 1]
        // std::cout << rand() % 10 + 1 << '\n';

        // number in interval [min, max]
        std::cout << min + rand() % ((max + 1 ) - min) << '\n';
    }

    return 0;
}