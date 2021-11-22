#include<iostream>
#include<cmath>

int main(){

    int a, b;

    try {
        std::cin >> a >> b;

        if(a > b)
        {
            throw "Invalid interval! Should be [a, b]";
        } 
    }
    catch(const char* error){
        std::cout << error << '\n';
        return 0;
    }


    long resultSum = 0;

    for(int currentNumber = a; currentNumber <= b; currentNumber++)
    {
        // check if n is funny number
        // sum of digits

        // fabs() <- float abs double, float
        // abs()  <- int, long, long long, short
        int digitsSum = 0;
        int curNumberCopy = std::abs(currentNumber);
        while( curNumberCopy > 0)
        {
            digitsSum += curNumberCopy % 10;
            curNumberCopy /= 10;
        }


        bool isFunny = true;

        while( digitsSum > 0)
        {
            int lastDigit = (digitsSum % 10) % 2;
            int secondDigit = (digitsSum /10 % 10) % 2;

            if(digitsSum < 10)
            {
                break;
            }

            if(lastDigit == secondDigit)
            {
                isFunny = false;
                break;
            }

            digitsSum /= 10;
        }

        if(isFunny)
        {
            resultSum += currentNumber;
            std::cout << currentNumber << ' ';
        }
    }

    std::cout << '\n' << "Result sum: " << resultSum << '\n';

    return 0;
}