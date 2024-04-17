//Question:1_Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream> // Include necessary header file for input/output operations.
using namespace std;

// Function to perform multiplication of two numbers.
inline double multiply(double a, double b) {
    return a * b; // Return the result of multiplication.
}

// Function to find the cubic of a number.
inline double cubic(double c) {
    return c * c * c; // Return the result of cubic.
}

int main() {
    double num1, num2, num3;

    // Input two numbers to multiply from the user.
    cout << "Enter two numbers to multiply:  ";
    cin >> num1 >> num2;

    // Input a number to find the cubic from the user.
    cout << "Enter number to find cubic: ";
    cin >> num3;

    cout << "\n____Result____\n";

    // Calculate and display the result of multiplication.
    double resultMultiplication = multiply(num1, num2);
    cout << "Multiplication of two Numbers: " << resultMultiplication << endl;

    // Calculate and display the result of cubic.
    double resultCubic = cubic(num3);
    cout << "Cubic of Number: " << resultCubic;

    return 0; // Indicate successful execution of the program.
}

