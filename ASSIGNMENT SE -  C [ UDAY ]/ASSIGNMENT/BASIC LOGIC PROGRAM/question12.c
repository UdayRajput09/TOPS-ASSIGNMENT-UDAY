//12. Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required?

#include <stdio.h>

int main() {
    // Declare variables to store user input and calculation result
    int num_students, total_apples;

    // Prompt the user to enter the number of students
    printf("Enter number of students: ");
    // Read the number of students input from the user
    scanf("%d", &num_students);

    // Calculate the total number of apples needed by multiplying the number of students by 5
    // (Assuming each student needs 5 apples)
    total_apples = num_students * 5;

    // Display the total number of apples needed
    printf("Total number of apples needed is: %d", total_apples);

    return 0; // Added return statement to indicate successful execution
}

