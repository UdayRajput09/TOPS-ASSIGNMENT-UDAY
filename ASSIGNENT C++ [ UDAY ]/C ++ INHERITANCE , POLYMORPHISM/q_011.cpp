//Question:11_Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
//Rectangle: Area * breadth Triangle: ½ *Area* breadth Circle: Pi * Area *Area 

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

// Function to calculate the area of a circle given its radius
double calculateArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle given its length and breadth
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle given its base and height
double calculateArea(double base, double height, char shape) {
    if (shape == 'T' || shape == 't') {
        return 0.5 * base * height;
    } else {
        cerr << "Invalid shape character. Please use 'T' for triangle." << endl;
        return 0.0;
    }
}

int main() {
    char choice;
    
    // Prompt the user to choose a shape
    cout << "Choose a shape ('C' for circle, 'R' for rectangle, 'T' for triangle): ";
    cin >> choice;

    // Use switch statement to handle different shape choices
    switch(choice) {
        case 'C':
        case 'c': {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << calculateArea(radius) << endl;
            break;
        }
        case 'R':
        case 'r': {
            double length, breadth;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the breadth of the rectangle: ";
            cin >> breadth;
            cout << "Area of the rectangle: " << calculateArea(length, breadth) << endl;
            break;
        }
        case 'T':
        case 't': {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Area of the triangle: " << calculateArea(base, height, 'T') << endl;
            break;
        }
        default:
            cerr << "Invalid choice. Please choose 'C', 'R', or 'T'." << endl;
    }

    return 0;
}


