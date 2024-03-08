//7. Find area of Rectangle Formula : A=wl

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation result
    int width, height, areaofrec;

    // Prompt user to enter the width of the rectangle
    printf("Enter width of rectangle : ");
    // Read the width input from the user
    scanf("%d", &width);

    // Prompt user to enter the height of the rectangle
    printf("Enter height of rectangle : ");
    // Read the height input from the user
    scanf("%d", &height);

    // Calculate the area of the rectangle using the formula: width * height
    areaofrec = width * height;

    // Display the calculated area of the rectangle
    printf("\nArea of rectangle is : %d", areaofrec);

    return 0; // Added return statement to indicate successful execution
}

