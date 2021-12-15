#include <iostream>
#include <chrono>
#include <ctime>
#include <stdlib.h>

using Clock = std::chrono::steady_clock;
using std::chrono::duration_cast;
using std::chrono::time_point;
using std::chrono::milliseconds;

#define ARR_SIZE 1024
#define WITH_PRINT 0
#define MIN_ELEMENT -100
#define MAX_ELEMENT 100

void printArray(long *array, size_t size)
{
    std::cout << "\n----------------------------------------\n";
    for(size_t i = 0; i < ARR_SIZE; i++)
    {
        std::cout << array[i] << ' ';
    }

    std::cout << "\n----------------------------------------\n";
}

int main()
{
    srand(time(NULL));

    // init the array
    long elements[ARR_SIZE];
    for(size_t i = 0; i < ARR_SIZE; i++)
    {
        // get random element
        long randomElement = MIN_ELEMENT + rand() % ((MAX_ELEMENT + 1) - MIN_ELEMENT);
        elements[i] = randomElement;
    }

    if(WITH_PRINT)
    {
        printArray(elements, ARR_SIZE);
    }
    
    // set start timer
    time_point<Clock> startTime = Clock::now();

    // sort elements
    for(int i = 0; i < ARR_SIZE - 1; i++)
    {
        for(int j = 0; j < ARR_SIZE - i - 1; j++)
        {
            if(elements[j] > elements[j + 1])
            {
                long temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }

    if(WITH_PRINT)
    {
        printArray(elements, ARR_SIZE);
    }

    // set end timer
    time_point<Clock> finishTime = Clock::now();
    // get the diff
	milliseconds diff = duration_cast<milliseconds>(finishTime - startTime);
	std::cout << diff.count() << " ms\n";

    return 0;
}
