// Maximum number
#include <iostream>

using namespace std;

int main()
{
    // declare the variables
    int num1, num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "The first number is " << num1 << " and the second number is " << num2 << endl;

    switch(num1 > num2 ? 1 : (num2 > num1 ? 2 : 0)) {
        case 1:
            cout << "The maximum number is: " << num1 <<endl;
            cout << num1 << " is greater than " << num2 <<endl;
            break;
        case 2:
            cout << "The maximum number is: " << num2 <<endl;
            cout << num2 << " is greater than " << num1 <<endl;
            break;
        case 0:
            cout << "Both the numbers are equal" <<endl;
            break;
        default:
            cout << "Invalid comparison" << endl;
            break;
    }


    return 0;
}
