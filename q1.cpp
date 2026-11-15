# include <iostream>
using namespace std;
int main()
{
    int choice;
    float r, l, w, b, h, Area;
    // r=radius, l=legnth, w=width, b=base, h=height
    cout <<"\tGeometry Computation Tool\t"<<"\n";
    cout <<"1. Calculate Area of a Circle"<<"\n";
    cout <<"2. Calculate Area of a Rectangle"<<"\n";
    cout <<"3.Calculate Area of a Triangle"<<"\n";

    cout <<"Enter your choice (1-3)"<<"\n";
    cin >>choice;

    switch (choice)
    {
        case 1:
        cout <<"Enter the radius of a circle"<<"\n";
        cin >>r;
        Area = 3.14 * r *r;
        cout <<"Area of a circle = "<<Area <<"\n";
        break;

        case 2:
        cout <<"Enter the length of a rectangle"<<"\t";
        cin >>l;
        cout <<"Enter the width of a rectangle"<<"\n";
        cin >>w;
        Area = l * w;
        cout <<"Area of a rectangle = "<< Area <<"\n";
        break;

        case 3:
        cout <<"Enter the base of the triangle" <<"\n";
        cin >>b;
        cout <<"Enter the height of the triangle" <<"\n";
        cin >>h;
        Area = 0.5 * b *h;
        cout <<"Area of triangle = " <<Area <<"\n";
        break;

        default:
        cout <<"Invalid Selection. Please choose either 1,2 or 3." <<"\n";
    }

     return 0;
}