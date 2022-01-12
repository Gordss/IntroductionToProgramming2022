#include<iostream>
#define MAX 64

using namespace std;


bool outOfMapCheck(int n, int m, int x, int y){
    return x < 0 || y < 0 || x >= n || y>= m ;
}

bool findPath(char lab[][MAX], int n, int m, int startX, int startY, int finalX, int finalY){
    
    if(outOfMapCheck(n, m, startX, startY) || lab[startX][startY] == '#'){
        return false;
    }

    if(startX == finalX && startY == finalY && lab[startX][startY] == '.'){
        return true;
    }
    
    // we should mark the place where we've been to prevent loops
    lab[startX][startY] = '#';
    return (findPath(lab, n, m, startX + 1, startY, finalX, finalY) ||
            findPath(lab, n, m, startX - 1, startY, finalX, finalY) ||
            findPath(lab, n, m, startX, startY + 1, finalX, finalY) ||
            findPath(lab, n, m, startX, startY - 1, finalX, finalY));
}

int main(){

    char lab[MAX][MAX];
    int n, m, x, y;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> lab[i][j];
        }
    }

    cout << "Input position coorinates:" << endl << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    /* if we don't count as programmers :) */
    x--;
    y--;
    cout << "Path found? " << boolalpha << findPath(lab, n, m, 0, 0, x, y) << endl;
    return 0;
}