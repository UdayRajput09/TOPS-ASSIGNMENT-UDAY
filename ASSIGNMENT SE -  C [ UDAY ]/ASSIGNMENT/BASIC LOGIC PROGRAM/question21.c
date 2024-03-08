//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable

#include<stdio.h>

int main() {
    // Declare variables to store the numbers
    int num1, num2, num3;
    
    // Prompt the user to enter the first number
    printf("Enter number One: ");
    // Read the first number input from the user
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter number Two: ");
    // Read the second number input from the user
    scanf("%d", &num2);

    // Swapping numbers using a third variable
    printf("\n----Swapping numbers using a third variable---- \n");
    printf("\nBefore Swapping: \n");
    printf("num1 = %d , num2 = %d \n", num1, num2);
    
    // Store the value of num1 in num3
    num3 = num1;
    // Assign the value of num2 to num1
    num1 = num2;
    // Assign the value of num3 (initially num1) to num2
    num2 = num3;
    
    printf("\nAfter Swapping: \n");
    printf("num1 = %d , num2 = %d \n", num1, num2);
    
    
    // Swapping numbers without using a third variable
    printf("\n----Swapping numbers without using a third variable----\n");
    printf("\nBefore Swapping: \n");
    printf("num1 = %d , num2 = %d \n", num1, num2);
    
    // Swapping without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    printf("\nAfter Swapping: \n");
    printf("num1 = %d , num2 = %d \n", num1, num2);

    return 0; // Added return statement to indicate successful execution
}

