#include <iostream>
#define MAX_ARR_SIZE 1024

int main ()
{
    int n, array[MAX_ARR_SIZE], result[MAX_ARR_SIZE];
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        if((i + 1) % 2 == 0)
        {
            result[counter++] = array[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if((i + 1) % 2 == 1)
        {
            result[counter++] = array[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << result[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}