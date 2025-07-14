# include <iostream>
# include <cmath>

using namespace std;

int main() 
{
    // Declaration of variables
    float num1, num2, sum, diff, prod, div, mod;

    cout << "--- SIMPLE CALCULATOR ---" << endl;

    // User input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Operations
    // Addition
    sum = num1+num2;
    cout << num1 << " + " << num2 << " = " << sum << endl;
    // Subtraction
    diff = num1-num2;
    cout << num1 << " - " << num2 << " = " << diff << endl;
    // Multiplication
    prod = num1*num2;
    cout << num1 << " x " << num2 << " = " << prod << endl;
    // Division
    div = num1/num2;
    cout << num1 << " / " << num2 << " = " << div << endl;
    // Modulus
    //  mod = num1%num2;
    //  cout << num1 << " % " << num2 << " = " << div << endl;
}