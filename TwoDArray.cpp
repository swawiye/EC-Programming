#include <iostream>

using namespace std;

int main() {
    int twoDA[3][4] = { //3 rows and four columns in the array
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout << "Element at twoDA[1][1]: " << twoDA[1][2] << endl;
    cout << "Element at twoDA[1][2]: " << twoDA[1][2] << endl;
    cout << "Element at twoDA[1][3]: " << twoDA[1][3] << endl;
    cout << "Element at twoDA[2][0]: " << twoDA[2][0] << endl;
    cout << "Element at twoDA[2][1]: " << twoDA[2][0] << endl;
    cout << "Element at twoDA[2][2]: " << twoDA[2][0] << endl;

    cout << "Array elements are: " << endl;

    for (int i=0; i<3; i++) 
    {
        for (int j=0; j<4; j++) 
        {
            cout << twoDA[i][j] << " "; //print each element
        }
        cout << endl; //new line after each row
    }
    return 0;
}


