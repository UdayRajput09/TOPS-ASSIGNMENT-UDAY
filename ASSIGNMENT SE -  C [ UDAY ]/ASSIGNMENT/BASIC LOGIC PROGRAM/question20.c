//20. Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.


#include<stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    float monthly_salary, insurance_premium, loan_installment, remaining_salary;
    float insurance_percentage = 0.10; // 10% insurance premium
    float loan_percentage = 0.10; // 10% loan installment
    
    // Prompt the user to enter their monthly salary
    printf("Enter Your Monthly Salary: ");
    // Read the monthly salary input from the user
    scanf("%f", &monthly_salary);
    
    // Calculate the insurance premium (10% of monthly salary)
    insurance_premium = insurance_percentage * monthly_salary;
    
    // Deduct the insurance premium from the monthly salary
    remaining_salary = monthly_salary - insurance_premium;
    
    // Calculate the loan installment (10% of remaining salary)
    loan_installment = loan_percentage * remaining_salary;
    
    // Deduct the loan installment from the remaining salary
    remaining_salary -= loan_installment;
    
    // Display the insurance premium, loan installment, and remaining salary
    printf("Insurance Premium: %.2f\n", insurance_premium);
    printf("Loan Installment: %.2f\n", loan_installment);
    printf("Remaining Salary: %.2f\n", remaining_salary);
    
    return 0; // Added return statement to indicate successful execution
}

