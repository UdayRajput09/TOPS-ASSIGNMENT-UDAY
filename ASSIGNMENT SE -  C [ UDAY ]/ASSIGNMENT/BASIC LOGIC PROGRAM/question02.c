//2. Write a program to make Simple calculator (to make addition, subtraction, 
//multiplication, division and modulo)

#include<stdio.h>

int main(){
	// Declare variables to store user input and calculation results
	int num1, num2, addition, subtraction, multiplication, division;
	
	// Prompt user to enter Number 1
	printf("Enter Number 1 : ");
	// Read Number 1 input from the user
	scanf("%d", &num1);
	
	// Prompt user to enter Number 2
	printf("\nEnter Number 2 :");
	// Read Number 2 input from the user
	scanf("%d", &num2);
	
	// Perform addition and store the result
	addition = num1 + num2;
	// Display the result of addition
	printf("\nAddition of Number 1 and Number 2 is : %d \n", addition);
	
	// Perform subtraction and store the result
	subtraction = num1 - num2;
	// Display the result of subtraction
	printf("\nSubtraction of Number 1 and Number 2 is : %d \n", subtraction);
	
	// Perform multiplication and store the result
	multiplication = num1 * num2;
	// Display the result of multiplication
	printf("\nMultiplication of Number 1 and Number 2 is : %d \n", multiplication);
	
	// Perform division and store the result
	division = num1 / num2;
	// Display the result of division
	printf("\nDivision of Number 1 and Number 2 is : %d \n", division);
	
	return 0; // Added return statement to indicate successful execution
}

