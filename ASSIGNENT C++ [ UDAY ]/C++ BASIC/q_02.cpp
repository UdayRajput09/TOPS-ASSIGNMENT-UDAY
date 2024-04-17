//Question:2 and 3_Define a class to represent a bank account. Include the following members:
//	Data Member:
//		-Name of the depositor
//		-Account Number
//		-Type of Account
//		-Balance amount in the account
//	Member Functions
//		-To assign values
//		-To deposited an amount
//		-To withdraw an amount after checking balance
//		-To display name and balance


#include<iostream> // Include necessary header file for input/output operations.
#include<string> // Include necessary header file for string manipulation.
using namespace std;

class BankAccount {
private:
    string depositorName; // Private member variable to store the depositor's name.
    long accountNumber; // Private member variable to store the account number.
    char accountType; // Private member variable to store the account type.
    double balance; // Private member variable to store the account balance.

public:
    // Method to assign initial values to the account.
    void assignValues(string name, long accNumber, char acctype, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = acctype;
        balance = initialBalance;
    }

    // Method to deposit money into the account.
    void deposit(double amount) {
        balance = balance + amount;
        cout << "Deposit successful New Balance: " << balance << endl;
    }

    // Method to withdraw money from the account.
    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawal successful New Balance: " << balance << endl;
        } else {
            cout << "Insufficient Fund" << endl;
        }
    }

    // Method to display information about the account.
    void displayInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance Amount: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.assignValues("Uday Rajput", 20210031, 'Savings', 20000.00); // Assign initial values to the account.
    myAccount.displayInfo(); // Display information about the account.
    myAccount.deposit(40000.00); // Deposit 40000.00 into the account.
    myAccount.withdraw(2500.00); // Withdraw 2500.00 from the account.
}


