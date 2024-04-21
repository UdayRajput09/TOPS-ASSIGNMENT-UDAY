#include <iostream>
#include <string>
using namespace std;

// Class to store basic student information
class StudentInfo {
protected:
    string studentName;
    int studentRollNumber;

public:
    // Function to set student name
    void setName(const string& name) {
        studentName = name;
    }

    // Function to set student roll number
    void setRollNumber(int rollNumber) {
        studentRollNumber = rollNumber;
    }

    // Function to display student information
    void displayStudentInfo() const {
        cout << "Student Name: " << studentName << endl;
        cout << "Roll Number: " << studentRollNumber << endl;
    }
};

// Class to store subject-wise marks
class SubjectMarks {
protected:
    int mathMarks;
    int scienceMarks;
    int englishMarks;

public:
    // set marks in Math
    void setMathMarks(int marks) {
        mathMarks = marks;
    }

    // marks in Science
    void setScienceMarks(int marks) {
        scienceMarks = marks;
    }

    // set marks in English
    void setEnglishMarks(int marks) {
        englishMarks = marks;
    }

    // calculate and return total marks
    int calculateTotalMarks() const {
        return mathMarks + scienceMarks + englishMarks;
    }

    // display subject-wise marks
    void displaySubjectMarks() const {
        cout << "Marks in Math: " << mathMarks << endl;
        cout << "Marks in Science: " << scienceMarks << endl;
        cout << "Marks in English: " << englishMarks << endl;
    }
};

// Class to display student mark sheet using multiple inheritance
class MarkSheet : public StudentInfo, public SubjectMarks {
public:
    // Function to display complete mark sheet
    void displayMarkSheet() const {
        cout << "------ Mark Sheet ------" << endl;
        displayStudentInfo();    
        displaySubjectMarks();   
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    // Create MarkSheet object
    MarkSheet markSheet;

    // Get input from user to set student information and marks
    string name;
    int rollNumber, mathMarks, scienceMarks, englishMarks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    markSheet.setName(name);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    markSheet.setRollNumber(rollNumber);

    cout << "Enter Marks in Math: ";
    cin >> mathMarks;
    markSheet.setMathMarks(mathMarks);

    cout << "Enter Marks in Science: ";
    cin >> scienceMarks;
    markSheet.setScienceMarks(scienceMarks);

    cout << "Enter Marks in English: ";
    cin >> englishMarks;
    markSheet.setEnglishMarks(englishMarks);

    // Display the student mark sheet
    markSheet.displayMarkSheet();
}

