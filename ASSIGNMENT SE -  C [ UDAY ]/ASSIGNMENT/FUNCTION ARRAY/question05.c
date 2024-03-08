////5. WAP to take two Array input from user and sort them in ascending or 
////descending order as per user’s choice


#include<stdio.h>


int sort(int choice){
	int i , j;
	int arr[5] , temp;
	
	
	if(choice == 1){
		for(i=0;i<5;i++){
			printf("enter the array : %d",i);
			scanf("%d",&arr[i]);
		}
		
		for(i=0;i<5;i++){
			for(j=i+1;j<5;j++){
				if(arr[i]>arr[j]){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for(i=0;i<5;i++){
			printf("%d \t",arr[i]);
		}
	}
	
	
	else if(choice == 2){
		for(i=0;i<5;i++){
			printf("enter the array :",i);
			scanf("%d",&arr[i]);
		}
		
		for(i=0;i<5;i++){
			for(j=i+1;j<5;j++){
				if(arr[i]<arr[j]){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for(i=0;i<5;i++){
			printf("%d \t",arr[i]);
		}
	}
	
	else{
		printf("Invalid");
	}
	
}


int main(){
	int choice;
	printf("1. acsending \n");
	printf("2. decsending \n");
	printf("Enter choice :");
	scanf("%d",&choice);
	
	sort(choice);
	
}
