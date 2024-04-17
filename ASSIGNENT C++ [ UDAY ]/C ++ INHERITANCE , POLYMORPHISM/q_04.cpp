//Question:4_Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream> // Include necessary header file for input/output operations.
#include <string> // Include necessary header file for string manipulation.
using namespace std;

// Define a base class for representing a person.
class Person {
protected:
    string name; // Protected member variable to store the name of the person.

public:
    // Method to initialize the person with given name.
    void initializePerson(string n) {
        name = n; // Assign the name.
    }

    // Method to read person details from user input.
    void readPerson() {
        cout << "Enter name: ";
        cin >> name; // Input name from user.
    }

    // Method to display person details.
    void writePerson() {
        cout << "Name: " << name << endl; // Display name.
    }
};

// Define a base class for representing marks.
class Marks {
protected:
    float marks[5]; // Protected member variable to store marks for 5 subjects.

public:
    // Method to initialize marks for 5 subjects.
    void initializeMarks() {
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i]; // Input marks for each subject.
        }
    }

    // Method to display marks for 5 subjects.
    void writeMarks() {
        cout << "Marks:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl; // Display marks for each subject.
        }
    }
};

// Define a derived class for representing a student, inheriting from Person and Marks.
class Student : public Person, public Marks {
public:
    // Method to initialize student details by reading person details and marks.
    void initializeStudent() {
        readPerson(); // Call base class method to read person details.
        initializeMarks(); // Call base class method to initialize marks.
    }

    // Method to display the mark sheet of the student, including person details and marks.
    void displayMarkSheet() {
        cout << "\nStudent Mark Sheet:" << endl;
        writePerson(); // Call base class method to display person details.
        writeMarks(); // Call base class method to display marks.
    }
};

int main() {
    Student student; // Create a Student object.
    cout << "Enter student details:" << endl;
    student.initializeStudent(); // Initialize student details.
    student.displayMarkSheet(); // Display the student's mark sheet.

    return 0; // Indicate successful execution of the program.
}


