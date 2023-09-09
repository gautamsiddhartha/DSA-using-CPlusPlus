vector<int> rotateArray(vector<int> arr, int k) {
  int n = arr.size();
  std::vector<int> result(n);

  for (int i = 0; i < n; i++) {
    int newIndex = (i + k) % n;
    result[i] = arr[newIndex];
  }

  return result;
}
