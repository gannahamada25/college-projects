#include<stdio.h>

int main(){
    int num , sum = 0 ;
    
    while(1){
    	
    	printf("Enter number (enter 0 to stop) : ");
    	scanf("%d",&num);
    	
    	if(num==0){
    		break;
		}
		sum += num ;
	}
    printf("sum = %d",sum);
    	
	return 0;
}



