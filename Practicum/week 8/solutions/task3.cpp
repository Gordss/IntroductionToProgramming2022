#include <iostream>

using namespace std;

double getAverage(int n)
{
    int currNum;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> currNum;
        sum += currNum;
    }

    if (n == 0) {
        return 0;
    }
    
    return sum / n;
}

int main()
{
    int n;
    cin >> n;
    cout << getAverage(n) << endl;
    return 0;
}
