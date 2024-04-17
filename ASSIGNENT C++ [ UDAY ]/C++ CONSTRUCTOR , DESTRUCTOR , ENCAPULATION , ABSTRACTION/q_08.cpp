//Question:8_Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
//Include member functions to calculate the grade based on the marks and display the student's information.
//Accept address from each student implement using of aggregation
			
#include <iostream> // Include necessary header file for input/output operations.
#include <string> // Include necessary header file for string manipulation.
using namespace std;

// Define a class for representing an address.
class Address {
public:
    string street, city, state, pinCode;   
};

// Define a class for representing a student.
class Student {
private:
    string name, studentClass; // Private member variables to store the name and class of the student.
    int rollNumber; // Private member variable to store the roll number of the student.
    double marks; // Private member variable to store the marks of the student.
    Address address; // Private member variable to store the address of the student.

public:
    // Constructor to initialize the student object with provided values.
    Student(string n, string sClass, int roll, double m, string street, string city, string state, string pin):
        name(n), studentClass(sClass), rollNumber(roll), marks(m) {
        // Initialize the address of the student.
        address.street = street;
        address.city = city;
        address.state = state;
        address.pinCode = pin;
    }

    // Method to calculate the grade of the student based on their marks.
    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 70) {
            return 'B';
        } else if (marks >= 50) {
            return 'C';
        } else if (marks >= 35) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Method to display information about the student.
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: " << endl;
        cout << " " << address.street << endl;
        cout << " " << address.city << endl;
        cout << " " << address.state << endl;
        cout << " " << address.pinCode << endl;
    }
};

int main() {
    string name, studentClass, street, city, state, pin;
    int rollNumber;
    double marks;

    // Input student information from the user.
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter class: ";
    getline(cin, studentClass);

    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter marks: ";
    cin >> marks;

    cin.ignore(); // Ignore the newline character left in the input buffer.

    cout << "Enter Address with House No, Street & Area: ";
    getline(cin, street);

    cout << "Enter city: ";
    getline(cin, city);

    cout << "Enter state: ";
    getline(cin, state);

    cout << "Enter Pin code: ";
    getline(cin, pin);

    // Create a student object with the provided information.
    Student student(name, studentClass, rollNumber, marks, street, city, state, pin);

    cout << "\n\n_____Student's Information_____\n\n";
    student.displayInfo(); // Display the information about the student.

    return 0; // Indicate successful execution of the program.
}


