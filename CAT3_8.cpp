// Shopping cart with discounts
#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision

using namespace std;

int main() {
    int itemCode;
    float price, discount = 0.0, finalPrice;

    cout << "---DISCOUNTED SHOPPING CART---" << endl;
    cout << "Item Code: ";
    cin >> itemCode;
    cout << "Item Price: ";
    cin >> price;

    // discount 
    if (price >= 1000) {
        discount = 0.50 * price;
    } else if (price >= 500) {
        discount = 0.35 * price;
    } else if (price >= 200) {
        discount = 0.10 * price;
    } else {
        discount = 0.0;
    }

    // final price
    finalPrice = price - discount;

    // Output results
    cout << fixed << setprecision(2); // show 2 decimal places
    cout << "\n---RECEIPT---" << endl;
    cout << "Item Code     : " << itemCode << endl;
    cout << "Original Price: KShs " << price << endl;
    cout << "Discount      : KShs " << discount << endl;
    cout << "Final Price   : KShs " << finalPrice << endl;

    return 0;
}
