#include<iostream>

using namespace std;

int main(){

    int n, m, y, n_copy, counter = 0;
    cin >> n >> m >> y;
    n_copy = n;
    while(n_copy >= m){
        n_copy -= m;
        counter++;
        if(n_copy * 2 == n && y != 0){
            n_copy /= y;
        }
    }

    cout << n_copy << endl;
    cout << counter << endl;

    return 0;
}
