//Question:12_Write a program to swap the two numbers using friend function without using third variable.

#include <iostream>
using namespace std;

// Class definition for NumberSwapper
class NumberSwapper {
private:
    int num1, num2;

public:
    // Constructor to initialize num1 and num2
    NumberSwapper(int a, int b) : num1(a), num2(b) {}

    // Friend function declaration to swap numbers
    friend void swapNumbers(NumberSwapper&);

    // Function to display the swapped numbers
    void displayNumbers() {
        cout << "Numbers after swapping: " << num1 << " and " << num2 << endl;
    }
};

// Function definition to swap numbers using reference to NumberSwapper object
void swapNumbers(NumberSwapper &ns) {
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

// Main function
int main() {
    int a, b;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Create NumberSwapper object with the input numbers
    NumberSwapper ns(a, b);

    // Display original numbers
    cout << "\nOriginal numbers: " << a << " and " << b << endl;

    // Call swapNumbers function to swap the numbers
    swapNumbers(ns);

    // Display swapped numbers
    ns.displayNumbers();

    return 0;
}


