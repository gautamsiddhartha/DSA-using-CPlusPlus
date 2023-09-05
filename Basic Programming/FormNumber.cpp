#include <iostream>
using namespace std;

int formNumber() {
  int formedNumber = 0;
  char choice;

  while (true) {
    int digit;
    cout << "Enter a digit (0-9): ";
    cin >> digit;

    if (digit >= 0 && digit <= 9) {
      formedNumber = formedNumber * 10 + digit;
    } else {
      cout << "Invalid digit! Please enter a digit between 0 and 9." << endl;
    }

    cout << "Do you want to enter another digit? (y/n): ";
    cin >> choice;

    if (choice != 'y' && choice != 'Y') {
      break;
    }
  }

  return formedNumber;
}

int main() {
  int formedNumber = formNumber();

  cout << "The formed number is: " << formedNumber << endl;

  return 0;
}
