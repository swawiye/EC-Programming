#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int base, height, hyp, area, perimeter;
    base = 10;
    height = 7;
    hyp = 12;

    cout << "The measurements of the right-angled triangle are:" << endl;
    cout << "The base: " << base << endl;
    cout << "The height: " << height << endl;
    cout << "The hypotenuse: " << hyp << endl;

    cout << "--- AREA ---" << endl;
    area = 0.5*base*height;
    cout << "The area is " << area << " square metres" << endl;
    cout << "--- PERIMETER ---" << endl;
    perimeter = base+height+hyp;
    cout << "The perimeter is " << perimeter << " metres" << endl;
}
