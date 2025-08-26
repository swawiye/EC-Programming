// Library late fee calc
#include <iostream>

using namespace std;

int main() {
    int days, type;

    cout << "---LIBRARY LATE FEE CALCULATOR---" << endl;
    cout << "Enter the details" << endl;
    cout << "Type of book( regular(1)/ children's(2)/ reference(3) ): ";
    cin >> type;
    cout << "No of days late: ";
    cin >> days;

    if (type ==  1) 
    {
        if (days <= 10)
        {
            cout << "Your late fee is 150KShs" << endl;
        } else if (days > 10)
        {
            cout << "Your late fee is 250KShs" << endl;
        } else
        {
            cout << "We are unable to calculate your late fee, please enter valid values" << endl;
        }
    } else if (type ==  2) 
    {
        if (days <= 10)
        {
            cout << "Your late fee is 0KShs" << endl;
        } else if (days > 10)
        {
            cout << "Your late fee is 50KShs" << endl;
        } else
        {
            cout << "We are unable to calculate your late fee, please enter valid values" << endl;
        }
    } else if (type ==  3) 
    {
        if (days <= 10)
        {
            cout << "Your late fee is 200KShs" << endl;
        } else if (days > 10)
        {
            cout << "Your late fee is 350KShs" << endl;
        } else
        {
            cout << "We are unable to calculate your late fee, please enter valid values" << endl;
        }
    } else {
        cout << "We are unable to calculate your late fee, confirm whether you have a late fee" << endl;
    }

    return 0;
}
