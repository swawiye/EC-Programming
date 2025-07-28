#include <iostream>

using namespace std;

int main() 
{
    int num = 12;
    cout << "Even numbers from 12 to 50: " << endl;
    do
    {
        cout << num << " ";
        num += 2;
    }while(num <= 50);

    return 0;
}