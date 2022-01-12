#include<iostream>

double func(int n, double x){
    if(n == 2){
        return x + 2;
    }

    return func(n-1, x)* x + n;    
}

int main(){

    double x;
    int n;
    std::cin >> n >> x;

    std::cout << func(n, x) << std::endl;
    return 0;
}