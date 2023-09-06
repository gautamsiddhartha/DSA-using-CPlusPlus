#include <cmath>
#include <iostream>
using namespace std;

int binaryToDec(int n) {
  int decimal = 0;
  int i = 0;
  while (n > 0) {
    int bit = n % 2;
    decimal = bit * pow(2, i++) + decimal;
    n = n / 10;
  }
  return decimal;
}

int main() {
  int n;
  cin >> n;
  int binary = binaryToDec(n);
  cout << binary << endl;
}