//Question:4_Write a C++ program to implement a class called Circle that has private member variables for radius. 
//Include member functions to calculate the circle's area and circumference.
			
#include<iostream> // Include necessary header file for input/output operations.
#include<string> // Include necessary header file for string manipulation.
using namespace std;

class Circle{
private:
    double radius; // Private member variable to store the radius of the circle.
public:
    // Method to set the radius of the circle.
    void setRadius(double r){
        if(r>=0) // Check if the radius is non-negative.
        {
            radius=r;
        }
        else
        {
            cout<<"Radius cannot be negative."; // Display error message if the radius is negative.
        }
    }
    
    // Method to calculate the area of the circle.
    double Area(){
        return 3.14*radius*radius; // Return the area of the circle.
    }
    
    // Method to calculate the circumference of the circle.
    double Circumference(){
        return 2*3.14*radius; // Return the circumference of the circle.
    }
};

int main()
{
    Circle circle1; // Create an instance of the Circle class.
    double userRadius;
    cout << "Enter radius of Circle: ";
    cin >> userRadius; // Input the radius of the circle from the user.
    
    circle1.setRadius(userRadius); // Set the radius of the circle.
    cout<<"Area of circle: "<<circle1.Area()<<endl; // Display the area of the circle.
    cout<<"Circumference of circle: "<<circle1.Circumference()<<endl; // Display the circumference of the circle.
    // No return statement needed since main function is declared as void.
}


