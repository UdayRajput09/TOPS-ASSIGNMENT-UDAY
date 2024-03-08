//2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
int main(){
	int num , i;
	
	for(i=0 ; i<5 ; i++){
		printf("\nEnter Number :");
		scanf("%d",&num);
		printf("Number is : %d",num);
	}	
}
