#include <bits/stdc++.h>

int sumOfMaxMin(int arr[], int n) {
  if (n == 0) {
    return 0; // Return 0 for an empty array
  }

  int maxElement = INT_MIN;
  int minElement = INT_MAX;

  for (int i = 0; i < n; i++) {
    maxElement = max(maxElement, arr[i]);
    minElement = min(minElement, arr[i]);
  }

  return maxElement + minElement;
}
