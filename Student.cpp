#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName, subject;
    int score;

    cout << "Enter the full name of the student: ";
    getline(cin, fullName);

    cout << "Enter the student's subject: ";
    getline(cin, subject);

    cout << "Enter the student's score: ";
    cin >> score;

    if (score >= 70 && score <= 100)
    {
        if (score >= 70)
        {
            cout << fullName << " got a grade A in " << subject << endl;
        }else if (score >= 60)
        {
            cout << fullName << " got a grade B in " << subject << endl;
        }else if (score >= 50)
        {
            cout << fullName << " got a grade C in " << subject << endl;
        }else if (score >= 40)
        {
            cout << fullName << " got a grade D in " << subject << endl;
        }
        else 
        {
            cout << "Invalid score entered";
        }
    }

}
