#include <iostream>
#define MAX_SIZE 1024

int main()
{
    char symbols[MAX_SIZE][MAX_SIZE];

    /*
    2 3 
    a b c

    d e f 
    
    */

    int n, m;

    std::cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cin >> symbols[i][j];
        }
    }

    std::cout << "\n\n";

    // std::cout << symbols << '\n'; 
    // std::cout << *(*(symbols + 0) + 1) << '\n'; // returns the first row 

    // *(symbols + 0)       -> symbols[0]
    // ((*symbols + 0) + 1) -> symbols[0][1]

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            // symbols[i][j]
            std::cout << *(*(symbols + i) + j) << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}
