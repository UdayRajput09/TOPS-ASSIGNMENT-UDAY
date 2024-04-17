//Question:5_Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
//Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
			
#include<iostream> // Include necessary header file for input/output operations.
using namespace std;

// Define a class for representing a triangle.
class Triangle {
private:
    double length1, length2, length3; // Private member variables to store the lengths of the sides.

public:
    // Constructor to initialize the lengths of the sides.
    Triangle(double l1, double l2, double l3) : length1(l1), length2(l2), length3(l3) {}

    // Method to check if the triangle is equilateral.
    bool triEquilateral() {
        return (length1 == length2 && length2 == length3); // Return true if all sides are equal.
    }

    // Method to check if the triangle is isosceles.
    bool triIsosceles() {
        return (length1 == length2 || length1 == length3 || length2 == length3); // Return true if at least two sides are equal.
    }

    // Method to check if the triangle is scalene.
    bool triScalene() {
        return (length1 != length2 && length2 != length3 && length1 != length3); // Return true if all sides are different.
    }
};

int main() {
    double length1, length2, length3;

    // Input lengths of the triangle sides from the user.
    cout << "Enter length of Triangle side 1: ";
    cin >> length1;
    cout << "Enter length of Triangle side 2: ";
    cin >> length2;
    cout << "Enter length of Triangle side 3: ";
    cin >> length3;

    Triangle triangle1(length1, length2, length3); // Create a triangle object with the provided side lengths.

    // Check the type of triangle and display the result.
    if (triangle1.triEquilateral()) {
        cout << "The Triangle is Equilateral." << endl;
    } else if (triangle1.triIsosceles()) {
        cout << "The Triangle is Isosceles." << endl;
    } else if (triangle1.triScalene()) {
        cout << "The Triangle is Scalene." << endl;
    }

    return 0; // Indicate successful execution of the program.
}

