//18. Calculate person’s Annual salary 

#include<stdio.h>

int main() {
    // Declare variables to store user input and calculation result
    float monthly_salary, annual_salary;
    int months_in_year = 12; // Number of months in a year
    
    // Prompt the user to enter their monthly salary
    printf("Enter Your Monthly Salary : ");
    // Read the monthly salary input from the user
    scanf("%f", &monthly_salary);
    
    // Calculate the annual salary by multiplying the monthly salary by the number of months in a year
    annual_salary = months_in_year * monthly_salary;
    
    // Display the calculated annual salary
    printf("Your annual salary is : %.2f", annual_salary);
    
    return 0; // Added return statement to indicate successful execution
}

