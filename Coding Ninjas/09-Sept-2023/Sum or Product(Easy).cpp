#include <bits/stdc++.h>
const long long MOD = 1e9 + 7;

long long int sumOrProduct(long long int n, long long int q) {
  if (q == 1) {
    // Calculate the sum of integers from 1 to n
    long long int sum = (n * (n + 1)) / 2;
    return sum % MOD;
  } else if (q == 2) {
    // Calculate the product of integers from 1 to n
    long long int product = 1;
    for (long long int i = 1; i <= n; i++) {
      product = (product * i) % MOD;
    }
    return product;
  }
  return -1; // Invalid query
}