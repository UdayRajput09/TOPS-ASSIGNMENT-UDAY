//Q-4 Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include<iostream>

using namespace std;

// Declaration of the Circle class
class Circle{
    // Private member variables
	private:
		double radius;
	
	public:
	    // Member function to set the radius of the circle
		void Setradius(double r){
			radius = r;
		}
		
		// Member function to calculate the area of the circle
		double Calculatearea(){
			return 3.14 * radius * radius; // Using the formula p * r^2
		}
		
		// Member function to calculate the circumference of the circle
		double Calculatecircum(){
			return 2 * 3.14 * radius; // Using the formula 2 * p * r
		}
};

// Main function
int main(){
    // Creating an object of the Circle class
	Circle obj;
	
	// Setting the radius of the circle
	obj.Setradius(29);
	
	// Printing the area of the circle
	cout<<"\nArea of circle is:"<<obj.Calculatearea();
	
	// Printing the circumference of the circle
	cout<<"\nCircumference of circle is:"<<obj.Calculatecircum();

}

