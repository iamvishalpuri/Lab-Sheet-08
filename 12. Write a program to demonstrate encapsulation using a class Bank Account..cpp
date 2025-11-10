#include <iostream>
using namespace std;

class BankAccount {
    float balance;
public:
    BankAccount() { balance = 0; }
    void deposit(float amount) {
        if (amount > 0) 
            balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else cout << "Insufficient balance!\n";
    }
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(5000);
    acc.withdraw(2000);
    acc.showBalance();
    return 0;
}

Output
Deposited : 5000
Withdrawn : 2000
Current Balance : 3000