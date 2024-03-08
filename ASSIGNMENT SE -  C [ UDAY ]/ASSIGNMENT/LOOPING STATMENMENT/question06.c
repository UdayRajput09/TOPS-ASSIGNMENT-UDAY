//6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>

int main(){
    int num, first = 0, second = 1, next, i;

    // Ask the user for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the Fibonacci series up to the given number
    printf("Fibonacci series up to %d:\n", num);
    printf("%d\n", first); // Print the first number

    next = first + second;
    while(next <= num){
        printf("%d\n", next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}

