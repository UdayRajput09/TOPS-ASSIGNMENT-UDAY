//Question:6_Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
//Include member functions to calculate and set salary based on employee performance. Using of constructor.
		
#include <iostream> // Include necessary header file for input/output operations.
#include <string> // Include necessary header file for string manipulation.
using namespace std;

// Define a class for representing an employee.
class Employee {
private:
    string name; // Private member variable to store the name of the employee.
    int employeeID; // Private member variable to store the ID of the employee.
    double salary; // Private member variable to store the salary of the employee.

public:
    // Constructor to initialize the name, ID, and salary of the employee.
    Employee(string empName, int empID, double iniSalary) {
        name = empName;
        employeeID = empID;
        salary = iniSalary;
    }

    // Method to set the salary based on performance.
    void setSalary(double performance) {
        if (performance >= 0.0 && performance <= 100.0) {
            salary = salary * (1 + performance / 100.0);
            cout << "Salary based on performance. New salary: $" << salary << endl;
        } else {
            cout << "Please enter a score between 0 and 100." << endl;
        }
    }

    // Method to get the name of the employee.
    string getName() {
        return name; // Return the name of the employee.
    }

    // Method to get the ID of the employee.
    int getEmployeeID() {
        return employeeID; // Return the ID of the employee.
    }

    // Method to get the salary of the employee.
    double getSalary() {
        return salary; // Return the salary of the employee.
    }
};

int main() {
    string empName; // Variable to store the name of the employee.
    int empID; // Variable to store the ID of the employee.
    double iniSalary; // Variable to store the initial salary of the employee.

    // Input employee information from the user.
    cout << "Enter Employee Name: ";
    getline(cin, empName);

    cout << "Enter Employee ID: ";
    cin >> empID;

    cout << "Enter Initial Salary: $";
    cin >> iniSalary;

    Employee e1(empName, empID, iniSalary); // Create an employee object with the provided information.

    // Display initial employee information.
    cout << "\nEmployee Information:" << endl;
    cout << "Name: " << e1.getName() << endl;
    cout << "Employee ID: " << e1.getEmployeeID() << endl;
    cout << "Initial Salary: $" << e1.getSalary() << endl;

    double performance; // Variable to store the performance score.
    cout << "\nEnter Performance Score from 0 to 100: ";
    cin >> performance;
    e1.setSalary(performance); // Update the salary based on performance.

    // Display final employee information.
    cout << "\nFinal Employee Information:" << endl;
    cout << "Name: " << e1.getName() << endl;
    cout << "Employee ID: " << e1.getEmployeeID() << endl;
    cout << "Final Salary: $" << e1.getSalary() << endl;

    return 0; // Indicate successful execution of the program.
}


