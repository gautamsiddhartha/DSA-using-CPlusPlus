#include <iostream>
#include <unordered_map>
using namespace std;
int firstRepeated(int arr[], int n) {
  /*
    for(int i=0; i<n;i++){
      bool isRepeated = false;
      for(int j = i+1 ; j<n ;j++){
        if(arr[i]==arr[j]){
          isRepeated = true;
          return i+1;
        }
      }
    }
    return -1;
    */

  // optimized Solution
  unordered_map<int, int> hash;
  for (int i = 0; i < n; i++) {
    hash[[arr[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if(hash[[arr[i]] > 1){
      return i + 1;
    }
  }
  return -1;
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