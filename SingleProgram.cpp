#include <iostream>

using namespace std;

int myFunction(int, float); //function prototype- declaration of a function

// Global variable
int globalVar = 20;

// Local variables - only accessed within the function body
int main() 
{
    // Constant variable
    const float constVar = 3.142;
    int localVar = 10;
    // cout << myFunction(localVar) << endl; //prints the value of the local variable
    cout << myFunction(2,3) << endl; //prints the value of the local variable
}

int myFunction(int paramVar, float paramVar2) 
{
    int localVar = 40;
    cout << "Value of local variable in main: " << localVar << endl; //will cause an error
    cout << "Value of global variable: " << localVar << endl;
    // Parameter variables
    float sum = paramVar + paramVar2;
    // int value1 = paramVar1; -can be initialized as a local variable
    cout << "Sum of the parameters: " << sum;
    return 0; 
}