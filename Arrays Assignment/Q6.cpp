#include <iostream>
using namespace std;

int main() {
    double numbers[5];
    double sum = 0;
    double average;

    // Input five numbers
    cout << "Enter five numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Calculate the sum
    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i];
    }

    // Calculate the average
    average = sum / 5;

    // Display the results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
