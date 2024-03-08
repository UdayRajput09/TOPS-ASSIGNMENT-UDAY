//28. Convert years into days and months

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    int years, months, days;

    // Prompt the user to enter the number of years
    printf("Enter the number of years: ");
    // Read the number of years input from the user
    scanf("%d", &years);

    // Convert years into months and days
    months = years * 12; // 1 year = 12 months
    days = years * 365;  // Assuming 1 year = 365 days

    // Display the conversion results
    printf("\n%d years is equal to:\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);

    return 0; // Added return statement to indicate successful execution
}

