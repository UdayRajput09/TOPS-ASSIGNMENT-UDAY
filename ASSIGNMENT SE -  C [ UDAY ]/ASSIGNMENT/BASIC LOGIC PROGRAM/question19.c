//19.Calculate compound interest

#include <stdio.h>

int main() {
    float principal, amount, compound_interest;

    // Prompt the user to enter the principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Prompt the user to enter the total amount
    printf("Enter the total amount: ");
    scanf("%f", &amount);

    // Calculate the compound interest
    compound_interest = amount - principal;

    // Display the compound interest
    printf("Compound interest: %.2f\n", compound_interest);

    return 0;
}

