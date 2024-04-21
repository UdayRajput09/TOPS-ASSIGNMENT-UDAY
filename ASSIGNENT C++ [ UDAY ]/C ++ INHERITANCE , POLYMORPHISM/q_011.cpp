#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
double calculateRectangleArea(double len, double brd) {
    return len * brd;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateCircleArea(double rad) {
    return 3.14 * rad * rad;
}

int main() {
    // Variables for user input
    double lengthRect, breadthRect, baseTri, heightTri, radiusCircle;

    // Get input for rectangle dimensions
    cout << "Enter length of rectangle: ";
    cin >> lengthRect;
    cout << "Enter breadth of rectangle: ";
    cin >> breadthRect;

    // Calculate and display the area of rectangle
    double rectangleArea = calculateRectangleArea(lengthRect, breadthRect);
    cout << "Area of rectangle: " << rectangleArea << endl;

    // Get input for triangle dimensions
    cout << "\nEnter base of triangle: ";
    cin >> baseTri;
    cout << "Enter height of triangle: ";
    cin >> heightTri;

    // Calculate and display the area of triangle
    double triangleArea = calculateTriangleArea(baseTri, heightTri);
    cout << "Area of triangle: " << triangleArea << endl;

    // Get input for circle radius
    cout << "\nEnter radius of circle: ";
    cin >> radiusCircle;

    // Calculate and display the area of circle
    double circleArea = calculateCircleArea(radiusCircle);
    cout << "Area of circle: " << circleArea << endl;

    return 0;
}

