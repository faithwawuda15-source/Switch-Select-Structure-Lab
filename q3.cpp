# include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;
    /*Error: case >=70 - condition can't
     be used directly as a case label.
     case label must use a constant value */
     /*Error; case 60 to 69 - Ranges are not valid in 
     switch syntax sinc C++ does not support ranges in case form.*/

    switch (score/10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
        cout <<"Excellent";
        break;

        case 6:
        cout <<"Good";
        break;

        default:
        cout <<"Fail";

    }
    return 0;
}