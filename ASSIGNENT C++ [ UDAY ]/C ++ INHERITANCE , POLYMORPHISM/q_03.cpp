/*Q-3 Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

//class definition
class Person {
	public:
		string fullName;
		int personAge;
		
		//read data
		void readPersonInfo() {
			cout << "Enter name: ";
			cin >> fullName;
			cout << "Enter Age: ";
			cin >> personAge;
		}
		
		//write data
		string writeFullName() {
			return fullName;
		}
		
		//write data
		int writePersonAge() {
			return personAge;
		}
};

//Derived class Student
class Student : public Person {
	public:
		float studentPercentage;
		
		//read data
		void readStudentInfo() {
			cout << "Enter percentage: ";
			cin >> studentPercentage;
		}
		
		//write data
		float writeStudentPercentage() {
			return studentPercentage;
		}
};

//Derived class Teacher
class Teacher : public Student {
	public:
		int teacherSalary;
		
		//read data
		void readTeacherInfo() {
			cout << "Enter salary: ";
			cin >> teacherSalary;
		}
		
		//write data
		int writeTeacherSalary() {
			return teacherSalary;
		}
};

int main() {
	//object creation
	Teacher obj;
	
	obj.readPersonInfo();
	obj.readStudentInfo();
	obj.readTeacherInfo();
	
	cout << "Name: " << obj.writeFullName() << endl;
	cout << "Age: " << obj.writePersonAge() << endl;
	cout << "Percentage: " << obj.writeStudentPercentage() << endl;
	cout << "Salary: " << obj.writeTeacherSalary() << endl;
}

