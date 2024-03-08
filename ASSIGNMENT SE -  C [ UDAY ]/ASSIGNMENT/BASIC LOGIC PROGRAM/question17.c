//17. Calculate person’s insurance premium based on salary

#include<stdio.h>

int main() {
    // Declare variables to store user input and calculation result
    float salary, premium;
    
    // Prompt the user to enter their salary
    printf("Enter Your salary: ");
    // Read the salary input from the user
    scanf("%f", &salary);
    
    // Calculate the premium (insurance) based on the salary (assuming 10%)
    premium = 0.1 * salary;
    
    // Display the calculated premium (insurance)
    printf("\nYour insurance based on your salary is : %.2f", premium);
    
    return 0; // Added return statement to indicate successful execution
}




