#include <iostream>
using namespace std;

int main() {
    int age;
    char interest;

    cout << "Please enter the age: ";
    cin >> age;

    if (age >= 4 && age >= 10) 
    {
        cout << "Enter your interest(soccer(S) /art(A) /music(M) /athletics(L) /toys(T)): ";
        cin >> interest;

        switch(interest) 
        {
            case 'S':
                cout << "Assigned to the soccer group" <<endl;
                break;
            case 'A':
                cout << "Assigned to the art group" <<endl;
                break;
            case 'M':
                cout << "Assigned to the music group" <<endl;
                break;
            case 'L':
                cout << "Assigned to the athletics group" <<endl;
                break;
            case 'T':
                cout << "Assigned to the toys group" <<endl;
                break;
            default:
                cout << "Assigned to the other group" <<endl;
                break;
        }
    } else 
    {
        cout << "Invalid age input" << endl;
    }
}