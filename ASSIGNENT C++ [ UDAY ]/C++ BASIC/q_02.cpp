//2. Define a class to represent a bank account. Include the following members:

//3. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account

//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance



#include <iostream>
using namespace std;

class Account {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    // Initialize data members
     Account(const string name, long accNumber, const string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Deposit an amount
    void deposit(double amount) {
        balance += amount;
    }

    // Withdraw an amount after checking balance
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance." <<endl;
        }
    }

    // Display name and balance
    void display() {
        cout <<"\nName: " << depositorName;
        cout<<"\nAccount Number :"<<accountNumber;
        cout<<"\nAccount Type : "<<accountType;
        cout <<"\nBalance: " << balance;
    }
};

int main() {
    // Create an instance of BankAccount
    Account obj("Uday Rajput", 20210012, "Savings", 5000.00);

    // Deposit some money
    obj.deposit(1000);

    // Withdraw some money
    obj.withdraw(1500);

    // Display the account details
    obj.display();

}

