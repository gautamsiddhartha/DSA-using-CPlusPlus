#include <bits/stdc++.h>

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
  vector<vector<int>> result;

  // Sort the input array
  sort(arr.begin(), arr.end());

  for (int i = 0; i < n - 2; i++) {
    if (i == 0 || (i > 0 && arr[i] != arr[i - 1])) {
      int left = i + 1;
      int right = n - 1;
      int target = K - arr[i];

      while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
          result.push_back({arr[i], arr[left], arr[right]});
          while (left < right && arr[left] == arr[left + 1]) {
            left++;
          }
          while (left < right && arr[right] == arr[right - 1]) {
            right--;
          }

          left++;
          right--;
        } else if (sum < target) {
          left++;
        } else {
          right--;
        }
      }
    }
  }

  return result;
}
