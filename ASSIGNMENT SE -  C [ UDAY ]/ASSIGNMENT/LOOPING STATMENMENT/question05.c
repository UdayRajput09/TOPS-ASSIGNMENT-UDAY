//5. WAP to print factorial of given number

#include<stdio.h>

int main(){
    int num, factorial = 1, i;

    // Ask the user for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the factorial
    for(i = 1; i <= num; i++){
        factorial *= i;
    }

    // Print the factorial
    printf("Factorial of %d is: %d\n", num, factorial);

    return 0;
}

