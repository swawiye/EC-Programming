#include <iostream>

using namespace std;

int main() 
{
    int num = 12;
    cout << "Even numbers from 12 to 50: " << endl;
    for(int number=12; number <= 50; number += 2) 
    {
        cout << number << " ";
    }
    return 0;
}