#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;

  for (int i = 0; i < number; i++) {
    for (int j = 0; j < (2*number); j++) {
      if (i >= j)
        cout << "*";
      else
        cout << " ";
      if (i >= (2*number-1)-j)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < number; i++) {
    for (int j = 0; j < (2*number); j++) {
      if(i + j <= number-1)
        cout << "*";
      else 
        cout << " ";
      if((i+number) <= j)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
