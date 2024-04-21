//Q-6 Write a C++ Program to show access to Private Public and Protected using 
//Inheritance
#include <iostream>
using namespace std;

// Base class
class BaseClass {
private:
    int privateVariable;
protected:
    int protectedVariable;
public:
    int publicVariable;

    // Constructor to initialize variables
    BaseClass(int prv, int prot, int pub) : privateVariable(prv), protectedVariable(prot), publicVariable(pub) {}

    // Function to display the values of base class variables
    void displayBaseClass() {
        cout << "Base Class:" << endl;
        cout << "Private Variable: Cannot be accessed directly from derived class" << endl;
        cout << "Protected Variable: " << protectedVariable << endl;
        cout << "Public Variable: " << publicVariable << endl;
    }
};

// Derived class
class DerivedClass : public BaseClass {
public:
    // Constructor to initialize base class variables
    DerivedClass(int prv, int prot, int pub) : BaseClass(prv, prot, pub) {}

    // Function to display the values of derived class variables
    void displayDerivedClass() {
        cout << "Derived Class:" << endl;
        // Cannot access privateVariable directly from derived class
        // cout << "Private Variable: " << privateVariable << endl;
        cout << "Protected Variable: " << protectedVariable << endl;
        cout << "Public Variable: " << publicVariable << endl;
    }
};

int main() {
    // Create an object of Derived class
    DerivedClass derivedObj(5, 10, 15);

    // Access and display base class variables using derived class object
    derivedObj.displayBaseClass();

    cout << endl;

    // Access and display derived class variables using derived class object
    derivedObj.displayDerivedClass();
}


