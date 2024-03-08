//25. Accept 5 expense from user and find average of expense


#include<stdio.h>

int main() {
    // Declare variables to store each expense and the total/average
    int expensive1, expensive2, expensive3, expensive4, expensive5, total, average;
    
    // Prompt the user to enter the first expense
    printf("Enter first Expense: ");
    scanf("%d", &expensive1);
    
    // Prompt the user to enter the second expense
    printf("\nEnter second Expense: ");
    scanf("%d", &expensive2);
    
    // Prompt the user to enter the third expense
    printf("\nEnter third Expense: ");
    scanf("%d", &expensive3);
    
    // Prompt the user to enter the fourth expense
    printf("\nEnter fourth Expense: ");
    scanf("%d", &expensive4);
    
    // Prompt the user to enter the fifth expense
    printf("\nEnter fifth Expense: ");
    scanf("%d", &expensive5);
    
    // Calculate the total of all expenses
    total = expensive1 + expensive2 + expensive3 + expensive4 + expensive5;
    
    // Calculate the average of all expenses
    average = total / 5;
    
    // Display the average expense
    printf("\nAverage of 5 Expenses is: %d", average);
    
    return 0; // Added return statement to indicate successful execution
}

