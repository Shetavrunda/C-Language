#include<stdio.h>

int fac(int n){
 if(n!=1){
 	 return n*fac(n-1);
 }	
 else{
 	return 1;
    }
}
void main(){
	
	int n,r;
	printf("Enter ending point: ");
	scanf("%d",&n);
	r=fac(n);
	printf("Factorial is : %d",r);
	
}

