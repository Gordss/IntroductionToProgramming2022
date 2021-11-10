#include <iostream>

int main(){

    int n;
    std::cin >> n;

    for(int i = 1; i < n; i++)
    {
        int sum = 0;
        // x, max(sqrt(x))
        for(int x = 1; x <= i / 2; x++){
            if(i % x == 0){
                // x е делител на i
                // sum = sum + x;
                sum += x;
            }
        }

        if( sum == i)
        {
            // намерили сме перфекто число
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}