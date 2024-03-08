//4. Find Area of Square formula : a = a2

#include <stdio.h>

int main(){
	// Declare variables to store user input and calculation result
	int area, square;
	
	// Prompt user to enter the area for the square
	printf("Enter area for square : ");
	// Read the area input from the user
	scanf("%d", &area);
	
	// Calculate the square of the area
	square = area * area;
	
	// Display the result, showing the original area and its square
	printf("\nSquare of %d is : %d", area, square);
	
	return 0; // Added return statement to indicate successful execution
}

