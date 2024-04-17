//Question:2_Write a C++ Program to find Area of Rectangle using inheritance.

#include <iostream> // Include necessary header file for input/output operations.
using namespace std;

// Define a base class for representing a shape.
class Shape {
public:
    double calculateArea; // Public member variable to calculate area.
    double Shape; // Public member variable representing shape.
};

// Define a derived class for representing a rectangle, inheriting from Shape.
class Rectangle : public Shape {
private:
    double length, width; // Private member variables to store length and width of the rectangle.

public:
    // Constructor to initialize the length and width of the rectangle.
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to calculate the area of the rectangle.
    double calculateArea() {
        return length * width; // Return the calculated area.
    }
};

int main() {
    double length, width;

    // Input length of the rectangle from the user.
    cout << "Enter length of the rectangle: ";
    cin >> length;

    // Input width of the rectangle from the user.
    cout << "Enter width of the rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width); // Create a Rectangle object with given length and width.

    // Display the area of the rectangle.
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    return 0; // Indicate successful execution of the program.
}


