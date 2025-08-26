// ATM Withdrawal
#include <iostream>

using namespace std;

int main() {
    float balance = 15000.0;
    float withdrawalAmount;
    float dailyLimit = 5000.0;

    cout << "---ATM WITHDRAWAL SYSTEM---" << endl;

    cout << "Available Balance: KShs " << balance << endl;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > dailyLimit) {
        cout << "Transaction failed: Amount exceeds daily withdrawal limit of KShs " << dailyLimit << "." << endl;
    } else if (withdrawalAmount > balance) {
        cout << "Transaction failed: Insufficient funds." << endl;
    } else if (withdrawalAmount <= 0) {
        cout << "Transaction failed: Invalid withdrawal amount." << endl;
    } else {
        balance = balance - withdrawalAmount;
        cout << "Transaction successful. You have withdrawn KShs " << withdrawalAmount << "." << endl;
        cout << "Remaining balance: KShs " << balance << endl;
    }

    return 0;
}
