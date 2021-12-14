#include <iostream>

const int MAX_ELEMENTS = 1024;

void swap1(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void swapElements(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        swap1(arr1 + i, arr2 + i);
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr1[MAX_ELEMENTS], arr2[MAX_ELEMENTS];
    int n;
    std::cout << "Input array size:";
    std::cin >> n;

    std::cout << "Elements in the first array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr1[i];
    }

    std::cout << "Elements in the second array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr2[i];
    }

    swapElements(arr1, arr2, n);
    printArray(arr1, n);
    printArray(arr2, n);

    return 0;
}
