#include <iostream>
#define ARR_SIZE 126

int main()
{
    {
        ///something
    }

    {
        ///something
    }

    int a = 5;
    int *s1 = &a;
    int *s2 = nullptr;

    // initialize ONE number with value 5
    int *p = new int(5);

    // for simple types and objects just delete
    std::cout << *p << '\n';
    delete p;

    int n;
    std::cin >> n;
    // there's no problem to set size runtime
    double* array = new double[n];

    for(int i = 0; i < n;i++)
    {
        std::cin >> array[i];
    }
    // free memory for the array
    delete[] array;


    // create ARR_SIZE * ARR_SIZE matrix
    int **matrix = new int*[ARR_SIZE];
    for(int i = 0; i < ARR_SIZE; i++)
    {
        matrix[i] = new int[ARR_SIZE];
    }

    // for arrays we use delete[]
    for(int i = 0; i < ARR_SIZE; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    

    // int *num1 = nullptr;
    // {
    //     int* num2 = new int;
    //     *num2 = 4;
    //     num1 = num2;
    // }

    // if(num1 != nullptr)
    // {
    //     std::cout << *num1 << '\n';
    // }
    // else
    // {
    //     std::cout << "nullptr\n";
    // }
    // 
    // delete num1;

    // What will be the output?
    
    // int *num3 = nullptr;
    // {
    //     int* num4;
    //     *num4 = 4;
    //     num3 = num4;
    // }

    // if(num3 != nullptr)
    // {
    //     std::cout << *num3 << '\n';
    // }
    // else
    // {
    //     std::cout << "nullptr\n";
    // }

    // What will be the output?

}
