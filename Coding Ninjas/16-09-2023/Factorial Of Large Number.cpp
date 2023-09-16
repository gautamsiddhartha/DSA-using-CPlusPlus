#include <bits/stdc++.h>
using namespace std;

string calculateFactorial(int N) {
  // Handle the base cases
  if (N == 0 || N == 1) {
    return "1";
  }

  // Initialize an array to store the result
  vector<int> result;
  result.push_back(1); // Initialize the result as 1

  // Calculate factorial
  for (int i = 2; i <= N; i++) {
    int carry = 0;
    for (int j = 0; j < result.size(); j++) {
      int product = result[j] * i + carry;
      result[j] = product % 10;
      carry = product / 10;
    }
    while (carry > 0) {
      result.push_back(carry % 10);
      carry /= 10;
    }
  }

  // Convert the result array to a string
  string factorial;
  for (int i = result.size() - 1; i >= 0; i--) {
    factorial += to_string(result[i]);
  }

  return factorial;
}
