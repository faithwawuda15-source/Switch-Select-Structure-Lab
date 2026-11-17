#include <iostream>
using namespace std;

int main() {
    int numbers[7] = {45, 34, 24, 57, 78, 69, 48};

    int maximum = numbers[0];
    int minimum = numbers[0];

    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }

        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }

    cout << "Maximum value = " << maximum << endl;
    cout << "Minimum value = " << minimum << endl;

    return 0;
}
