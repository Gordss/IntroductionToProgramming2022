#include <iostream>
#define MAX_ARR_SIZE 1000004

int main ()
{

    int n, array[MAX_ARR_SIZE];

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    bool isResult;
    for(int k = n - 2; k >= 1; k--)
    {
        isResult = true;

        for(int i = 0; i < n - k; i++)
        {
            if(abs(array[i] - array[i + k]) != k)
            {
                isResult = false;
                break;
            }
        }

        if(isResult)
        {
            std::cout << k << '\n';
            break;
        }
    }

    if(!isResult)
    {
        std::cout << "No solution\n";
    }

    return 0;
}