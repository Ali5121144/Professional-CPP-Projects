#include <iostream>
using namespace std;

class BankAccount {

private:
    string accountHolder;
    double balance;

public:

    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit Successful." << endl;
    }

    void withdraw(double amount) {

        if(amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful." << endl;
        } else {
            cout << "Insufficient Balance." << endl;
        }
    }

    void displayAccount() {

        cout << "\n===== Account Information =====" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {

    BankAccount account("Ali Ahmad", 1000);

    account.deposit(500);
    account.withdraw(300);

    account.displayAccount();

    return 0;
}
