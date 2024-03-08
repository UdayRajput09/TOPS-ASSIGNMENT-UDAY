//32. Accept 2 numbers and find out its sum check it size

#include <stdio.h>
#include <limits.h>

int main() {
    // Declare variables to store user input and calculation result
    int num1, num2, sum;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number input from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number input from the user
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the sum
    printf("\nThe sum of %d and %d is: %d\n", num1, num2, sum);

    // Check the size of the sum
    printf("Size of sum: %lu bytes\n", sizeof(sum));

    return 0; // Added return statement to indicate successful execution
}

