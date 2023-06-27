#include<stdio.h>

void div(){
	
	int a;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	if(a%3==0)
	{
		if(a%5==0)
		{
			printf("The given number is divisible by both 3 and 5: ");
		}
		else{
			printf("The given number is not divisible by both 3 and 5 :");
		}
		
	}

    else{
	printf("The given number is not divisible by both 3 and 5 : ");
    }
    
}
void main(){
	
	div();
}

