#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes
void ShowBalance(double balance);
double Deposit(double balance);
double Withdraw(double balance);

int main() {
    double balance = 0.0; // Initialize balance
    int choice;

    do {
        cout << "\n--- Amruts Reserve Bank ---" << endl;
        cout << "1. Show Balance\n2. Deposit\n3. Withdraw\n4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                ShowBalance(balance);
                break;
            case 2: 
                balance = Deposit(balance);
                break;
            case 3: 
                balance = Withdraw(balance);
                break;
            case 4: 
                cout << "Thank you for visiting!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}

void ShowBalance(double balance) {
    // Fixed: Just shows the balance, formatted to 2 decimal places
    cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
}

double Deposit(double balance) {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    
    if (amount > 0) {
        balance += amount;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
    return balance;
}

double Withdraw(double balance) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    // Logic Fix: Check if balance is sufficient
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful." << endl;
    } else {
        cout << "Insufficient balance!" << endl;
    }
    return balance;
}