#include <iostream>
using namespace std;

// Forward declaration of class
class Pair;

// Friend function declaration (outside the class)
int max(const Pair p);

// Class representing a pair of numbers
class Pair {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize the pair of numbers
    Pair(int a, int b) : num1(a), num2(b) {}

    // Declare max as a friend function of this class
    friend int max(const Pair p);
};

// Friend function definition (outside the class)
int max(const Pair p) {
    // Compare the two numbers and return the maximum
    return (p.num1 > p.num2) ? p.num1 : p.num2;
}

int main() {
    // Create a Pair object with two numbers
    Pair p(66, 92);

    // Call the friend function to find the maximum number
    int maxNumber = max(p);

    // Display the maximum number
    cout << "Maximum number: " << maxNumber << endl;
}

