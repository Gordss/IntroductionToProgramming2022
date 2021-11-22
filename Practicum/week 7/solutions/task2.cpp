#include <iostream>

int main()
{
    // sum of devisors
    int a, b;

    std::cin >> a >> b;

    int resultCounter = 0;

    for(int currentNumber = a; currentNumber <= b; currentNumber++)
    {
        int numberOfDevisors = 0;
        for(int i = 2; i <= currentNumber / 2; i++)
        {
            if(currentNumber % i == 0) {
                // we have found devisor
                numberOfDevisors++;
            }
        }

        if(numberOfDevisors < 2)
        {
            continue;
        }
        // if numberOfDevisors is >= 2
        bool isPrime = true;
        for(int i = 2; i <= numberOfDevisors / 2; i++)
        {
            if(numberOfDevisors % i == 0) {
                // we have found devisor
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            resultCounter++;
            std::cout << currentNumber << ' ';
        }
    }

    std::cout << '\n' << resultCounter << '\n';    

    return 0;
}