#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "--- USER PROFILE ---" << endl;
    string fName, lName, favMeal, favMovie;

    cout << "First Name: "; 
    cin >> fName;
    cout << "Last Name: "; 
    cin >> lName;
    cout << "Full Name: " << fName << " " << lName << endl;
 
    cout << "Favourite Meal: "; 
    getline(cin, favMeal);

    // WORK ON THIS!!!!!
    // getline(cin, favMovie);
    // cout << "Favourite Movie: ";
}