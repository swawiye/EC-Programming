#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    // int length = 8;
    // int width = 5;
    int length;
    int width;
    string fName, lName;

    //Prompt user for input
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter your first name: ";
    cin >> fName;
    cout << "Enter your last name: ";
    cin >> lName;

    // Calculate the area
    int area = length * width;

    // Output the area of the rectangle
    cout << "The area of the rectangle is: " << area << endl;
    cout << "Your first name is: " << fName << endl;
    cout << "Your last name is: " << lName << endl;

    return 0;
}