#include <iostream>

using namespace std;

int main() {
    cout << "--- USER PROFILE ---" << endl;
    string fName, lName, favMeal, favMovie;

    cout << "First Name: "; 
    cin >> fName;
    cout << "Last Name: "; 
    cin >> lName;
    cout << "Full Name: " << fName << " " << lName << endl;

    getline(cin, favMeal); 
    cout << "Favourite Meal: "; 

    // WORK ON THIS!!!!!
    // getline(cin, favMovie);
    // cout << "Favourite Movie: ";
}