#include <iostream>

using namespace std;

int main()
{
    int number = -1; //initialize the "number" as a non zero value
    while (number != 0)
    {
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "You entered zero, exiting the loop. Bye!" << endl;

    // Ex: SUM OF NUMBERS FROM 20 TO 25
    int num = 20, sum = 0; //initialize the "number" as a non zero value
    while (num <= 25)
    {
        sum += num;
        num++;
    }
    cout << "Final sum: " << sum << endl;

    return 0;
}