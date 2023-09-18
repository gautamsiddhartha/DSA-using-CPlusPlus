class Solution {
public:
  int findPivotIndex(vector<int> &arr) {
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e) {
      if (e == s) {
        return s;
      }
      int mid = s + (e - s) / 2;

      if (mid + 1 < n && arr[mid] > arr[mid + 1]) {
        return mid;
      } else if (mid - 1 >= 0 && arr[mid] < arr[mid - 1]) {
        return mid - 1;
      } else if (arr[s] == arr[mid] && arr[mid] == arr[e]) {
        if (arr[s] > arr[s + 1]) {
          return s;
        }
        s++;
        if (arr[e] < arr[e - 1]) {
          return e - 1;
        }
        e--;
      } else if (arr[s] <= arr[mid]) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return -1; // No pivot found (array is not rotated)
  }

  int binarySearch(vector<int> &arr, int s, int e, int target) {
    while (s <= e) {
      int mid = s + (e - s) / 2;
      if (arr[mid] == target) {
        return mid;
      } else if (arr[mid] < target) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return -1; // Target not found
  }

  int search(vector<int> &nums, int target) {
    int pivotIndex = findPivotIndex(nums);

    // If no pivot is found, the array is sorted, and we can perform a regular
    // binary search.
    if (pivotIndex == -1) {
      return binarySearch(nums, 0, nums.size() - 1, target);
    }

    // Determine which part of the array the target belongs to and perform a
    // binary search accordingly.
    if (target >= nums[0] && target <= nums[pivotIndex]) {
      return binarySearch(nums, 0, pivotIndex, target);
    } else {
      return binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
    }
  }
};
