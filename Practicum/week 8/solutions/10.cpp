#include <iostream>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

int mostOccurances(int arr[], int size)
{
    bubbleSort(arr, size);

    int mostOccurances = 1;
    int temp = mostOccurances;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            temp++;
        }
        else
        {
            temp = 1;
        }

        if (temp > mostOccurances)
        {
            mostOccurances = temp;
        }
    }
    return mostOccurances;
}

int main()
{
    int arr[] = {2, 2, 4, 4, 5, 1, 2, 7, 2, 4, 4, 4, 4};
    std::cout << mostOccurances(arr, sizeof(arr) / sizeof(int)) << std::endl;
    return 0;
}
