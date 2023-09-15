int count(vector<int> &arr, int n, int x) {
  // formula
  // ex -> [1,2,3,3,3,3,5]
  // find first index i.e, 2
  // find last index -> i.e, 5
  // Total no of occurence = (last index - first index ) + 1
  // i.e, -> 5-2+1 = 3+1 =4
  // Code -
  //  Initialize variables to store the first and last index of 'x'.
  int firstIndex = -1;
  int lastIndex = -1;

  // Binary search to find the first occurrence of 'x'.
  int left = 0;
  int right = n - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == x) {
      firstIndex = mid;
      right = mid - 1; // Continue searching on the left side.
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  // If 'x' is not found, return 0 occurrences.
  if (firstIndex == -1) {
    return 0;
  }

  // Binary search to find the last occurrence of 'x'.
  left = 0;
  right = n - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == x) {
      lastIndex = mid;
      left = mid + 1; // Continue searching on the right side.
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  // Calculate the total number of occurrences.
  int totalCount = lastIndex - firstIndex + 1;

  return totalCount;
}
