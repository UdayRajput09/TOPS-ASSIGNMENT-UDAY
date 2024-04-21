//Q-1. Write a program to find the multiplication values and the cubic values using
//inline function

#include<iostream>

using namespace std;

// Inline function to calculate the multiplication of two numbers
inline int multi(int n1, int n2) {
    return n1 * n2;
}

// Inline function to calculate the cubic value of a number
inline int cub(int z) {
    return z * z * z;
}

int main() {
    int number1, number2;

    // Asking the user to input the first number
    cout <<"enter number 1:";
    cin >> number1;
    

    // Asking the user to input the second number
    cout <<"enter number 2:";
    cin >> number2;
    
    
    
    // Printing the multiplication value of the given numbers
    cout << "\nmultiplication:" <<multi(number1, number2);
    
    
    // Printing the cubic value of the first number
    cout << "\ncubic value of"<< number1 << " is :"<<cub(number1);
    
    
    // Printing the cubic value of the second number
    cout << "\ncubic value of " << number2 << " is :"<<cub(number2);
    

   
}

