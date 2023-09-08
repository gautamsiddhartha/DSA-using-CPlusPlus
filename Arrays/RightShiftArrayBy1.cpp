#include <iostream>
using namespace std;

int main() {
    int n, arr[10], temp;
    cout << "ENTER THE SIZE OF ARRAY - ";
    cin >> n;
    

    cout << "ENTER THE ELEMENTS OF THE ARRAY - ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Rotate the array to the right by one position
    temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    // Display the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}