//Question:7_Write a C++ Program to illustrates the use of Constructors in multilevel inheritance.


#include<iostream> // Include necessary header file for input/output operations.
using namespace std; 

// Define a base class called A.
class A { 
	public: 
		// Constructor for class A.
		A() { 
			cout << "Base class A constructor \n"; 
		} 
}; 

// Define a derived class called B, inheriting from class A.
class B : public A { 
	public: 
		// Constructor for class B.
		B() { 
			cout << "Class B constructor \n"; 
		} 
};  

// Define a derived class called C, inheriting from class B.
class C : public B { 
	public: 
		// Constructor for class C.
		C() { 
			cout << "Class C constructor \n"; 
		} 
}; 

// Main function
int main() { 
	C obj; // Create an object of class C.
	return 0; // Indicate successful execution of the program.
}


