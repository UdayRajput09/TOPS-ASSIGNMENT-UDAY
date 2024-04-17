//Question:2_Write a program of to sort the array using templates

#include <iostream>
using namespace std;

// Template function to swap elements of any type
template <typename T>
void swapElements(T &a, T &b) {
    T temp = a;  // Temporary variable to hold the value of 'a'
    a = b;       // Assign value of 'b' to 'a'
    b = temp;    // Assign value of 'temp' (which holds the original value of 'a') to 'b'
}

// Template function to perform bubble sort on an array
template <typename T>
void bubbleSort(T arr[], int size) {
    // Iterate through the array
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Swap adjacent elements if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                swapElements(arr[j], arr[j + 1]);
            }
        }
    }
}

// Template function to display elements of an array
template <typename T>
void displayArray(const T arr[], int size) {
    cout << "Sorted Array: ";
    // Iterate through the array and display each element
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 5;
    // Define an array of integers and doubles
    int intArray[size] = {5, 2, 8, 1, 7};
    double doubleArray[size] = {3.5, 1.2, 7.8, 2.1, 6.7};

    // Sort and display the integer array
    bubbleSort(intArray, size);
    displayArray(intArray, size);

    // Sort and display the double array
    bubbleSort(doubleArray, size);
    displayArray(doubleArray, size);

    return 0;
}


