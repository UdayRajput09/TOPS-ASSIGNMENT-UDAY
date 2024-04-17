//Question:8_Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of 
//two number using different parameters and Function Overloading
			
#include <iostream> // Include necessary header file for input/output operations.
using namespace std;

// Define a class called MathOperations for performing mathematical operations.
class MathOperations {
public:
    // Function to add two integers.
    int operate(int a, int b) {
        return a + b;
    }

    // Function to add two floating-point numbers.
    float operate(float a, float b) {
        return a + b;
    }

    // Function to subtract three integers.
    int operate(int a, int b, int c) {
        return a - b - c;
    }

    // Function to multiply four integers.
    int operate(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    // Function to divide three floating-point numbers, handling division by zero.
    float operate(float a, float b, float c) {
        if (b != 0 && c != 0) {
            return a / (b * c);
        } else {
            cout << "Cannot divide by zero. Returning 0." << endl;
            return 0;
        }
    }
};

// Main function
int main() {
    MathOperations math; // Create an object of class MathOperations.

    // Perform addition operation for integers.
    int intOperand1, intOperand2;
    cout << "Enter two integers for addition: ";
    cin >> intOperand1 >> intOperand2;
    cout << "Addition (int): " << math.operate(intOperand1, intOperand2) << endl;

    // Perform addition operation for floating-point numbers.
    float floatOperand1, floatOperand2;
    cout << "Enter two floating-point numbers for addition: ";
    cin >> floatOperand1 >> floatOperand2;
    cout << "Addition (float): " << math.operate(floatOperand1, floatOperand2) << endl;

    // Perform subtraction operation for integers.
    int intOperand3, intOperand4, intOperand5;
    cout << "Enter three integers for subtraction: ";
    cin >> intOperand3 >> intOperand4 >> intOperand5;
    cout << "Subtraction: " << math.operate(intOperand3, intOperand4, intOperand5) << endl;

    // Perform multiplication operation for integers.
    int intOperand6, intOperand7, intOperand8, intOperand9;
    cout << "Enter four integers for multiplication: ";
    cin >> intOperand6 >> intOperand7 >> intOperand8 >> intOperand9;
    cout << "Multiplication: " << math.operate(intOperand6, intOperand7, intOperand8, intOperand9) << endl;

    // Perform division operation for floating-point numbers.
    float floatOperand3, floatOperand4, floatOperand5;
    cout << "Enter three floating-point numbers for division: ";
    cin >> floatOperand3 >> floatOperand4 >> floatOperand5;
    cout << "Division: " << math.operate(floatOperand3, floatOperand4, floatOperand5) << endl;

    return 0; // Indicate successful execution of the program.
}


