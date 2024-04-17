//Question:9_Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream> // Include necessary header file for input/output operations.
using namespace std;

// Define a class called Matrix for representing matrices and performing matrix addition.
class Matrix {
private:
    int size; // Size of the matrix.
    int *elements; // Pointer to store elements of the matrix.

public:
    // Constructor to initialize the matrix with a given size.
    Matrix(int s) : size(s) {
        elements = new int[size]; // Allocate memory for storing elements.
    }

    // Overloaded '+' operator to perform matrix addition.
    Matrix operator+(const Matrix &other) {
        // Check if the sizes of the matrices are the same.
        if (size != other.size) {
            cerr << "Error: Matrices must have the same size for addition." << endl;
            return Matrix(0); // Return an empty matrix if addition is not possible.
        }

        // Create a result matrix with the same size as the input matrices.
        Matrix result(size);

        // Perform element-wise addition and store the result in the result matrix.
        for (int i = 0; i < size; ++i) {
            result.elements[i] = elements[i] + other.elements[i];
        }

        return result; // Return the result matrix.
    }

    // Function to check if the matrix is valid (i.e., non-empty).
    bool isValid() {
        return size != 0;
    }

    // Function to input elements of the matrix from the user.
    void inputMatrix() {
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> elements[i];
        }
    }

    // Function to display the elements of the matrix.
    void displayMatrix() {
        cout << "Matrix: [";
        for (int i = 0; i < size; ++i) {
            cout << elements[i];
            if (i < size - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    // Destructor to deallocate memory for elements array.
    ~Matrix() {
        delete[] elements; // Free the dynamically allocated memory.
    }
};

// Main function
int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    // Create two matrix objects with the specified size.
    Matrix matrix1(size);
    Matrix matrix2(size);

    // Input elements for the matrices
    cout << "\nEnter elements for the first matrix:" << endl;
    matrix1.inputMatrix();

    cout << "\nEnter elements for the second matrix:" << endl;
    matrix2.inputMatrix();

    // Perform matrix addition using overloaded '+' operator
    Matrix resultMatrix = matrix1 + matrix2;

    // Display the matrices and the result if valid
    cout << "\nMatrix 1:" << endl;
    matrix1.displayMatrix();

    cout << "\nMatrix 2:" << endl;
    matrix2.displayMatrix();

    // Display result if matrix addition was successful
    if (resultMatrix.isValid()) {
        cout << "\nResultant Matrix (Matrix1 + Matrix2):" << endl;
        resultMatrix.displayMatrix();
    } else {
        cout << "\nError occurred during matrix addition. Exiting." << endl;
    }

    return 0; // Indicate successful execution of the program.
}



