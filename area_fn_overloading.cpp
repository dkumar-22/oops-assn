#include<iostream>
using namespace std;
#define pi 3.14159

double area(double b,double h)
{
    return 0.5*b*h;
}

double area(double r)
{
    return pi*r*r;
}

int main()
{
    double b,h,r;int choice;
    do
    {
        cout<<"\n\n1. Area of triangle\n2. Area of circle\n3. Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"\nEnter base of the triangle: ";
                cin>>b;
                cout<<"\nEnter height of the triangle: ";
                cin>>h;
                cout<<"\nArea of the triangle: "<<area(b,h)<<"sq units.";
                break;
            }

            case 2:
            {
                cout<<"\nEnter the radius of the circle: ";
                cin>>r;
                cout<<"\nArea of the circle: "<<area(r)<<"sq units.";
                break;
            }
            case 3:
            {
                exit(0);
            }

            default:cout<<"\nWrong choice entered.";
        }
    } while (choice);
    cout<<"\n\n";
    return 0;
}
