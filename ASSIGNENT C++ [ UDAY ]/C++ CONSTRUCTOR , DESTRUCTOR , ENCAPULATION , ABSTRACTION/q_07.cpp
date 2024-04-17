//Question:7_Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
//Include member functions to set and get these variables, as well as to validate if the date is valid.
			

#include <iostream> // Include necessary header file for input/output operations.
using namespace std;

// Define a class for representing a date.
class Date {
private:
    int day, month, year; // Private member variables to store the day, month, and year.

public:
    // Constructor to initialize the date with given values.
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Method to set the date.
    void setDate(int d, int m, int y) {
        if (validDate(d, m, y)) { // Check if the provided date is valid.
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date!" << endl; // Display error message for invalid date.
        }
    }

    // Method to get the day of the date.
    int getDay() {
        return day; // Return the day.
    }

    // Method to get the month of the date.
    int getMonth() {
        return month; // Return the month.
    }

    // Method to get the year of the date.
    int getYear() {
        return year; // Return the year.
    }

private:
    // Method to validate the date.
    bool validDate(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1 || d > 31) { // Check if month and day are within valid range.
            return false;
        }

        if ((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30)) { // Check for months with 30 days.
            return false;
        }

        if (m == 2) { // Check for February.
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) { // Check for leap year.
                if (d > 29) { // February has maximum 29 days in a leap year.
                    return false;
                }
            } else {
                if (d > 28) { // February has maximum 28 days in a non-leap year.
                    return false;
                }
            }
        }

        return true; // Return true if the date is valid.
    }
};

int main() {
    int userDay, userMonth, userYear;

    // Input day, month, and year from the user.
    cout << "Enter day: ";
    cin >> userDay;

    cout << "Enter month: ";
    cin >> userMonth;

    cout << "Enter year: ";
    cin >> userYear;

    Date myDate(01, 01, 2024); // Create a Date object with default values.
    myDate.setDate(userDay, userMonth, userYear); // Set the provided date.

    // Display the day, month, and year of the date.
    cout << "Day: " << myDate.getDay() << endl;
    cout << "Month: " << myDate.getMonth() << endl;
    cout << "Year: " << myDate.getYear() << endl;

    return 0; // Indicate successful execution of the program.
}


