//Q-5 Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.


#include<iostream>

using namespace std;

// Declaration of the Rectangle class
class Rectangle{
    // Private member variables
	private:
		double length;
		double width;
	
	public:
	    // Setter function for setting length
		void setlen(double l){
			length = l;
		}
		
		// Setter function for setting width
		void setwid(double w){
			width = w;
		}
		
		// Member function to calculate area of rectangle
		double area(){
			return length * width; // Area = length * width
		}
		
		// Member function to calculate perimeter of rectangle
		double perameter(){
			return 2 * (length + width); // Perimeter = 2 * (length + width)
		}
};

// Main function
main(){
	Rectangle obj;
	
	double len,wid;
	
	// Prompting user to input length of rectangle
	cout<<"\nenter the lengh of rectangle : ";
	cin>>len;
	
	// Prompting user to input width of rectangle
	cout<<"\nenter the width of rectangle : ";
	cin>>wid;
	
	
	
	// Setting the length and width of the rectangle
	obj.setlen(len);
	obj.setwid(wid);



    // Calculating and printing the area of the rectangle
    cout<<"\narea of rectangle :"<<obj.area();
    
    
	
	// Calculating and printing the perimeter of the rectangle
	cout<<"\nperamiter of rectangle :"<<obj.perameter();	
}

