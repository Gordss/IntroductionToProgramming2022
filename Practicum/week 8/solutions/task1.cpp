#include <iostream>

using namespace std;

/* 
int factRec(int n)
{
    if (n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
*/

int fact(int n)
{
    int product = 1;
    for (int i = 2; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
