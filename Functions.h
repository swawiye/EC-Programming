#include <iostream>

using namespace std;

// Function to add two integers
int addition(int a, int b)
{
    return a+b;
}

// Function to subtract two integers
int subtraction(int a, int b)
{
    return a-b;
}

// Function to divide two double values
double division(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero!!" << endl;
        return 0; //handle error as needed
    }
    return a/b;
}


