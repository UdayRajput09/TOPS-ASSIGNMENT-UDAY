//Q-2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor

#include<iostream>

using namespace std;

class Calculator{
    private:
        float n1;
        float n2;
        
    public:
        Calculator(float num1,float num2){
            n1 = num1;
            n2 = num2;
        }
        
        // addition
        float add(){
            return n1 + n2;
        }
        
        // subtraction
        float sub(){
            return n1 - n2;
        }
        
        // multiplication
        float mul(){
            return n1 * n2;
        }
        
        // division
        float div(){
            if(n2 == 0){
                cout<<"\ndivision with 0 is not possible!!";
            }
            else{
                return n1 / n2;
            }
        }
};

int main(){
    
    float num1,num2;

    // taking input from user
    cout<<"\nenter number 1:";
    cin>>num1;
    
    cout<<"\nenter number 2:";
    cin>>num2;
    
    // Creating an instance of the Calculator class
    Calculator obj(num1,num2);
    
    // Performing arithmetic operations and displaying results
    cout<<"\naddition:"<<obj.add();
    cout<<"\nsubstraction :"<<obj.sub();
    cout<<"\nmultiplication :"<<obj.mul();
    cout<<"\ndivision :"<<obj.div();

}

