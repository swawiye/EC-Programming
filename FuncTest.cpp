#include <iostream> // Inbuilt functions
#include <cmath> // Inbuilt functions
#include "Functions.h"

using namespace std;

int main() {
    cout << "Squareroot of 16 is: " << sqrt(16) << endl;
    cout << "Power of2 raised to 3 is: " << pow(2, 3) << endl;
    cout << "Absolute value of -10 is: " << abs(-10) << endl;
    cout << "Cosine of 0 radians is: " << cos(0) << endl;
    cout << "Sine of 0 radians is: " << sin(0) << endl;
    cout << "Tangent of 0 radians is: " << tan(0) << endl;
    cout << "Logarithm base 10 of 100 is: " << log10(100) << endl;
    cout << "Natural logarithm of e is: " << (log(exp(1))) << endl;
    cout << "Exponential of 1 is: " << exp(1) << endl;
    cout << "Ceiling of 4.2 is: " << ceil(4.2) << endl;
    cout << "Floor of 4.8 is: " << floor(4.8) << endl;
    cout << "Round of 4.5 is: " << round(4.5) << endl;
    cout << "Addition of 5 and 10 is: " << addition(5, 10) << endl;
    cout << "Subtraction of 5 and 10 is: " << subtraction(10, 5) << endl;
    cout << "Division of 10.0 by 2.0 is: " << division(10.0, 2.0) << endl;

    return 0;
}
