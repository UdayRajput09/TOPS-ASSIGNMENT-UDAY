//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main(){
    // Declare variables to store user input and calculation result
    int area, width, height, length;
    
    // Prompt user to enter the width of the triangle
    printf("Enter width of triangle: ");
    // Read the width input from the user
    scanf("%d", &width);
    
    // Prompt user to enter the height of the triangle
    printf("Enter height of triangle: ");
    // Read the height input from the user
    scanf("%d", &height);
    
    // Prompt user to enter the length of the triangle
    printf("Enter length of triangle: ");
    // Read the length input from the user
    scanf("%d", &length);
    
    // Calculate the area of the rectangular prism using the formula
    // Surface Area = 2 * (length * width + height * length + height * width)
    area =  2 * (width * length + height * length + height * width);
    
    // Display the calculated area of the rectangular prism
    printf("\nArea of rectangular prism is : %d", area);
    
    return 0; // Added return statement to indicate successful execution
}

