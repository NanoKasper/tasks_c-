#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount(const string& name, double initialbalance){
        ownerName = name;
        balance = initialbalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "not enough money in the account" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account("charyev babarovshen", 500.0);

    account.deposit(250.0);
    account.withdraw(150.0);
    account.withdraw(1000.0);

    cout << "current balance: " << account.getBalance() << endl;

    return 0;
}