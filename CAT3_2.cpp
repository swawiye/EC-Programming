// Grades
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

    if(score >= 70) 
    {
        cout << fName << " in " << course << " you have a Grade A" << endl;
    }else if(score >= 60) 
    {
        cout << fName << " in " << course << " you have a Grade B" << endl;
    }else if(score >= 50) 
    {
        cout << fName << " in " << course << " you have a Grade C" << endl;
    }else if(score >= 40) 
    {
        cout << fName << " in " << course << " you have a Grade D" << endl;
    }else if(score >= 0) 
    {
        cout << fName << " in " << course << " you have a  Grade F" << endl;
    }else 
    {
        cout << fName << " in " << course << " you have an invalid score " << endl;
    }

    return 0;
}
