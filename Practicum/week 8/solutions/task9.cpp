#include <iostream>

double average(double *arr, int size)
{
    double average = 0;
    for (int i = 0; i < size; i++)
    {
        average += arr[i];
    }
    return average / size;
}

double max(double *arr, int size)
{
    double max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

double min(double *arr, int size)
{
    double min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

double sum1(double *arr, int size)
{
    return average(arr, size) + max(arr, size) + min(arr, size);
}

int main()
{
    double arr[] = {1, 2, 3, 4, 5, 6}; // should be 10.5
    std::cout << sum1(arr, sizeof(arr) / sizeof(double)) << std::endl;
    return 0;
}
