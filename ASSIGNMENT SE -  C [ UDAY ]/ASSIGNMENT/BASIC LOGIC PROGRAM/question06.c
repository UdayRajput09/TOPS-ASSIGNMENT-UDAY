//6. Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>

int main(){
    // Declare variables to store user input and calculation result
    int area, base, height;

    // Prompt user to enter the area of the triangle
    printf("Enter area of triangle : ");
    // Read the area input from the user
    scanf("%d", &area);

    // Prompt user to enter the base of the triangle
    printf("Enter base of triangle : ");
    // Read the base input from the user
    scanf("%d", &base);

    // Prompt user to enter the height of the triangle
    printf("Enter height of triangle : ");
    // Read the height input from the user
    scanf("%d", &height);

    // Calculate the area of the triangle using the formula: (1/2) * base * height
    // Note: Use floating-point arithmetic to ensure accuracy in the calculation
    area = (1.0 / 2) * base * height;

    // Display the calculated area of the triangle
    printf("\nArea of triangle is : %d", area);

    return 0; // Added return statement to indicate successful execution
}

