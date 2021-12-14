#include <iostream>

using namespace std;

long long pow(int num, int power)
{
    long long ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans *= num;
    }
    return ans;
}

long long getNum(int x, int n)
{
    return pow(x, pow(n, n));
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << getNum(x, n) << endl;
    return 0;
}
/*
4 3
18014398509481984
*/
