//10. Write a program you have to make a summation of first and last Digit. (E.g., 
//1234 Ans: -5)


#include<stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;
    
    // Prompt the user to enter a number
    printf("Enter Number: ");
    scanf("%d", &num);
    
    // Extract the first digit of the number
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    
    // Extract the last digit of the number
    lastDigit = num % 10;
    
    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;
    
    
    // Display the sum
    printf("Sum of first and last digit: %d", sum);
    

}

