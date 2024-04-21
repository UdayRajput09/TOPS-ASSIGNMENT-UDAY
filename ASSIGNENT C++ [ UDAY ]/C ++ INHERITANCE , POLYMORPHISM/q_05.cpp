/*Q-5 Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class Students {
public:
    int roll_number;  // Student's roll number
};

class Test : public Students {
public:
    int subject1_marks;  // Marks obtained in subject 1
    int subject2_marks;  // Marks obtained in subject 2
};

class Result : public Test {
public:
    int total_marks;  // Total marks obtained
};

int main() {
    Result obj;

    obj.roll_number = 66;  // Assigning roll number
    cout << "Student Roll Number: " << obj.roll_number << endl;

    cout << "Student marks subject1_marks: ";
    cin >> obj.subject1_marks;  // Taking input for subject 1 marks

    cout << "Student marks subject2_marks: ";
    cin >> obj.subject2_marks;  // Taking input for subject 2 marks

    obj.total_marks = obj.subject1_marks + obj.subject2_marks;  // Calculating total marks
    cout << "Total Marks: " << obj.total_marks << endl;
}

