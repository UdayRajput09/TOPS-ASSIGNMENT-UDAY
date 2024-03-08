//1. Display This Information using printf
//a. Your Name
//b. Your Birth date
//c. Your Age
//d. Your Address

#import<stdio.h>

int main(){
	
	// Declare variables to store user input
	int date, month, year, age;
	char name[10], address[10];
	
	// Prompt user to enter their name
	printf("Enter your name : ");
	// Read the name input from the user
	scanf("%s", &name);
	
	// Prompt user to enter their birthdate
	printf("Enter your birthdate date-month-year (use - to separate date, month, year) : ");
	// Read the birthdate input from the user
	scanf("%d-%d-%d", &date, &month, &year);

	// Prompt user to enter their age
	printf("Enter your age : ");
	// Read the age input from the user
	scanf("%d", &age);
	
	// Prompt user to enter their address
	printf("Enter your address : ");
	// Read the address input from the user
	scanf("%s", &address);
	
	// Display the collected information using printf
	printf(" \n Your name is : %s ", name);
	printf(" \n Your birthdate is : %d-%d-%d", date, month, year);
	printf(" \n Your age is : %d", age);
	printf(" \n Your address is : %s", address);
	
	return 0; // Added return statement to indicate successful execution
}

