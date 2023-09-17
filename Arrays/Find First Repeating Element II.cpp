#include <iostream>
using namespace std;

int firstRepeated(int a[], int n) {
  const int MAX = 100001; // Assuming the maximum value of elements in the array
  int index[MAX];

  // Initialize the index array with -1
  for (int i = 0; i < MAX; i++) {
    index[i] = -1;
  }

  int minIndex = n + 1; // Initialize minIndex to a value greater than n

  for (int i = 0; i < n; i++) {
    if (index[a[i]] != -1) {
      // If the element has already occurred, update minIndex if needed
      if (index[a[i]] < minIndex) {
        minIndex = index[a[i]];
      }
    } else {
      // Update the index of the current element
      index[a[i]] = i;
    }
  }

  if (minIndex == n + 1) {
    // No repeating element found
    return -1;
  } else {
    // Add 1 to convert to 1-based indexing and return the result
    return minIndex + 1;
  }
}

int main() {
  int n = 7;
  int arr[] = {1, 5, 3, 4, 3, 5, 6};

  int result = firstRepeated(arr, n);

  if (result != -1) {
    cout << "First repeating element found at position: " << result << endl;
  } else {
    cout << "No repeating element found" << endl;
  }

  return 0;
}
