#include <iostream>
using namespace std;

int main() {
    int numbers[7] = {45, 34, 24, 57, 78, 69, 48};

    int i = 0;
    double answer;

    while (i < 7) {
        answer = static_cast<double>(numbers[i]) / 7;

        cout << numbers[i] << " divided by 7 is "
             << answer << endl;

        i++;
    }

    return 0;
}
