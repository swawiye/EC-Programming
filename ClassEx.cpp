#include <iostream> // header file library
using namespace std;
int main() 
{
    // Variable declaration
    string fName, lName;

    // Prompt the user for input
    cout << endl;
    cout << "Enter your first name: ";
    cin >> fName; //first name picked and stored here

    cout << "Enter your last name: ";
    cin >> lName; //last name picked and stored here

    // Output statements in the console
    cout << "Hello, " << fName << " " << lName << "!" << endl;

    cout << "Welcome to the wonderful world of C++!\n"; 
    cout << "This is my first C++ output statement" << endl; 
    cout << "Soon, I will learn how to input data into my program" << endl; 
    return 0; // indicate that the program ended successfully
}