//1. Write a program in C to find the length of a string without using library 
//functions.


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);

    // Counting characters until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    
    printf("Length of the string: %d\n", length);

    return 0;
}

