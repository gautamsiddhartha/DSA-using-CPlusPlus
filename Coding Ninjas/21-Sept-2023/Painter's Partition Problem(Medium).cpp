bool isPossible(vector<int> &arr, int n, int k, int mid) {
  int timeSum = 0;
  int c = 1;
  for (int i = 0; i < n; i++) {
    if (arr[i] > mid) {
      return false;
    }
    if (arr[i] + timeSum > mid) {
      c++;
      timeSum = arr[i];
      if (c > k) {
        return false;
      }
    } else {
      timeSum += arr[i];
    }
  }
  return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
  int start = 0;
  int end = 0;
  int n = boards.size();

  for (int i = 0; i < n; i++) {
    end += boards[i];
  }
  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (isPossible(boards, n, k, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}