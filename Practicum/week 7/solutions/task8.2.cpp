#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX_ARR_SIZE 1024

int main ()
{
    srand(time(NULL));
    int n, array[MAX_ARR_SIZE];
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    int j, temp;
    for(int i = 0; i < n; i++)
    {
        j = i + (rand() % (n - i));
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}