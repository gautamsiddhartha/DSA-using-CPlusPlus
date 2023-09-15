#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
      return mid; // Found the key, return its index
    } else if (arr[mid] < key) {
      start = mid + 1; // Key is in the right half
    } else {
      end = mid - 1; // Key is in the left half
    }
  }

  return -1; // Key not found in the array
}

int main() {
  int arr[] = {2, 4, 7, 10, 15, 23, 45, 56};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 10;

  int result = binarySearch(arr, size, key);

  if (result != -1) {
    cout << "Element found at index " << result << std::endl;
  } else {
    cout << "Element not found in the array" << std::endl;
  }

  return 0;
}
