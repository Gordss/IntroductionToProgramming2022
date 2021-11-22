#include <iostream>
#define MAX_ARR 1024

int main () 
{
    int n, array[MAX_ARR];

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    for(int i = 1; i < n - 1; i++)
    {
        if(array[i - 1] > array[i] && array[i] < array[i + 1])
        {
            // remove element at i with shift
            int counter = i;
            while(counter < n - 1)
            {
                array[counter] = array[counter + 1];
                counter++;
            }
            n--;
            i--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}