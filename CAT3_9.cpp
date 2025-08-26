// Movie tickets
#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string movieType;
    float ticketPrice;

    cout << "---CINEMA TICKET PRICING---" << endl;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter movie type (regular or 3D): ";
    cin >> movieType;

    if (age < 12) {
        if (movieType == "regular") {
            ticketPrice = 200;
        } else if (movieType == "3D") {
            ticketPrice = 350;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else if (age >= 12 && age <= 17) {
        if (movieType == "regular") {
            ticketPrice = 300;
        } else if (movieType == "3D") {
            ticketPrice = 540;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else if (age >= 18) {
        if (movieType == "regular") {
            ticketPrice = 400;
        } else if (movieType == "3D") {
            ticketPrice = 650;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else {
        cout << "Invalid age entered." << endl;
        return 1;
    }

    cout << "Your ticket price is: KShs " << ticketPrice << endl;

    return 0;
}

