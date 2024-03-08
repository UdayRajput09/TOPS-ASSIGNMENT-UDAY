//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
//82746


#include<stdio.h>

int main(){
    int n, reverse = 0, reminder; // Declare variables to store the number, reverse, and remainder

    // Ask the user for the number
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Reverse the number
    while(n != 0){
        reminder = n % 10;      // Extract the last digit of the number
        reverse = reverse * 10 + reminder;   // Append the extracted digit to the reversed number
        n /= 10;               // Remove the last digit from the original number
    }
    
    // Print the reversed number
    printf("Reversed number: %d", reverse);
    
    return 0;
}

