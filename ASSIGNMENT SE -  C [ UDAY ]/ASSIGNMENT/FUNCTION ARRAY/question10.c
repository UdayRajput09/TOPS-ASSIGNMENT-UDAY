//10.WAP to perform Palindrome number using for loop and function


#include<stdio.h>

// Function to check if a number is palindrome
int pali(int num) {
    int originalnum = num, reversnum = 0;

    // Loop to reverse the number
    for (; num > 0; num /= 10) {
        int digit = num % 10;
        reversnum = reversnum * 10 + digit;
    }

    // Check if the original number is equal to its reverse
    return (originalnum == reversnum);
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    // Check if the number is palindrome
    if (pali(number)) {
        printf("%d is a palindrome", number);
    } else {
        printf("%d is not a palindrome", number);
    }
    return 0;
}

