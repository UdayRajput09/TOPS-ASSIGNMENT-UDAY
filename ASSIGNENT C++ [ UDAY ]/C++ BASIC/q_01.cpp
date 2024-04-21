//Q-1 WAP to create simple calculator using class

#include<iostream>

using namespace std;

class Calculator{
	
	public:
		// Function for addition
		int add(int num1,int num2){
			return(num1 + num2);
		}
		
		// Function for subtraction
		int sub(int num1,int num2){
			return(num1 - num2);
		}
		
		// Function for multiplication
		int mul(int num1,int num2){
			return(num1*num2);
		}
		
		// Function for division
		float div(float num1,float num2){
			if(num2 == 0){
				cout<<"Invalid number "<<endl;
			}
			else{
				return (num1 / num2);
			}
		}
};

int main(){
	Calculator obj;
	int num1,num2;
	int ch;
	
	// Input from the user
	cout<<"\n---------Calculator---------";
	cout<<"\nEnter Number One : ";
	cin>>num1;
	
	cout<<"\nEnter Number Two :";
	cin>>num2;
	
	// Displaying options
	cout<<"\n--------Select Your Choice--------";
	cout<<"\n1. Addition";
	cout<<"\n2. Subtraction";
	cout<<"\n3. Multiplication";
	cout<<"\n4. Division";
	
	cout<<"\nSelect Your Choice(1-4)  :";
	cin>>ch;
	
	// Performing the selected operation
	switch(ch){
		case 1:
			cout<<"\nAddition is : "<<obj.add(num1,num2);
			break;
		
		case 2:
			cout<<"\nSubtraction is : "<<obj.sub(num1,num2);
			break;
		
		case 3:
			cout<<"\nMultiplication is : "<<obj.mul(num1,num2);
			break;
		
		case 4:
			cout<<"\nDivision is : "<<obj.div(num1,num2);
			break;
		
		default:
			cout<<"\nInvalid"<<endl;
			break;					
	}
}

