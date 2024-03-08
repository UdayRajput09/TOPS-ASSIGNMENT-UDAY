//29. Convert minutes into seconds and hours


#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    int minutes, hours, seconds;

    // Prompt the user to enter the number of minutes
    printf("Enter the number of minutes: ");
    // Read the number of minutes input from the user
    scanf("%d", &minutes);

    // Convert minutes into hours and seconds
    hours = minutes / 60; // 1 hour = 60 minutes
    seconds = minutes * 60; // 1 minute = 60 seconds

    // Display the conversion results
    printf("\n%d minutes is equal to:\n", minutes);
    printf("Hours: %d\n", hours);
    printf("Seconds: %d\n", seconds);

    return 0; // Added return statement to indicate successful execution
}

