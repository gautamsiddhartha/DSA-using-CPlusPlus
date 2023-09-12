#include <bits/stdc++.h>
vector<int> separateNegativeAndPositive(vector<int> &nums) {
  // ASSUMPTION - DO NOT NEED TO THINK ABOUT ORDER OF THE ELEMENTS OF ARRAY
  //  ALL NEGATIVE TO LEFT AND NON NEGATIVE TO RIGHT
  //  DUTCH NATIONAL FLAG ALGO (TWO POINTER APPROACH)
  int l = 0, h = nums.size() - 1;
  while (l < h) {
    if (nums[l] < 0) {
      l++;
    } else if (nums[h] > 0) {
      h--;
    } else {
      swap(nums[l], nums[h]);
      ;
    }
  }
  return nums;
}
// TC: O(N)
// SC: O(1)