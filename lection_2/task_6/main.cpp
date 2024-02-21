#include <iostream>

using namespace std;

// Function for depositing money into the account
void deposit(int accounts[10]) {
    int cardNumber;
    int amount;

    // Display current balances of all accounts
    string balances = "";
    for (int i = 0; i < 10; ++i) {
        balances += " " + to_string(accounts[i]);
    }
    cout << "All cards now: " << balances << endl;

    // Request an account number
    cout << "Enter card number: ";
    cin >> cardNumber;

    // Check if the entered account number exists
    if (cardNumber < 1 || cardNumber > 10) {
        cout << "There is no such map." << endl;
        deposit(accounts); // Recursively call a function to re-enter
        return;
    }

    // We request an amount to be deposited into the account
    cout << "Enter the amount to deposit onto the card: ";
    cin >> amount;

    // Update your account balance
    accounts[cardNumber - 1] += amount;

    cout << "The amount was successfully credited to the card " << cardNumber << "." << endl;

    deposit(accounts);
}

int main() {
    int accounts[10] = {0}; //An array for storing account balances, all initial balances are 0
    deposit(accounts); // Calling the deposit function
    return 0;
}
