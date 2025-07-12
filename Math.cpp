#include <iostream>
#include <cmath>

using namespace std; //globaldeclaration

int main() 
{
    double base = 2.0, exponent = 3.0;
    cout << "2^3 = " << pow(base, exponent) << endl;

    // auto x = -10; or int x=-10 -initialization
    // int x = -10;
    // cout << "Absolute value of" << x << "is" << abs(x) << endl;
    int x;
    cout << "Type a number to get its absolute value: ";
    //std::cin >> x; //standard scope resolution
    cin >> x;
    cout << "The absolute value of" << x << "is" << abs(x) << endl;

    // return 0;
}