//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Ask the user for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the summation of digits
    while (num != 0) {
        digit = num % 10;   // Extract the last digit
        sum += digit;       // Add the digit to the sum
        num /= 10;          // Remove the last digit
    }

    // Print the negative sum
    printf("Summation of digits: %d\n", sum);

    
}

