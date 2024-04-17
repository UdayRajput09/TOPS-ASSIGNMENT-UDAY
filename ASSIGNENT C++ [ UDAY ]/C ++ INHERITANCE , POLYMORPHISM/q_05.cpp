//Question:5_Assume that the test results of a batch of students are stored in three different classes. 
//Class Students are storing the roll number. 
//Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
//The class result can inherit the details of the marks obtained in the test and roll number of students.(Multilevel Inheritance)
			
#include <iostream> // Include necessary header file for input/output operations.
#include <string> // Include necessary header file for string manipulation.
using namespace std;

// Define a base class for representing a student.
class Student {
protected:
    int rollNumber; // Protected member variable to store the roll number of the student.

public:
    // Method to initialize the student with given roll number.
    void initializeStudent(int roll) {
        rollNumber = roll; // Assign the roll number.
    }

    // Method to display the roll number of the student.
    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl; // Display the roll number.
    }
};

// Define a derived class for representing test marks, inheriting from Student.
class Test : public Student {
protected:
    float subject1Marks; // Protected member variable to store marks for subject 1.
    float subject2Marks; // Protected member variable to store marks for subject 2.

public:
    // Method to initialize test marks for subject 1 and subject 2.
    void initializeTest(float marks1, float marks2) {
        subject1Marks = marks1; // Assign marks for subject 1.
        subject2Marks = marks2; // Assign marks for subject 2.
    }

    // Method to display the test marks for subject 1 and subject 2.
    void displayTestMarks() {
        cout << "Subject 1 Marks: " << subject1Marks << endl; // Display marks for subject 1.
        cout << "Subject 2 Marks: " << subject2Marks << endl; // Display marks for subject 2.
    }
};

// Define a derived class for representing the result, inheriting from Test.
class Result : public Test {
private:
    float totalMarks; // Private member variable to store the total marks.

public:
    // Method to calculate the total marks.
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks; // Calculate the total marks.
    }

    // Method to display the student's result, including roll number, test marks, and total marks.
    void displayResult() {
        displayRollNumber(); // Call base class method to display roll number.
        displayTestMarks(); // Call base class method to display test marks.
        cout << "Total Marks: " << totalMarks << endl; // Display the total marks.
    }
};

int main() {
    Result studentResult; // Create a Result object to represent the student's result.
    cout << "Enter student details:" << endl;
    int roll;
    cout << "Roll Number: ";
    cin >> roll;
    studentResult.initializeStudent(roll); // Initialize student details with roll number.

    cout << "\nEnter test marks:" << endl;
    float marks1, marks2;
    cout << "Subject 1 Marks: ";
    cin >> marks1;
    cout << "Subject 2 Marks: ";
    cin >> marks2;
    studentResult.initializeTest(marks1, marks2); // Initialize test marks for subject 1 and subject 2.

    studentResult.calculateTotalMarks(); // Calculate the total marks.
    cout << "\nStudent Result:" << endl;
    studentResult.displayResult(); // Display the student's result.

    return 0; // Indicate successful execution of the program.
}


