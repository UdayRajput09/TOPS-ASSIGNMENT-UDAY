//22. Calculate compound interest(Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    float amount, principle, rate, time, compound_interest;
    
    // Prompt the user to enter the principal amount
    printf("Enter Principle amount: ");
    // Read the principal amount input from the user
    scanf("%f", &principle);
    
    // Prompt the user to enter the rate
    printf("Enter Rate: ");
    // Read the rate input from the user
    scanf("%f", &rate);
    
    // Prompt the user to enter the time
    printf("Enter Time: ");
    // Read the time input from the user
    scanf("%f", &time);
    
    // Calculate the amount using the compound interest formula
    amount = principle * (1 + rate / 100) * time;
    
    // Calculate the compound interest
    compound_interest = amount - principle;
    
    // Display the compound interest
    printf("\nCompound Interest is: %.2f", compound_interest);

    return 0; // Added return statement to indicate successful execution
}

