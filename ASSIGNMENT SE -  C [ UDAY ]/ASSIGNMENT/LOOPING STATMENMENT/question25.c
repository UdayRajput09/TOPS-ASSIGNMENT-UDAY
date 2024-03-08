//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)



#include <stdio.h>

int main() {
    int n, i , sum = 0;

    // Prompt the user to enter n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}



