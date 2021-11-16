#include <iostream>
#define ARR_SIZE 1024

int main()
{
    int size1, size2;
    bool flag;

    std::cout << "Size of first array:";
    std::cin >> size1;

    std::cout << "Array 1:";
    int arr1[ARR_SIZE];

    for (int i = 0; i < size1; i++)
    {
        std::cin >> arr1[i];
    }

    std::cout << "Size of second array:";
    std::cin >> size2;

    std::cout << "Array 2:";
    int arr2[ARR_SIZE];

    for (int i = 0; i < size2; i++)
    {
        std::cin >> arr2[i];
    }

    std::cout << "Different numbers" << std::endl;

    for (int i = 0; i < size1; i++)
    {
        flag = true;

        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = false;
            }
        }

        if (arr1[i] % 3 != 0 && flag == true)
        {
            std::cout << arr1[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
