# include <iostream>
using namespace std;
int main()
{
    char choice;
    int quantity;
    int price;
    int subtotal;

    cout <<"=====Fast-food terminal menu=====" <<"\t\t\n";
    cout <<"'B' for Burger (500 Ksh)" <<"\t\t\n";
    cout <<"'P' for Pizza (800 Ksh)" <<"\t\t\n";
    cout <<"'F' for Fries (150 Ksh)" <<"\t\t\n";
    cout <<"'D' for Drinks (100 Ksh)" <<"\t\t\n";

    cout <<"Enter your preffered choice : ";
    cin >>choice;
    
    switch (choice)
    {
    case 'B':
    price = 500;
    cout <<"Enter quantity : ";
    cin >>quantity;
    subtotal = price * quantity;
    cout <<"Amount to be paid : " << subtotal ;
    break;

    /*If the break statement were omitted here,
      the program would continue into the Fries case.
      It would then ask for the quantity of fries and
      execute the Fries calculations as well.
      This is called fall-through.*/
      
    case 'P':
    price = 800;
    cout <<"Enter quantity :";
    cin >>quantity;
    subtotal = price * quantity;
    cout <<"Amount to be paid : " << subtotal;
    break;

    case 'F':
    price = 150;
    cout <<"enter quantity : ";
    cin >>quantity;
    subtotal = price * quantity;
    cout <<"Amount to be paid : " <<subtotal;
    break;

    case 'D':
    price = 100;
    cout <<"Enter quantity ;";
    cin >>quantity;
    subtotal = price * quantity;
    cout <<"Amou to be paid : " <<subtotal;
    break;

    default:
    cout <<"Invalid Selection. Please enter a valid selection";
    }
    return 0;
}