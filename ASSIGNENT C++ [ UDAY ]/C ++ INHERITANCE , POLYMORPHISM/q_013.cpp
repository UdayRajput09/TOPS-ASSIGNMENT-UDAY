//Question:13_Write a program to find the max number from given two numbers using friend function.

#include <iostream>
using namespace std;

// Class definition for MaxFinder
class MaxFinder {
private:
    int num1, num2;

public:
    // Constructor to initialize num1 and num2
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    // Friend function declaration to find the maximum number
    friend int findMax(const MaxFinder&);

    // Function to display the numbers
    void displayNumbers() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
    }
};

// Function definition to find the maximum number using reference to MaxFinder object
int findMax(const MaxFinder &mf) {
    int maxNumber = (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
    return maxNumber;
}

// Main function
int main() {
    int a, b;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Create MaxFinder object with the input numbers
    MaxFinder mf(a, b);

    // Display the input numbers
    mf.displayNumbers();

    // Call findMax function to find the maximum number
    int maxNumber = findMax(mf);
    cout << "Maximum number: " << maxNumber << endl;

    return 0;
}


