//Question:4_Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance.
//Include member functions to deposit and withdraw money from the account.

#include<iostream> // Include necessary header file for input/output operations.
using namespace std;

// Define a class for representing a bank account.
class BankAccount {
private:
    int accountNumber; // Private member variable to store the account number.
    double balance; // Private member variable to store the balance of the account.

public:
    // Constructor to initialize the account number and balance.
    BankAccount(int accNum, double iniBala) {
        accountNumber = accNum;
        balance = iniBala;
    }

    // Method to deposit money into the account.
    void deposite(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New Balance: " << balance << endl;
        } else {
            cout << "Unsuccessful Deposit." << endl;
        }
    }

    // Method to withdraw money from the account.
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal  New Balance: " << balance << endl;
        } else {
            cout << "Invalid  amount or Insufficient Balance." << endl;
        }
    }

    // Method to get the account number.
    int getAccountNumber() {
        return accountNumber; // Return the account number.
    }

    // Method to get the balance of the account.
    double getBalance() {
        return balance; // Return the balance of the account.
    }
};

int main() {
    int accNum; // Variable to store the account number.
    double initialBalance; // Variable to store the initial balance.

    // Input account number and initial balance from the user.
    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account1(accNum, initialBalance); // Create a bank account object with user-provided values.
    cout << "Account Number: " << account1.getAccountNumber() << endl; // Display the account number.
    cout << "Initial Balance: " << account1.getBalance() << endl; // Display the initial balance.

    double depositAmount, withdrawAmount; // Variables to store deposit and withdrawal amounts.

    // Input deposit amount from the user.
    cout << "Enter Deposit Amount: ";
    cin >> depositAmount;
    account1.deposite(depositAmount); // Deposit the amount into the account.

    // Input withdrawal amount from the user.
    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawAmount;
    account1.withdraw(withdrawAmount); // Withdraw the amount from the account.

    cout << "Final balance: " << account1.getBalance() << endl; // Display the final balance.

    return 0; // Indicate successful execution of the program.
}



