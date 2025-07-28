#include <iostream>
using namespace std;

int main() {
    int age;
    string interest;

    cout << "Please enter the age: ";
    cin >> age;

    // // 'IF' STATEMENT
    // if (age>=4) {
    //     cout << "Admitted to school. Proceed to registration";
    // }

    // // 'IF-ELSE' STATEMENT
    // if (age>=4) {
    //     cout << "Admitted to school. Proceed to registration";
    // }else {
    //     cout << "Rejected, minimum age not attained";
    // }

    // // TERNARY OPERATOR
    // string result = (age >= 4) ? "Admitted to school. Proceed to registration" : "Rejected, minimum age not attained";
    // cout << result << endl;
    // // OR
    // cout << (age >= 4 ? "Admitted to school. Proceed to registration" : "Rejected, minimum age not attained") << endl;

    // Ex1:
    cout << "Enter your interest(soccer/art): ";
    cin >> interest;

    if (age >= 4 && age >= 10) 
    {
        if (interest == "soccer") 
        {
            cout << "Assigned to play group" << endl;
        } 
        if (interest == "art") 
        {
            cout << "Assigned to play group" << endl;
        }else 
        {
            cout << "Assigned to other group" << endl;
        }
    }else 
    {
        cout << "Invalid output";
    }

    // Ex2:
    if (age >= 7) {
        cout << "Admite to Grade School";
    } 
    else if (age >= 5) {
        cout << "Admit to Kindergarten";
    }
    else if (age >= 3) {
        cout << "Admit to Pre-School";
    }
    else if (age >= 1) {
        cout << "Admit to Play Group";
    }
    else {
        cout << "Rejected. Does not meet age requirements";
    }

    return 0;
}