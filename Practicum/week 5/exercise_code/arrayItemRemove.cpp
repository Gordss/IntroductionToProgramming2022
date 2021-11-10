#include <iostream>

#define ARR_SIZE 1024

//a-10, b-11, c-12, d-13, e-14, f-15

int main() {

    int n, k;

    std::cin >> n;

    int arr[ARR_SIZE];

    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cin >> k;

    bool foundElement = false;
    for(int i = 0; i < n - 1; i++)
    {
        if (arr[i] == k)
        {
            // we found the element
            foundElement = true;
        }

        if(foundElement)
        {
            arr[i] = arr[i+1];
        }
    }

    if(foundElement || arr[n - 1] == k) {
        n--;
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}