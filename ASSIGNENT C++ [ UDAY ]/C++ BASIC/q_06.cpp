//Question:6_Write a C++ program to create a class called Person that has private member variables for name, age and country. 
//Implement member functions to set and get the values of these variables.
			
#include<iostream> // Include necessary header file for input/output operations.
#include<string> // Include necessary header file for string manipulation.
using namespace std;

class Person {
private:
    string name; // Private member variable to store the name of the person.
    int age; // Private member variable to store the age of the person.
    string country; // Private member variable to store the country of the person.
public:
    // Method to set the name of the person.
    void setName(string n) {
        name = n;
    }
    
    // Method to set the age of the person.
    void setAge(int a) {
        age = a;
    }
    
    // Method to set the country of the person.
    void setCountry(string c) {
        country = c;
    }
    
    // Method to get the name of the person.
    string getName() {
        return name; // Return the name of the person.
    }
    
    // Method to get the age of the person.
    int getAge() {
        return age; // Return the age of the person.
    }
    
    // Method to get the country of the person.
    string getCountry() {
        return country; // Return the country of the person.
    }
};

int main() {
    Person p1; // Create an instance of the Person class.
    int userAge;
    string userName, userCountry;
    
    cout << "Enter the Name of Person: ";
    getline(cin, userName); // Input the name of the person from the user.
    
    cout << "Enter the Age of Person: ";
    cin >> userAge; // Input the age of the person from the user.
    
    cout << "Enter the Country of Person: ";
    cin.ignore(); // Ignore the newline character left in the input buffer.
    getline(cin, userCountry); // Input the country of the person from the user.
    
    p1.setName(userName); // Set the name of the person.
    p1.setAge(userAge); // Set the age of the person.
    p1.setCountry(userCountry); // Set the country of the person.
    
    cout << "Name: " << p1.getName() << endl; // Display the name of the person.
    cout << "Age: " << p1.getAge() << endl; // Display the age of the person.
    cout << "Country: " << p1.getCountry(); // Display the country of the person.
    
    return 0; // Indicate successful execution of the program.
}

