#include <iostream>
using namespace std;

void printSum(int arr[][3], int i, int j) {

  cout << "Prining SUM " << endl;
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum = sum + arr[i][j];
    }
    cout << endl;
    cout << sum << " ";
  }
}

int main() {
  int arr[3][3];
  // taking input -> row wise
  cout << "enter the elements " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  // print
  cout << "PRINTED ARRAYS " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  printSum(arr, 3, 3);

  return 0;
}