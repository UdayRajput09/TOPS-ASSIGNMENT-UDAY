//Question:2_Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream> // Include necessary header file for input/output operations.
using namespace std;

class Calculation {
private:
    double operand1, operand2; // Private member variables to store the operands.

public:
    // Constructor to initialize the operands.
    Calculation(double num1, double num2) {
        operand1 = num1;
        operand2 = num2;
    }

    // Method to perform addition.
    double add() {
        return operand1 + operand2; // Return the result of addition.
    }

    // Method to perform subtraction.
    double sub() {
        return operand1 - operand2; // Return the result of subtraction.
    }

    // Method to perform multiplication.
    double multiplication() {
        return operand1 * operand2; // Return the result of multiplication.
    }

    // Method to perform division.
    double division() {
        if (operand2 != 0) {
            return operand1 / operand2; // Return the result of division if the second operand is not zero.
        } else {
            return 0.0; // Return 0.0 if the second operand is zero to avoid division by zero error.
        }
    }
};  

int main() {
    double num1, num2;
    cout << "Enter First Number: ";
    cin >> num1; // Input the first number from the user.
    cout << "Enter Second Number: ";
    cin >> num2; // Input the second number from the user.

    Calculation cal(num1, num2); // Create a Calculation object with the provided numbers.
    cout << "Addition of two Numbers: " << cal.add() << endl; // Display the result of addition.
    cout << "Subtraction of two Numbers: " << cal.sub() << endl; // Display the result of subtraction.
    cout << "Multiplication of two Numbers: " << cal.multiplication() << endl; // Display the result of multiplication.
    cout << "Division of two Numbers: " << cal.division() << endl; // Display the result of division.

    return 0; // Indicate successful execution of the program.
}

	
	
