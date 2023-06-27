#include<stdio.h>

main(){
         char a[20];
        
         printf("Enter string:");
         scanf("%s",&a);
         
         int i;
         for(i=0;i<20;i++){
         	if(a[i]>=65 && a[i]<=90){
         		a[i]+=32;
			 }
		 }
		 printf("lower case: %s\n",a);
	
}
