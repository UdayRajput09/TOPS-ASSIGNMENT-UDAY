//Question:5_Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
//Implement member functions to calculate the rectangle's area and perimeter.
			
#include<iostream> // Include necessary header file for input/output operations.
#include<string> // Include necessary header file for string manipulation.
using namespace std;

class Rectangle {
private:
    double length; // Private member variable to store the length of the rectangle.
    double width; // Private member variable to store the width of the rectangle.
public:
    // Method to set the length of the rectangle.
    void setLength(double l) {
        length = l;
    }
    
    // Method to set the width of the rectangle.
    void setWidth(double w) {
        width = w;
    }
    
    // Method to calculate the area of the rectangle.
    double Area() {
        return length * width; // Return the area of the rectangle.
    }
    
    // Method to calculate the perimeter of the rectangle.
    double Perimeter() {
        return (2 * length) + (2 * width); // Return the perimeter of the rectangle.
    }
};

int main() {
    Rectangle rect; // Create an instance of the Rectangle class.
    double userLength, userWidth;
    cout << "Enter the Length of Rectangle: ";
    cin >> userLength; // Input the length of the rectangle from the user.
    cout << "Enter the Width of Rectangle: ";
    cin >> userWidth; // Input the width of the rectangle from the user.
    
    rect.setLength(userLength); // Set the length of the rectangle.
    rect.setWidth(userWidth); // Set the width of the rectangle.
    cout << "Area of Rectangle: " << rect.Area() << endl; // Display the area of the rectangle.
    cout << "Perimeter of Rectangle: " << rect.Perimeter() << endl; // Display the perimeter of the rectangle.
    return 0; // Indicate successful execution of the program.
}


