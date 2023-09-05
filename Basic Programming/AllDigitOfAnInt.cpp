#include <iostream>
using namespace std;

void PrintDigits(int n) {
  while (n > 0) {
    int digit = n % 10;
    n = n / 10;
    cout << "The digit is: " << digit << endl;
  }
}

int main() {
  int x;
  cout << "Enter a number: " << endl;
  cin >> x;

  if (x <= 0) {
    cout << "Please enter a positive number." << endl;
  } else {
    cout << "Digits of the number are:" << endl;
    PrintDigits(x);
  }

  return 0;
}
