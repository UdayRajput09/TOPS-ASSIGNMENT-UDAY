//3. WAP to Find Area And Circumference of Circle

#include <stdio.h>

int main(){
	// Declare variables to store user input and calculation results
	float radius, area, circumference;
	
	// Prompt user to enter the radius of the circle
	printf("Enter the radius of the circle : ");
	// Read the radius input from the user
	scanf("%f", &radius);

	// Calculate the area of the circle using the formula: area = p * radius * radius
	area = 3.14 * radius * radius;

	// Calculate the circumference of the circle using the formula: circumference = 2 * p * radius
	circumference = 2 * 3.14 * radius;
	
	// Display the calculated area of the circle with two decimal places
	printf("\nArea of the Circle : %.2f \n", area);
	
	// Display the calculated circumference of the circle with two decimal places
	printf("\nCircumference of the Circle : %.2f \n", circumference);
	
	return 0; // Added return statement to indicate successful execution
}

