#include<stdio.h>

int main(){
	int grade ;
	
	printf("Enter grade (0-100): ");
	scanf("%d",&grade);
	
	switch(grade){
		
		case 85 ... 100 :
			printf("Exellent \n");
			break;
		
		case 75 ... 84 :
		    printf("Very Good \n");
			break;	
		
		case 65 ... 74 :
		    printf("Good \n");
			break;	
			
		case 50 ... 64 :	
			printf("Pass \n");
		    break;
		    
		case 0 ... 40 :
		    printf("Fail \n");
			break;
			
		defult :
			printf("invalid grade \n");
			break;	
	}

	
	return 0;
}



