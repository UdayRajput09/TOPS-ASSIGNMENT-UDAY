//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    // Read the integer input from the user
    scanf("%d", &number);

    // Calculate and print the first three powers of the integer
    printf("\nThe first three powers of %d are:\n", number);
    printf("%d^1 = %d\n", number, number);         // N^1
    printf("%d^2 = %d\n", number, number * number); // N^2
    printf("%d^3 = %d\n", number, number * number * number); // N^3

    return 0; // Added return statement to indicate successful execution
}

