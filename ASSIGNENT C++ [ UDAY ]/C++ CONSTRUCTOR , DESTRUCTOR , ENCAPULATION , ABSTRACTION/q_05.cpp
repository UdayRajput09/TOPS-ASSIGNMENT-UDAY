//Q-5. Write a C++ program to create a class called Triangle that has private 
//member variables for the lengths of its three sides. Implement member 
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

// Define the Triangle class
class Triangle {
private:
    double side1; // Length of side 1 of the triangle
    double side2; // Length of side 2 of the triangle
    double side3; // Length of side 3 of the triangle

public:
    // Constructor to initialize the Triangle object with side lengths
    Triangle(int side1Length, int side2Length, int side3Length) {
        side1 = side1Length;
        side2 = side2Length;
        side3 = side3Length;
    }

    // Function to check if the triangle is equilateral
    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to check if the triangle is isosceles
    bool isIsosceles() {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Function to check if the triangle is scalene
    bool isScalene() {
        return (side1 != side2 && side1 != side3 && side2 != side3);
    }

    // Function to display the type of triangle based on side lengths
    void displayType() {
        if (isEquilateral()) {
            cout<<"\ntriangle is equilateral.";
        } else if(isIsosceles()) {
            cout<<"\ntriangle is isosceles.";
        } else if(isScalene()) {
            cout<<"\ntriangle is scalene.";
        } else {
            cout<<"\nInvalid";
        }
    }
};

int main() {
    int side1, side2, side3;
    
    // Prompt the user to enter the lengths of the triangle's sides
    cout<<"Enter side 1: ";
    cin>>side1;
    
    cout<<"Enter side 2: ";
    cin>>side2;
    
    cout<<"Enter side 3: ";
    cin>>side3;
    
    
    Triangle obj(side1, side2, side3);
    
    // Display the type of triangle
    obj.displayType();
    
}


