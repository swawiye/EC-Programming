#include <iostream>

using namespace std;

int main() 
{
    int nums[5], sum=0, product=1;
    // Input five integers from the user
    cout << "Enter five integers: " << endl;
    for (int i=0; i<5; i++) 
    {
        cout << "Integer " << (i+1) << ": ";
        cin >> nums[i];
    }

    cout << "\nYou entered: ";
        for (int i=0; i<5; i++) 
    {
        cout << nums[i] << " ";
        sum = sum + nums[i];
        product = product * nums[i];
    } 

    cout << "\nThe sum of the integers is: " << sum << endl;
    cout << "\nThe mean of the integers is: " << static_cast<float>(sum) / 5 << endl;
    cout << "\nThe product of the integers is: " << sum << endl;
    return 0;
}