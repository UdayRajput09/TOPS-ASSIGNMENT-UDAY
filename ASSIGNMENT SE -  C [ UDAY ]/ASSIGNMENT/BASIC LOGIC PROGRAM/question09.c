//9. Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main(){
    // Declare variables to store user input and calculation result
    int circumference, side1, side2, side3;
    
    // Prompt user to enter the length of side 1 of the triangle
    printf("Enter side 1 of triangle : ");
    // Read the length of side 1 input from the user
    scanf("%d", &side1);
    
    // Prompt user to enter the length of side 2 of the triangle
    printf("Enter side 2 of triangle : ");
    // Read the length of side 2 input from the user
    scanf("%d", &side2);
    
    // Prompt user to enter the length of side 3 of the triangle
    printf("Enter side 3 of triangle : ");
    // Read the length of side 3 input from the user
    scanf("%d", &side3);
    
    // Calculate the circumference of the triangle by adding the lengths of all three sides
    circumference = side1 + side2 + side3;
    
    // Display the calculated circumference of the triangle
    printf("\nCircumference of triangle is : %d", circumference);
    
    return 0; // Added return statement to indicate successful execution
}

