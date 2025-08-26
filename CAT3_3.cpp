// Grades using switch case
#include <iostream>
using namespace std;

int main()
{
    // declare the variables
    int score;
    string fName, course;

    cout << "Enter your full name: " << endl;
    getline(cin, fName);
    cout << "Enter your course: " << endl;
    cin >> course;
    cout << "Enter your score: " << endl;
    cin >> score;

    switch (score) {
        case 70 ... 100:
            cout << fName << " in " << course << " you have a Grade A" << endl;
            break;
        case 60 ... 69:
            cout << fName << " in " << course << " you have a Grade B" << endl;
            break;
        case 50 ... 59:
            cout << fName << " in " << course << " you have a Grade C" << endl;
            break;
        case 40 ... 49:
            cout << fName << " in " << course << " you have a Grade D" << endl;
            break;
        case 0 ... 39:
            cout << fName << " in " << course << " you have a Grade F" << endl;
            break;
        default:
            cout << fName << " in " << course << " you have an invalid score" << endl;
            break;
    }

    return 0;
}