#include <iostream>
using namespace std;

// Rectangle class
class Rect {
private:
    double len;
    double wid;

public:
    // Constructor to initialize length and width
    Rect(double l, double w) : len(l), wid(w) {}

    // Function to calculate the area of the rectangle
    double calcArea() const {
        return len * wid;
    }

    // Function to display the dimensions and area of the rectangle
    void display() const {
        cout << "Rectangle Dimensions - Length: " << len << " units, Width: " << wid << " units" << endl;
        cout << "Area of Rectangle: " << calcArea() << " square units" << endl;
    }
};

int main() {
    double l, w;

    // Prompt the user to enter dimensions of the rectangle
    cout << "Enter length of the rectangle: ";
    cin >> l;

    cout << "Enter width of the rectangle: ";
    cin >> w;

    // Create a Rectangle object with the given dimensions
    Rect rectangle(l, w);

    // Display the dimensions and area of the rectangle
    rectangle.display();
}

