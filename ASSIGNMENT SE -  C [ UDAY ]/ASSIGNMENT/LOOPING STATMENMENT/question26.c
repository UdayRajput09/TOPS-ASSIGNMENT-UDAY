//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include <stdio.h>

int main() {
    int n, i , j , sum = 0;

    // Prompt the user to enter n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (i = 1; i <= n; i++) {
        
        for(j=1;j<=i;j++){
        	sum+=j;
		}
    }

    printf("Sum = %d\n", sum);

    return 0;
}



