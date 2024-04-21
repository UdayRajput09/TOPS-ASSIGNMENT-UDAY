#include <iostream>
using namespace std;

// Function to perform integer addition
int addIntegers(int num1, int num2) {
    return num1 + num2;
}

// Function to perform double precision addition
double addDoubles(double num1, double num2) {
    return num1 + num2;
}

// Function to perform integer subtraction
int subtractIntegers(int num1, int num2, int num3) {
    return num1 - num2 - num3;
}

// Function to perform integer multiplication
int multiplyIntegers(int num1, int num2, int num3, int num4) {
    return num1 * num2 * num3 * num4;
}

// Function to perform double precision division
double divideDoubles(float num1, float num2) {
    if (num2 != 0.0)
        return num1 / num2;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    int result1, result2, result3;
    double result4, result5;

    // Addition
    result1 = addIntegers(15, 8);
    cout << "15 + 8 = " << result1 << endl;

    result4 = addDoubles(10.7, 6.9);
    cout << "10.7 + 6.9 = " << result4 << endl;

    // Subtraction
    result2 = subtractIntegers(30, 10, 7);
    cout << "30 - 10 - 7 = " << result2 << endl;

    // Multiplication
    result3 = multiplyIntegers(3, 5, 2, 4);
    cout << "3 * 5 * 2 * 4 = " << result3 << endl;

    // Division
    result5 = divideDoubles(25.0, 5.0);
    cout << "25.0 / 5.0 = " << result5 << endl;

    // Attempt to divide by zero
    result5 = divideDoubles(10.0, 0.0);
}

