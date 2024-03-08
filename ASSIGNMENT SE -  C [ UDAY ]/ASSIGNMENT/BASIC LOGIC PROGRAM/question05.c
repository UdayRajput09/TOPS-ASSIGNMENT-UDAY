//5. Find Area of Cube formula : a = 6a2


#include <stdio.h>

int main(){
	// Declare a variable to store the area of the cube
	int area;
	
	// Prompt user to enter the area of the cube
	printf("Enter area of cube : ");
	// Read the area input from the user
	scanf("%d", &area);
	
	// Calculate the total surface area of the cube using the formula: 6 * area * area
	area = 6 * area * area;
	
	// Display the calculated total surface area of the cube
	printf("\nArea of cube is : %d", area);
	
	return 0; // Added return statement to indicate successful execution
}

