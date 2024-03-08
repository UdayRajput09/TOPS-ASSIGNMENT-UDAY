//4. WAP to print table up to given numbers


#include<stdio.h>

int main(){
    int num, i;

    // Ask the user for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the multiplication table for the entered number
    printf("Multiplication table for %d:\n", num);
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }


}



