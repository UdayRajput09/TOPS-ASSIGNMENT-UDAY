#include <iostream>

using namespace std;

// Template function to sort an array of any type using bubble sort
template<typename T, size_t Size>
void SortArray(T (&arr)[Size]) {
    for (size_t i = 0; i < Size - 1; ++i) {
        for (size_t j = 0; j < Size - 1 - i; ++j) {
            // Perform comparison and swap using std::swap
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Template function to print the elements of an array of any type
template<typename T, size_t Size>
void PrintArray(const T (&arr)[Size]) {
    for (size_t i = 0; i < Size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example with an array of integers
    int numbers[] = {19, 6, 76, 12, 56};
    cout << "Before sorting (integers): ";
    PrintArray(numbers);

    // Sort the array of integers
    SortArray(numbers);

    cout << "After sorting (integers): ";
    PrintArray(numbers);
}

