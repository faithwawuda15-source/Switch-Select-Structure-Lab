# include <iostream>
using namespace std;
int main()
{
    char letter;
    cout <<"Enter a letter" <<"\n";
    cin >>letter;

    switch (letter)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':

        cout <<"The letter is a Vowel" <<"\n";
        break;

        default:
        cout <<"The letter is a constant" <<"\n";

    }
return 0;
}