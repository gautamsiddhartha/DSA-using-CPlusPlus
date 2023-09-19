bool isPossible(vector<int> &arr, int n, int m, int mid) {
  int studentCount = 1;
  int pageSum = 0;

  for (int i = 0; i < n; i++) {
    if (pageSum + arr[i] <= mid) {
      pageSum += arr[i];
    } else {
      studentCount++;

      if (studentCount > m || arr[i] > mid) {
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
}

int findPages(vector<int> &arr, int n, int m) {
  int s = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  int e = sum;
  int ans = -1;

  while (s <= e) {
    int mid = (s + e) / 2; // Calculate mid correctly
    if (isPossible(arr, n, m, mid)) {
      ans = mid; // Store the ans
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}
