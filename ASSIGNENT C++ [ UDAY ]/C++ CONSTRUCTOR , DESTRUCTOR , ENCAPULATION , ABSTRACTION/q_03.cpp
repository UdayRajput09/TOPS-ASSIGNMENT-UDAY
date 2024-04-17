//Question:3_Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
//Implement member functions to get and set these variables.

#include<iostream> // Include necessary header file for input/output operations.
#include<string> // Include necessary header file for string manipulation.
using namespace std;

class Car {
private:
    string company, model, year; // Private member variables to store company, model, and year of the car.
public:
    // Method to set the company of the car.
    void setCompany(string c) {
        company = c;
    }

    // Method to set the model of the car.
    void setModel(string m) {
        model = m;
    }

    // Method to set the year of the car.
    void setYear(string y) {
        year = y;
    }

    // Method to get the company of the car.
    string getCompany() {
        return company; // Return the company of the car.
    }

    // Method to get the model of the car.
    string getModel() {
        return model; // Return the model of the car.
    }

    // Method to get the year of the car.
    string getYear() {
        return year; // Return the year of the car.
    }
};

int main() {
    Car c1; // Create an instance of the Car class.
    string userCompany, userModel, userYear;

    // Input car information from the user.
    cout << "Enter the Company Name: ";
    getline(cin, userCompany);

    cout << "Enter the Car Model: ";
    getline(cin, userModel);

    cout << "Enter the Year: ";
    getline(cin, userYear);

    // Set car information using setter methods.
    c1.setCompany(userCompany);
    c1.setModel(userModel);
    c1.setYear(userYear);

    // Display car information using getter methods.
    cout << "Car Company: " << c1.getCompany() << endl;
    cout << "Car Model: " << c1.getModel() << endl;
    cout << "Year: " << c1.getYear();

    return 0; // Indicate successful execution of the program.
}

