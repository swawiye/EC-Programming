// Calculation Menu
#include <iostream>

using namespace std;

int main()
{
    // declare the variables
    int radius, width, length, base, height;
    float area;
    const int pi=3.142;
    string option;

    cout << "Choose the operation you'd like to carry out: " << endl;
    cout << "Calculate the area of a circle(C) /rectangle(R) /triangle(T) [to quit enter 'Q']: ";
    cin >> option;

    if (option != "Q") 
    {
        switch(option[0]) {
            case 'C':
                cout << "pi = 3.142" << endl;
                cout << "Enter the radius of the circle: " <<endl;
                cin >> radius;
                area = pi*radius*radius;
                cout << "The area of the circle is : " << area <<endl;
                break;
            case 'R':
                cout << "Enter the width of the rectangle: " <<endl;
                cin >> width;
                cout << "Enter the length of the rectangle: " <<endl;
                cin >> length;
                area = length*width;
                cout << "The area of the rectangle is : " << area <<endl;
                break;
            case 'T':
                cout << "Enter the base of the triangle: " <<endl;
                cin >> base;
                cout << "Enter the height of the triangle: " <<endl;
                cin >> height;
                area = 0.5*base*height;
                cout << "The area of the triangle is : " << area <<endl;
                break;
            default:
                cout << "Choose a valid option" << endl;
                break;
        }
    } else
    {
        cout << "You have quit the system!" << endl;
    }

    return 0;
}
