// Qualification for a loan
#include <iostream>
#include <cmath>

using namespace std;

// loan calc func
void sovereignLoanCalculator(int age, int balance, int customerDuration, string fName, string status) 
{
    cout << "\n---OUTCOME---" << endl;
    if (age>22 && balance>50000 && status == "good" && customerDuration>6) 
    {
        cout << "Eligible to receive a loan";
    }else {
        cout << "Not eligible to receive a loan";
    }
}

int main()
{
    // declare the variables
    int age, balance, customerDuration;
    string fName, status;

    cout << "---LOAN CALCULATOR---\n" << endl;
    cout << "---ENTER YOUR DETAILS---" << endl;
    cout << "Full Name: " << endl;
    getline(cin, fName);
    cout << "Age: " << endl;
    cin >> age;
    cout << "Bank Balance: " << endl;
    cin >> balance;
    cout << "CRB status(good/ bad): " << endl;
    cin >> status;
    cout << "Duration of membership of bank(months): " << endl;
    cin >> customerDuration;

    sovereignLoanCalculator(age, balance, customerDuration, fName, status);
    
    return 0;
}
