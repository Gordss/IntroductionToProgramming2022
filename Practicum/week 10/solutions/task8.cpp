#include<iostream>

using namespace std;

int main() {
    int n, answer = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            if(num > 2 && i <= n - j - 1) { //if(i <= n - j - 1 && isPrime(num))
                bool isPrime = true;
                int k = 2;
                do
                {
                    if (num % k == 0)
                    {
                        isPrime = false;
                    }
                    k++;
                } while (k * k <= num && isPrime);
                
                if (isPrime)
                {
                    answer++;
                }
                
            }
            if(num == 2) {
                answer++;
            }
        }
        
    }

    cout << answer;
    

    return 0;
}
