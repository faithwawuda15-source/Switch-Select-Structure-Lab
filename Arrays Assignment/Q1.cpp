#include <iostream>
using namespace std;

int main() 
{
    double numbers[6] = {12.25, 32.50, 16.90, 23, 45.68, 50.60};

    int i = 0;

    cout << "Array elements:" << endl;

    while (i < 6) {
        cout << numbers[i] << endl;
        i++;
    }

    return 0;
}
