#include <iostream>
using namespace std;

int main() {

  int i = 5;
  int j = 5;

  for (int row = 0; row < i; row++) {
    for (int col = 0; col < row + 1; col++) {
      cout << col + 1;
    }
    cout << endl;
  }
}