//Q-7. Write a C++ Program to illustrates the use of Constructors in multilevel 
//inheritance
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string animalType;

    // Base class constructor
    Animal(string type) {
        animalType = type;
        cout << "Animal constructor called with type: " << animalType << endl;
    }
};

// Intermediate class inheriting from Animal
class Dog : public Animal {
public:
    string dogBreed;

    // Intermediate class constructor
    Dog(string breed, string type) : Animal(type) {
        dogBreed = breed;
        cout << "Dog constructor called with breed: " << dogBreed << endl;
    }
};

// Derived class inheriting from Dog
class GermanShepherd : public Dog {
public:
    // Derived class constructor
    GermanShepherd(string dogName) : Dog("Retriever", "Dog") {
        cout << "constructor called with name: " << dogName << endl;
    }
};

int main() {
    // Create an instance of GermanShepherd
    GermanShepherd myDog("charli");
}


