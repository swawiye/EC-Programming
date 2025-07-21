# include <iostream>
# include <cmath>
# include <string>

using namespace std;

int main() 
{
    // Declaration of variables
    int num1, num2, incr=0;
    string fullName;

    // User Input
    cout << "---- USER INPUT ----" << endl;

    cout << "Enter your full name: " << endl;
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!" << " -Captured using 'getline'"<< endl; 
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "The 1st number: " << num1 << endl;
    cout << "The 2nd number: " << num2 << endl;

    // 1. ARITHMETIC OPERATORS
    cout << "\n--- ARITHMETIC OPERATORS ---" << endl;

    // Addition
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    // Subtraction
    cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    // Multiplication
    cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
    // Division
    cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    // Modulus
    cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
    // Compound operators (assignment operator & arithmetic operator)
    // Increment
    incr += num1; //increment the value of "incr" by the value of "num1"  
    cout << "The incremented(+=) value of 'incr' is " << incr << endl;
    // Decrement
    incr -= num1; //decrement the value of "incr" by the value of "num1"  
    cout << "The decremented(-=) value of 'incr' is " << incr << endl;
    // Multiply by
    incr *= num1; //multiply the value of "incr" by the value of "num1"  
    cout << "The value of 'incr' multiplied(*=) by the 'first number' is " << incr << endl;
    // Divide by
    incr /= num1; //divide the value of "incr" by the value of "num1"  
    cout << "The value of 'incr' divided(/=) by the 'first number' is " << incr << endl;

    // 2. COMPARISON OPERATORS
    cout << "\n--- COMPARISON OPERATORS ---" << endl;
    cout << "('1' means true, '0' means false)" << endl;

    // Greater than
    cout << num1 << " > " << num2 << " = " << (num1>num2) << endl;
    // Greater than or equal to
    cout << num1 << " >= " << num2 << " = " << (num1>=num2) << endl;
    // Less than
    cout << num1 << " < " << num2 << " = " << (num1<num2) << endl;
    // Less than or equal to
    cout << num1 << " <= " << num2 << " = " << (num1<=num2) << endl;


    // 3. BOOLEAN OPERATORS -compare two logical expressions(created using logical operators)
    cout << "\n--- BOOLEAN OPERATORS ---" << endl;
    cout << "('1' means true, '0' means false)" << endl;

    // OR
    cout << (3>2) << " || " << (2>1) << " = " << ((3>2)||(2>1)) << endl;
    cout << (3>2) << " || " << (2<1) << " = " << ((3>2)||(2<1)) << endl;
    cout << (3<2) << " || " << (2<1) << " = " << ((3<2)||(2<1)) << endl;
    // AND
    cout << (3>2) << " && " << (2>1) << " = " << ((3>2)&&(2>1)) << endl;
    cout << (3>2) << " && " << (2<1) << " = " << ((3>2)&&(2<1)) << endl;
    cout << (3<2) << " && " << (2<1) << " = " << ((3<2)&&(2<1)) << endl;

    // HANDLING USER INPUT
    cout << "Enter your full name again" << endl;
    cin >> fullName; 
    cout << "Hello, " << fullName << "!" << " -Captured using 'cin'"<< endl;   
}