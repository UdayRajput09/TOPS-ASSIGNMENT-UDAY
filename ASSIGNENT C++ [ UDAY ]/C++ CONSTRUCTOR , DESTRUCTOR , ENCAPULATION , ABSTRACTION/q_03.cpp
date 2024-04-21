//Q-3. Write a C++ program to create a class called Car that has private 
//member variables for company, model, and year. Implement member 
//functions to get and set these variables.

#include <iostream>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // initialize the Car object
    Car(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    // retrieve the company
    string getcomp() const {
        return company;
    }

    // set the company
    void setcomp(const string& c) {
        company = c;
    }

    // retrieve the model
    string getmodel() const {
        return model;
    }

    // set the model
    void setmodel(const string& m) {
        model = m;
    }

    // retrieve the year
    int getyear() const {
        return year;
    }

    // set the year
    void setyear(int y) {
        year = y;
    }
};

int main() {
    // Create an instance of Car
    Car obj("Audi", "A3", 2023);

    // display the car details
    cout<<"\nDetails:";
    cout<<"\nCompany: "<<obj.getcomp();
    cout<<"\nModel: "<<obj.getmodel();
    cout<<"\nYear: "<<obj.getyear();

    // Update the car details
    obj.setmodel("A3");
    obj.setyear(2023);

    // Display the updated details of the car
    cout<<"\nUpdated Details:";
    cout<<"\nCompany: "<<obj.getcomp();
    cout<<"\nModel: "<<obj.getmodel();
    cout<<"\nYear: "<<obj.getyear();

}

