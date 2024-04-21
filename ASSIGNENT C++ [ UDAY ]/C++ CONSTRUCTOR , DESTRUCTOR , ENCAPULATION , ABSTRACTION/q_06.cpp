#include <iostream>

using namespace std;

// Define the Employee class
class Employee {
private:
    string empName;
    int empID;
    double empSalary;

public:
    // Constructor to initialize Employee object with name, ID, and salary
    Employee(const string& name, int ID, double salary) {
        empName = name;
        empID = ID;
        empSalary = salary;
    }

    // Function to calculate and set salary based on performance rating
    void setSalary(double rating) {
        if (rating > 0.0 && rating <= 5.0) {
            // Increase salary based on performance rating
            empSalary += empSalary * (rating / 10.0);
            cout << "Salary updated based on performance." << endl;
        } else {
            cout << "Invalid performance rating. Salary remains unchanged." << endl;
        }
    }

    // Function to display employee information
    void displayInfo() const {
        cout << "Employee Name: " << empName << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Salary: $" << empSalary << endl;
    }
};

int main() {
    string name;
    int ID;
    double salary, rating;

    // Prompt the user to enter employee details
    cout << "Enter Employee Name: ";
    getline(cin, name); // Read the entire line for the name

    cout << "Enter Employee ID: ";
    cin >> ID;

    cout <<"enter salary:";
    cin >> salary;

    // Create an Employee object using the entered details
    Employee emp(name, ID, salary);

    // Display initial employee information
    cout << "\nemployee information:";
    emp.displayInfo();
    cout<<endl;

    // Prompt the user to enter performance rating
    cout << "\nenter rating (1.0 - 5.0): ";
    cin >> rating;

    // Set salary based on performance rating
    emp.setSalary(rating);

    // Display updated employee information after setting salary
    cout << "\nupdated information:";
    emp.displayInfo();
}

