//8. Write a program to find out the max from given number (E.g., No: -1562 
//Max number is 6)


#include<stdio.h>
int main(){
	int num , digit , maxdigit = -1;
	
	printf("Enter Number :");
	scanf("%d",&num);
	
	while(num!=0){
		digit = num % 10 ;
		if(digit > maxdigit){
			maxdigit = digit;
		}
		num /= 10;
		
	}
	
	printf("Max Number is : %d",maxdigit);
}
