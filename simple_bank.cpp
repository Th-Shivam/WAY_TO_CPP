#include <iostream>
using namespace std;

// 1. Encapsulation + Abstraction: Wrapping data and functions inside the class
class Account {
private:
    string owner;
    double balance;

public:
    Account(string name, double bal) {
        owner = name;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited ₹" << amount << " successfully.\n";
        } else {
            cout << "Invalid amount!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew ₹" << amount << " successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    void showBalance() {
        cout << "Current balance for " << owner << ": ₹" << balance << "\n";
    }
};

// 3. Inheritance: SavingsAccount is a specialized version of Account
class SavingsAccount : public Account {
public:
    SavingsAccount(string name, double bal) : Account(name, bal) {}
    
    // 4. Polymorphism: Function overriding
    void showBalance() {
        cout << "[Savings Account] ";
        Account::showBalance(); // calling base class version too
    }
};

int main() {
    string name;
    double initial;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter initial deposit amount: ₹";
    cin >> initial;

    SavingsAccount acc(name, initial);

    int choice;
    double amt;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ₹";
                cin >> amt;
                acc.deposit(amt);
                break;
            case 2:
                cout << "Enter amount to withdraw: ₹";
                cin >> amt;
                acc.withdraw(amt);
                break;
            case 3:
                acc.showBalance();
                break;
            case 4:
                cout << "Thanks for using the bank system, " << name << "!\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
