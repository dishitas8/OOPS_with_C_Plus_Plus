#include <iostream>
#include <string>
using namespace std;
class BankAccount {
    int accountNumber;
    string customerName;
    double balance;
    public:
    BankAccount(int accNum, string name, double bal) {
        accountNumber=accNum;
        customerName=name;
        balance=bal;
    }
    friend void compareBalance(const BankAccount &a1, const BankAccount &a2) {
        if (a1.balance > a2.balance) {
            cout << "Account holder with higher balance: " << a1.customerName << endl;
            cout << "Balance: " << a1.balance << endl;
        } else if (a2.balance > a1.balance) {
            cout << "Account holder with higher balance: " << a2.customerName << endl;
            cout << "Balance: " << a2.balance << endl;
        } else {
            cout << "Both account holders have the same balance." << endl;
        }
    }
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount account1(1001, "Alice", 5000.0);
    BankAccount account2(1002, "Bob", 3000.0);
    cout << "Account 1 Details:" << endl;
    account1.display();
    cout << "Account 2 Details:" << endl;
    account2.display();
    cout << "Comparing Balances:" << endl;
    compareBalance(account1, account2);
}