#include <iostream>
using namespace std;

class NumberSwap {
    // Declare the variables of NumberSwap Class
    int a, b;

public:
    // Define the parameterized constructor, for inputs
    NumberSwap(int num1, int num2) {
        a = num1;
        b = num2;
    }

    
    friend void swapNumbers(NumberSwap &);
};

// Define the swap function outside class scope
void swapNumbers(NumberSwap &numSwap) {

    cout << "\nBefore Swapping: " << numSwap.a << " , " << numSwap.b;

    // Swap operations with NumberSwap Class variables
    numSwap.a = numSwap.a + numSwap.b;
    numSwap.b = numSwap.a - numSwap.b;
    numSwap.a = numSwap.a - numSwap.b;

    cout << "\nAfter Swapping: " << numSwap.a << " , " << numSwap.b;
}

// Driver Code
int main() {
    // Declare and Initialize the NumberSwap object
    NumberSwap numbers(10, 20);
    swapNumbers(numbers);
    
}

