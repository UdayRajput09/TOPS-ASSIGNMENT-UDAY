//3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers


#include<stdio.h>

int main(){
	
	// Declare variables to store user input and counts
	int num, i, even = 0, odd = 0, evensum = 0, oddsum = 0;
	
	// Loop 10 times to get 10 numbers from the user
	for(i = 0; i < 10; i++){
		printf("Enter number: ");
		scanf("%d", &num);
		
		// Check if the number is even
		if(num % 2 == 0){
			even = even + 1;    // Increment count of even numbers
			evensum = evensum + num;  // Add even number to even sum
		}
		else{
			odd = odd + 1;      // Increment count of odd numbers
			oddsum = oddsum + num;    // Add odd number to odd sum
		}
	}
	
	// Print the total count of even and odd numbers, and their sums
	printf("Total even numbers: %d \n", even);
	printf("Total odd numbers: %d \n", odd);
	printf("Total sum of even numbers: %d \n", evensum);
	printf("Total sum of odd numbers: %d", oddsum);
	
	return 0; // Indicate successful completion of the program
}

