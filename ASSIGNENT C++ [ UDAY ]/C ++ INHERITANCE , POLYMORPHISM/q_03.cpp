//Question:3_Create a class person having members name and age. 
//Derive a class student having member percentage. 
//Derive another class teacher having member salary. 
//Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
			
#include <iostream> // Include necessary header file for input/output operations.
#include <string> // Include necessary header file for string manipulation.
using namespace std;

// Define a base class for representing a person.
class Person {
protected:
    string name; // Protected member variable to store the name of the person.
    int age; // Protected member variable to store the age of the person.

public:
    // Method to initialize the person with given name and age.
    void initializePerson(string n, int a) {
        name = n; // Assign the name.
        age = a; // Assign the age.
    }

    // Method to read person details from user input.
    void readPerson() {
        cout << "Enter name: ";
        cin >> name; // Input name from user.
        cout << "Enter age: ";
        cin >> age; // Input age from user.
    }

    // Method to display person details.
    void writePerson() {
        cout << "Name: " << name << endl; // Display name.
        cout << "Age: " << age << endl; // Display age.
    }
};

// Define a derived class for representing a student, inheriting from Person.
class Student : public Person {
private:
    float percentage; // Private member variable to store the percentage of the student.

public:
    // Method to initialize the student with given percentage.
    void initializeStudent(float p) {
        percentage = p; // Assign the percentage.
    }

    // Method to read student details from user input.
    void readStudent() {
        readPerson(); // Call base class method to read person details.
        cout << "Enter percentage: ";
        cin >> percentage; // Input percentage from user.
    }

    // Method to display student details.
    void writeStudent() {
        writePerson(); // Call base class method to display person details.
        cout << "Percentage: " << percentage << "%" << endl; // Display percentage.
    }
};

// Define a derived class for representing a teacher, inheriting from Person.
class Teacher : public Person {
private:
    float salary; // Private member variable to store the salary of the teacher.

public:
    // Method to initialize the teacher with given salary.
    void initializeTeacher(float s) {
        salary = s; // Assign the salary.
    }

    // Method to read teacher details from user input.
    void readTeacher() {
        readPerson(); // Call base class method to read person details.
        cout << "Enter salary: ";
        cin >> salary; // Input salary from user.
    }

    // Method to display teacher details.
    void writeTeacher() {
        writePerson(); // Call base class method to display person details.
        cout << "Salary: " << salary << endl; // Display salary.
    }
};

int main() {
    Student student; // Create a Student object.
    Teacher teacher; // Create a Teacher object.

    cout << "Enter student details:" << endl;
    student.readStudent(); // Read student details from user input.

    cout << "\nEnter teacher details:" << endl;
    teacher.readTeacher(); // Read teacher details from user input.

    cout << "\nStudent details:" << endl;
    student.writeStudent(); // Display student details.

    cout << "\nTeacher details:" << endl;
    teacher.writeTeacher(); // Display teacher details.

    return 0; // Indicate successful execution of the program.
}


