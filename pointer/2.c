#include<stdio.h>

void main(){
	
	int n;
	printf("Enter the length of Array:");
	scanf("%d",&n);
	
	int i,a[n];
	int *ptr;
	ptr=a;
	for(i=0;i<n;i++){
		
		printf("Enter a[%d]: ",i);
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<n;i++){
		
		printf("a[%d]:%d\n",i,*(ptr+i));
	}
	for(i=0;i<n;i++){
		printf("%d",*(ptr+i)**(ptr+i));
	}
	

}