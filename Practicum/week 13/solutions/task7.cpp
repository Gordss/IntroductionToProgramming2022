#include<iostream>
#include<cstring>

using namespace std;

// exponential 
int fib(int n) {
    if (n < 0)
    {
        cout << "We only work with positive n!" << endl;
        return -1;
    }
    
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}


int fib1Util(int fn_1, int fn, int n, int x) {
    if (n == x)
    {
        return fn_1;
    }
    
    return fib1Util(fn, fn_1 + fn, n, x + 1);
} 


int fib1(int n) {
    return fib1Util(0, 1, n, 0);
}

// O(n) solution with matrices
void power(int F[2][2], int n); 
  
int fib2(int n) { 
  int F[2][2] = {{1,1}, {1,0}}; 
  if (n == 0) {
      return 0;
    } 
  power(F, n - 1); 
  
  return F[0][0]; 
} 
  
void multiply(int F[2][2], int M[2][2]) 
{ 
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0]; 
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1]; 
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0]; 
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1]; 
  
  F[0][0] = x; 
  F[0][1] = y; 
  F[1][0] = z; 
  F[1][1] = w; 
} 
  
void power(int F[2][2], int n) 
{ 
  int i; 
  int M[2][2] = {{1,1},{1,0}}; 
  
  for (i = 2; i <= n; i++) {
      multiply(F, M); 
  }
} 

// O(log(n)) solution exists

int main() {
    cout << fib(45) << endl << endl;;
    cout << fib1(45) << endl;
    return 0;
}