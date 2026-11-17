#include <iostream>
using namespace std;

int main() 
{
    int myArray[10] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};

    cout << "Array elements in reverse order:" << endl;

    for (int i = 9; i >= 0; i--) 
    {
        cout << myArray[i] << " ";
    }

    cout << endl;

    return 0;
}
