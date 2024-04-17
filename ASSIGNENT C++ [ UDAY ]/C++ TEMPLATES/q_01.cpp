//Question:1_Write a program of to swap the two values using template

#include <iostream>
using namespace std;

// Template function to swap values of any type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;  // Temporary variable to hold the value of 'a'
    a = b;       // Assign value of 'b' to 'a'
    b = temp;    // Assign value of 'temp' (which holds the original value of 'a') to 'b'
}

int main() {
    int intA, intB;
    double doubleA, doubleB;

    // Input two integer values from the user
    cout << "Enter two integer values separated by space: ";
    cin >> intA >> intB;

    // Call the swapValues function for integers and display the result
    swapValues(intA, intB);
    cout << "After swapping integers: " << intA << " " << intB << endl;

    // Input two double values from the user
    cout << "\nEnter two double values separated by space: ";
    cin >> doubleA >> doubleB;

    // Call the swapValues function for doubles and display the result
    swapValues(doubleA, doubleB);
    cout << "After swapping doubles: " << doubleA << " " << doubleB << endl;

    return 0;
}


