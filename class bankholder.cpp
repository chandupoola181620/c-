#include <iostream>
#include <string>
using namespace std;
class BankAccount {
public:
    BankAccount(string accountHolder, double initialBalance) 
        : holder(accountHolder), balance(initialBalance) {
        cout << "Account created for " << holder << " with balance $" << balance << endl;
    }

    ~BankAccount() {
        cout << "Account for " << holder << " is being closed." <<endl;
    }

private:
    string holder;
    double balance;
};

int main() {
    BankAccount account("John Doe", 1000.0);
    return 0;
}
