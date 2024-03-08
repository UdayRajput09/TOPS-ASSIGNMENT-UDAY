//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6...........n


#include <stdio.h>

int main() {
    int n; 
	 double i ,  sum = 0;

    // Prompt the user to enter n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (i = 1; i <= n; i++) {
        if((int)i%2==1){
        	sum+=i/(i+1);
		}
		else{
			sum-=i/(i+1);
		}
       
    }

    printf("Sum = %d\n", sum);

    return 0;
}

