//Question:10_Write a program to concatenate the two strings using Operator Overloading.


#include <iostream> // Include necessary header file for input/output operations.
#include <cstring> // Include necessary header file for string manipulation functions.
using namespace std;

// Define a class called Concatenator for concatenating two strings.
class Concatenator {
private:
    char *concatenatedString; // Pointer to store the concatenated string.

public:
    // Constructor to concatenate two strings and store the result.
    Concatenator(const char *str1, const char *str2) {
        // Allocate memory for the concatenated string.
        concatenatedString = new char[strlen(str1) + strlen(str2) + 1];
        
        // Concatenate the two input strings and store the result.
        strcpy(concatenatedString, str1); // Copy the first string.
        strcat(concatenatedString, str2); // Append the second string.
    }

    // Function to display the concatenated string.
    void display() {
        cout << "Concatenated String: " << concatenatedString << endl;
    }

    // Destructor to deallocate memory for the concatenated string.
    ~Concatenator() {
        delete[] concatenatedString; // Free the dynamically allocated memory.
    }
};

// Main function
int main() {
    const char *string1 = "Hello, ";
    const char *string2 = "world!";

    // Create a Concatenator object to concatenate the two strings.
    Concatenator concatenator(string1, string2);
    concatenator.display(); // Display the concatenated string.

    return 0; // Indicate successful execution of the program.
}


