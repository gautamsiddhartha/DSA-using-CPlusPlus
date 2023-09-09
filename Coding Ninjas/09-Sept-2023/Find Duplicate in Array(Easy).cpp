#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n) {
  // Create an array to keep track of visited elements
  std::vector<bool> visited(n, false);

  // Traverse the array
  for (int i = 0; i < n; ++i) {
    // If the element is visited, it's a duplicate
    if (visited[arr[i]]) {
      return arr[i];
    }
    // Mark the element as visited
    visited[arr[i]] = true;
  }

  // No duplicate found (this should not happen if the input is valid)
  return -1;
}