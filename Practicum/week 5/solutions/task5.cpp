#include <iostream>
#include <iomanip>
#define ARR_SIZE 1024
#define EPS 0.00000001

int main()
{
    int arr[ARR_SIZE];
    int n;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    
    bool arithmeticProgression = true;
    bool geometricProgression = true;
    
    double r = arr[1] / arr[0];
    int d = arr[1] - arr[0];
    
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] - d >= EPS)
        {
            arithmeticProgression = false;
        }
        if (arr[i] / arr[i - 1] != r)
        {
            geometricProgression = false;
        }
    }

    std::cout << "Arithmetic progression? " << std::boolalpha << arithmeticProgression
        << "\n Geometric progression? " << geometricProgression << std::endl;

    return 0;
}