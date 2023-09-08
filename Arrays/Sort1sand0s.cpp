#include <iostream>
using namespace std;
int main() {
  int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
  int arrSize = 8;

  int count0 = 0;
  int count1 = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] == 0) {
      count0++;
    } else {
      count1++;
    }
  }

  for (int i = 0; i < arrSize; i++) {
    if (i < count0) {
      arr[i] = 0;
    } else {
      arr[i] = 1;
    }
  }

  cout << "Sorted array (0s and 1s): ";
  for (int i = 0; i < arrSize; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}