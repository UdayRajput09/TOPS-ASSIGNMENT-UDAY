//11. Find circumference of square formula : C = 4 * a

#include <stdio.h>

int main(){
    // Declare variables to store user input and calculation results
    int circumference, area;
    
    // Prompt user to enter the area of the square
    printf("Enter area of square : ");
    // Read the area input from the user
    scanf("%d", &area);
    
    // Calculate the circumference of the square using the formula: 4 * area
    circumference = 4 * area;
    
    // Display the calculated circumference of the square
    printf("\nCircumference of square is : %d", circumference);
    
    return 0; // Added return statement to indicate successful execution
}

