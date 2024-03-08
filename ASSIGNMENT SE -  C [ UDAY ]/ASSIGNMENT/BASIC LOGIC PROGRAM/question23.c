//23. WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>

int main() {
    // Declare variables to store employee names and salaries
    char name1[10], name2[10], name3[10], name4[10], name5[10];
    int salary1, salary2, salary3, salary4, salary5, total_salary, average_salary;

    // Prompt the user to enter the name and salary of the first employee
    printf("Enter First employee Name and salary:\n");
    printf("Name: ");
    scanf("%s", name1);
    printf("Salary: ");
    scanf("%d", &salary1);

    // Prompt the user to enter the name and salary of the second employee
    printf("\nEnter Second employee Name and salary:\n");
    printf("Name: ");
    scanf("%s", name2);
    printf("Salary: ");
    scanf("%d", &salary2);

    // Prompt the user to enter the name and salary of the third employee
    printf("\nEnter Third employee Name and salary:\n");
    printf("Name: ");
    scanf("%s", name3);
    printf("Salary: ");
    scanf("%d", &salary3);

    // Prompt the user to enter the name and salary of the fourth employee
    printf("\nEnter Fourth employee Name and salary:\n");
    printf("Name: ");
    scanf("%s", name4);
    printf("Salary: ");
    scanf("%d", &salary4);

    // Prompt the user to enter the name and salary of the fifth employee
    printf("\nEnter Fifth employee Name and salary:\n");
    printf("Name: ");
    scanf("%s", name5);
    printf("Salary: ");
    scanf("%d", &salary5);

    // Calculate the total salary of all employees
    total_salary = salary1 + salary2 + salary3 + salary4 + salary5;

    // Calculate the average salary of all employees
    average_salary = total_salary / 5;

    // Display the total salary and average salary of all employees
    printf("\nTotal salary of 5 employees is: %d\n", total_salary);
    printf("\nAverage salary of 5 employees is: %d", average_salary);

    return 0; // Added return statement to indicate successful execution
}

