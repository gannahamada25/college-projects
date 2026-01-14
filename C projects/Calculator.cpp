#include<stdio.h>

int main(){
	int num1 , num2 , result , op ;
	
	printf("Enter first number : ");
	scanf("%d",&num1);
	
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	printf("1.Add \n2.Subtrac\n3.Multiply\n4.Division\n");
	
	printf("Enter number of operator : ");
	scanf("%d",&op);
	
	if(op==1){
		result = num1 + num2 ;
		printf("result = %d\n", result);
	}
	else if(op==2){
		result = num1 - num2 ;
		printf("result = %d\n", result);
	}
	else if(op==3){
		result = num1 * num2 ;
		printf("result = %d\n", result);
	}
	else if(op==4){
		if(num2==0){
			printf("Error! Division By Zero \n");
		}
		else{
			result = num1 / num2 ;
			printf("result = %d\n", result);
		}
	}
	
	return 0;
}



