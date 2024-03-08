//6. WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array

#include <stdio.h>

// Function to add two matrices
void addMatrix(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrix(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrix(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            
            for (k = 0; k < 3; k++) {
                result[i][j] = mat1[i][j] * mat2[i][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j;
    
    // Input for the first matrix
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Enter elements of first matrix (3x3):\n");
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input for the second matrix
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Enter elements of second matrix (3x3):\n");
            scanf("%d", &mat2[i][j]);
        }
    }

    // Display the first matrix
    printf("\nFirst Matrix:\n");
    displayMatrix(mat1);

    // Display the second matrix
    printf("\nSecond Matrix:\n");
    displayMatrix(mat2);

    // Perform matrix addition
    addMatrix(mat1, mat2, result);
    printf("\nAddition Result:\n");
    displayMatrix(result);

    // Perform matrix subtraction
    subtractMatrix(mat1, mat2, result);
    printf("\nSubtraction Result:\n");
    displayMatrix(result);

    // Perform matrix multiplication
    multiplyMatrix(mat1, mat2, result);
    printf("\nMultiplication Result:\n");
    displayMatrix(result);

    return 0;
}



