//30. WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    int years, days;

    // Prompt the user to enter the number of years
    printf("Enter the number of years: ");
    // Read the number of years input from the user
    scanf("%d", &years);

    // Convert years into days
    days = years * 365; // Assuming 1 year = 365 days

    // Display the conversion results
    printf("\n%d years is equal to %d days.\n", years, days);

    // Prompt the user to enter the number of days
    printf("\nEnter the number of days: ");
    // Read the number of days input from the user
    scanf("%d", &days);

    // Convert days into years
    years = days / 365; // Assuming 1 year = 365 days

    // Display the conversion results
    printf("\n%d days is equal to %d years.\n", days, years);

    return 0; // Added return statement to indicate successful execution
}

