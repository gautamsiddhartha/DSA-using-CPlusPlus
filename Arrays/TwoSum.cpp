#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;

    int arrSize = 4;

    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "The two numbers that add up to " << target << " are: " << arr[i] << " and " << arr[j] << endl;
                return 0;
            }
        }
    }

    cout << "No two numbers found that add up to " << target << endl;

    return 0;
}