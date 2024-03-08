//28. 1 2 3 6 9 18 27 54...


#include <stdio.h>

int main() {
    int n , i;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int term = 1; // Initialize the first term of the series to 1

    // Print the first n terms of the series
    for (i = 0; i < n; i++) {
        printf("%d ", term);
        if (term % 2 == 0) {
            term *= 2; // Double the term if it's even
        } else {
            term *= 3; // Triple the term if it's odd
        }
    }

    return 0;
}

