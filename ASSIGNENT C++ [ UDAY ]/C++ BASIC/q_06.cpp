//Q-6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>

using namespace std;

// Declaration of the Person class
class Person {
private:
    string name, country;
    int age;
    
public:
    // Setter function to set the member variables
    void Set(string n, string c, int a) {
        name = n;
        country = c;
        age = a;
    }
    
    // Getter function to print the member variables
    void get() {
        cout << "\nName :"<< name;
        cout << "\nCountry :"<< country;
        cout << "\nAge :"<<age;
    }
};

// Main function
main() {
    
    Person obj;
        
    obj.Set("Uday Rajput", "India", 19);

    obj.get();
}

