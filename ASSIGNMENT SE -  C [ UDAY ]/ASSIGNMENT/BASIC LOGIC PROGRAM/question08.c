//8. Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation result
    int width, height, perimeter;

    // Prompt user to enter the width of the rectangle
    printf("Enter width of rectangle : ");
    // Read the width input from the user
    scanf("%d", &width);

    // Prompt user to enter the height of the rectangle
    printf("Enter height of rectangle : ");
    // Read the height input from the user
    scanf("%d", &height);

    // Calculate the perimeter of the rectangle using the formula: 2 * (width + height)
    perimeter = 2 * (width + height);

    // Display the calculated perimeter of the rectangle
    printf("\nPerimeter of rectangle is : %d", perimeter);

    return 0; // Added return statement to indicate successful execution
}

