int findDuplicate(vector<int> &nums) {
  // 1 <= nums[i] <= n
  /*
    // METHOD 1
        // Create an array to keep track of visited elements
    std::vector<bool> visited(n, false);

    // Traverse the array
    for (int i = 0; i < n; ++i) {
        // If the element is visited, it's a duplicate
        if (visited[arr[i]] == true) {
            return arr[i];
            break;
        }
        // Mark the element as visited
        visited[arr[i]] = true;
*/
  /*
  //METHOD II

  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size()-1; i++) { // Iterate up to the
second-to-last element if (nums[i] == nums[i + 1]) { return nums[i];
      }
  }
  return -1; // Return -1 if no duplicates are found

*/
  // METHOD IIIO pOSITIONING
  while (nums[0] != nums[nums[0]]) {
    swap(nums[0], nums[nums[0]]);
  }
  return nums[0];
  // TC: O(N)
  // SC: O(1)
}