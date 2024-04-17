//Question:6_Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include <iostream> // Include necessary header file for input/output operations.
using namespace std;

// Define a base class called Base.
class Base {
private:
    int privateMember; // Private member variable of the Base class.

protected:
    int protectedMember; // Protected member variable of the Base class.

public:
    int publicMember; // Public member variable of the Base class.

    // Constructor to initialize privateMember, protectedMember, and publicMember.
    Base(int privateVal, int protectedVal, int publicVal)
        : privateMember(privateVal), protectedMember(protectedVal), publicMember(publicVal) {}

    // Method to display privateMember, protectedMember, and publicMember.
    void display() {
        cout << "Private Member: " << privateMember << endl;
        cout << "Protected Member: " << protectedMember << endl;
        cout << "Public Member: " << publicMember << endl;
    }
};

// Define a derived class called Derived, inheriting from the Base class.
class Derived : public Base {
public:
    // Constructor to initialize Base class members.
    Derived(int privateVal, int protectedVal, int publicVal)
        : Base(privateVal, protectedVal, publicVal) {}

    // Method to access and display the protected and public members from Derived class.
    void accessAndDisplay() {
        cout << "Accessing Public Member from Derived: " << publicMember << endl;
        cout << "Accessing Protected Member from Derived: " << protectedMember << endl;
    }
};

// Main function
int main() {
    // Create an object of the Derived class.
    Derived derivedObj(1, 2, 3);

    cout << "Displaying Members from Derived Class:" << endl;
    derivedObj.accessAndDisplay(); // Access and display members from Derived class.

    cout << "\nDisplaying Members from Base Class:" << endl;
    derivedObj.display(); // Display members from Base class.

    return 0; // Indicate successful execution of the program.
}


