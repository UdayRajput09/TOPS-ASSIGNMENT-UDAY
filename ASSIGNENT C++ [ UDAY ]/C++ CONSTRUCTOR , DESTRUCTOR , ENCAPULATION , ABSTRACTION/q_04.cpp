#include <iostream>
#include <string>

using namespace std;

class BankAccount {	
private:
    string accNumber;
    double balance;

public:
	
    // Constructor to initialize the BankAccount object
    BankAccount(const string& accNum, double initialBalance) : accNumber(accNum), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nDeposit of " << amount << " successful";
        } else {
            cout << "\nInvalid amount";
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\nWithdrawal of " << amount << " successful";
        } else {
            cout << "\nInvalid or insufficient balance";
        }
    }

    // Function to display the account information
    void display() const {
        cout << "\nAccount Number: " << accNumber;
        cout << "\nBalance: " << balance;
    }
};

int main() {
	
    string accNumber;
    double initialBalance;

    // Get initial account information from the user
    cout << "Enter account number: ";
    cin >> accNumber;
    

    cout << "Enter balance: ";
    cin >> initialBalance;
    

    // Create an instance of BankAccount
    BankAccount obj(accNumber, initialBalance);
    

    // Display initial account information
    cout << "\nAccount Information:";
    obj.display();
    

    double depositAmount, withdrawAmount;
    

    // Perform deposit operation
    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    obj.deposit(depositAmount);
    obj.display();


    // Perform withdrawal operation
    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawAmount;
    obj.withdraw(withdrawAmount);
    obj.display();
}

