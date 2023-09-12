#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Define a 2x2 matrix structure
struct Matrix {
  long long mat[2][2];
};

// Function to multiply two matrices
Matrix multiply(Matrix A, Matrix B) {
  Matrix result;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      result.mat[i][j] = 0;
      for (int k = 0; k < 2; k++) {
        result.mat[i][j] =
            (result.mat[i][j] + (A.mat[i][k] * B.mat[k][j]) % MOD) % MOD;
      }
    }
  }
  return result;
}

// Function to raise a matrix to the power of n
Matrix matrixPower(Matrix base, int n) {
  Matrix result;
  result.mat[0][0] = 1;
  result.mat[0][1] = 0;
  result.mat[1][0] = 0;
  result.mat[1][1] = 1;

  while (n > 0) {
    if (n % 2 == 1) {
      result = multiply(result, base);
    }
    base = multiply(base, base);
    n /= 2;
  }
  return result;
}

// Function to calculate the N'th Fibonacci number
int fibonacciNumber(int n) {
  if (n <= 2) {
    return 1;
  }

  Matrix base;
  base.mat[0][0] = 1;
  base.mat[0][1] = 1;
  base.mat[1][0] = 1;
  base.mat[1][1] = 0;

  Matrix result = matrixPower(base, n - 2);

  return (result.mat[0][0] + result.mat[0][1]) % MOD;
}
