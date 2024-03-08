//31. Convert kilometers into meters

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation result
    float kilometers, meters;

    // Prompt the user to enter the distance in kilometers
    printf("Enter the distance in kilometers: ");
    // Read the distance in kilometers input from the user
    scanf("%f", &kilometers);

    // Convert kilometers into meters
    meters = kilometers * 1000; // 1 kilometer = 1000 meters

    // Display the conversion result
    printf("\n%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0; // Added return statement to indicate successful execution
}

