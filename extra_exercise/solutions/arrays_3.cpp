#include <iostream>
#include <cstring>

bool isInBound(int n, int posX, int posY)
{
    return posX >= 0 && posX < n &&
           posY >= 0 && posY < n;
}

bool validatePath(bool** maze, int n, char* path)
{
    int startX = n - 1, startY = n - 1;
    int pathLen = strlen(path) - 1;
    while(isInBound(n, startX, startY) && maze[startX][startY] == true && pathLen >= 0)
    {
        switch (path[pathLen])
        {
            case 'E': startY--;break; // go left
            case 'W': startY++;break; // go right
            case 'N': startX++;break; // go bottom
            case 'S': startX--;break; // go top

            default:
                throw "Invalid direction!";
                break;
        }
        pathLen--;
    }

    return pathLen == -1;
}

int main()
{
    int n;
    std::cin >> n;

    bool** maze = new bool*[n];
    for(int i = 0; i < n; i++)
    {
        maze[i] = new bool[n];
        for(int j = 0; j < n; j++)
        {
            std::cin >> maze[i][j];
        }
    }

    int x, y; 
    char* path = new char[n * n + 1];
    std::cin >> path;

    std::cout << std::boolalpha << validatePath(maze, n, path) << '\n';

    for(int i = 0; i < n; i++)
    {
        delete[] maze[i];
    }
    delete[] maze;
    delete[] path;

    return 0;
}