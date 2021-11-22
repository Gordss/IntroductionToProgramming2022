#include<iostream>
#define MAX_ARR_SIZE 1024

int main() {

    int n;
    int elements[MAX_ARR_SIZE];

    do {
        std::cin >> n;
    }while(n < 0 || n > MAX_ARR_SIZE);

    std::cout << "OK, continue with elements!\n";

    for(int i = 0; i < n; i++)
    {
        std::cin >> elements[i];
    }

    /*
        Bubble Sort

        4 3 2  i = 0, j = 0
        3 4 2  i = 0, j = 1
        3 2 4 
        3 2 4  i = 1, j = 0
        2 3 4  i = 1, j = 1
    */

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(elements[j] < elements[j + 1])
            {
                int temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }

    // sort elements
    // remove repeating element
    // 13 5 5 5 4 4 1 -3 -17
    //    | |   |
    //    i j   counter

    // 13 5 4 4 1 -3 -17

    // 13 5 4 1 -3 -17  
    for(int i = 0; i < n - 1; i++)
    {
        // elements[i]
        int counter = i + 1;
        while(elements[counter] == elements[i])
        {
            counter++;
        }

        int elementsToMove = (counter - i - 1);

        if(elementsToMove != 0)
        {
            for(int j = i + 1; j < n - elementsToMove; j++)
            {
                elements[j] = elements[j + elementsToMove];
            }

            n = n - elementsToMove;
        }
    }


    for(int i = 0; i < n; i++)
    {
        std::cout << elements[i] << ' ';
    }

    std::cout << '\n';

    return 0;
}