#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum = 0;

    // Input ten numbers
    cout << "Enter 10 integers:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display in ascending index order
    cout << "\nElements in ascending index order:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    // Display in descending index order
    cout << "\nElements in descending index order:" << endl;

    for (int i = 9; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    // Calculate the sum
    for (int i = 0; i < 10; i++) {
        sum = sum + numbers[i];
    }

    cout << "\nSum of the array elements = " << sum << endl;

    return 0;
}
