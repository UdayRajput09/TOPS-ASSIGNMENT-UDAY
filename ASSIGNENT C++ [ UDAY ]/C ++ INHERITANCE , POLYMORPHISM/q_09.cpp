#include<iostream>
using namespace std;

// Class for matrix addition
class MatrixAddition {
public:
    int element;

    // Constructor to initialize the matrix element
    MatrixAddition(int val) {
        element = val;
    }

    // Operator overloading for addition
    int operator +(MatrixAddition obj) {
        return element + obj.element;
    }
};

int main() {
    // Create objects for matrix elements
    MatrixAddition matrix1(66);
    MatrixAddition matrix2(92);

    // Perform addition and print the result
    cout << "Sum of the two matrix elements: " << matrix1 + matrix2;

    return 0;
}

