#include<iostream>
using namespace std;

// Class for string concatenation
class ConcatenateStrings {
public:
    string text;

    // Constructor to initialize the string
    ConcatenateStrings(string str) {
        text = str;
    }

    // Operator overloading for concatenation
    string operator +(ConcatenateStrings obj) {
        return text + obj.text;
    }
};

int main() {
    // Create objects for strings
    ConcatenateStrings string1("Uday");
    ConcatenateStrings string2("Rajput");

    // Concatenate strings and print the result
    cout << "Concatenated string: " << string1 + string2;

    return 0;
}

