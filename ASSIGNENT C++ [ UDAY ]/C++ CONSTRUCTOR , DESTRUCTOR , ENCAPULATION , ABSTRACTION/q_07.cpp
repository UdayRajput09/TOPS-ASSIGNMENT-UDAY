#include <iostream>

using namespace std;

class Date {
private:
    int d;    // Day of the date
    int m;  // Month of the date
    int y;   // Year of the date

public:
    // Constructor to initialize the date
    Date(int day, int month, int year) 
    {
        d = day;
        m = month;
        y = year;
    }

    // Set the date
    void setDate(int day, int month, int year) {
        d = day;
        m = month;
        y = year;
    }

    // Get the day of the date
    int getDay() const {
        return d;
    }

    // Get the month of the date
    int getMonth() const {
        return m;
    }

    // Get the year of the date
    int getYear() const {
        return y;
    }

    // Validate if the date is valid
    bool isValidDate() const {
        if (m < 1 || m > 12)
            return false;

        if (d < 1 || d > 31)
            return false;

        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
            return false;

        if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                if (d > 29)
                    return false;
            } else {
                if (d > 28)
                    return false;
            }
        }

        return true;
    }
};

int main() {
    // Create a Date object
    Date obj(0, 0, 0);


    // Input the day, month, and year
    int inputDay, inputMonth, inputYear;
    cout << "Enter day: ";
    cin >> inputDay;
    cout << "Enter month: ";
    cin >> inputMonth;
    cout << "Enter year: ";
    cin >> inputYear;


    // Set the Date object with the input values
    obj.setDate(inputDay, inputMonth, inputYear);



    // Display the Date
    cout << "Date: " << obj.getDay() << "/" << obj.getMonth() << "/" << obj.getYear();

    // Validate the Date
    if (obj.isValidDate())
        cout << "\nValid date.";
    else
        cout << "\nInvalid date.";

}

