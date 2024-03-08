//14. Accept 5 numbers from user and find those numbers factorials


#include<stdio.h>

long long fact(int num){
	if(num == 0 || num == 1){
		return 1;
	}
	else{
		return num * fact (num - 1);
	}
}



int main(){
	int i , number[5];
	printf("Enter 5 numbers :\n");
	for(i = 0; i < 5; i++){
		printf("Number %d : ",i+1);
		scanf("%d",&number[i]);
	} 
	
	printf("\nfactorial \n");
	for(i = 0; i<5;i++){
		printf("factorial of %d = %lld\n",number[i],fact(number[i]));
	}
}




