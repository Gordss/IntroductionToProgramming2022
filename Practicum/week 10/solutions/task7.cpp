#include<iostream>

using namespace std;

int main() {
    int n;
    double sum = 0.0; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        double a;
  
        for (int j = 0; j < n; j++) {
        cin >> a;
            if (i > j) {
                sum += a;
            }
        }
    }
  
    cout << sum << endl;


    return 0;
}
