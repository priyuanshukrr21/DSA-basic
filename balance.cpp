#include <iostream>
using namespace std;

int main() {
    int balance = 5000, choice, amount;

    cout << "1. Check Balance\n";
    cout << "2. Withdraw\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Balance = ₹" << balance;
    }
    else if (choice == 2) {
        cout << "Enter amount: ";
        cin >> amount;

        if (amount <= balance)
            cout << "Withdrawal Successful!";
        else
            cout << "Insufficient Balance!";
    }
    else {
        cout << "Invalid Choice!";
    }

    return 0;
}