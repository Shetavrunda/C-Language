#include<stdio.h>
#include<string.h>

main(){
	
	char i,pass[20],a=0,b=0,c=0,d=0,length;
  
    printf("Create your password: ");
	gets(pass);
	
	for(i=0;i<length;i++){
		if(pass[i]>=65 && pass[i]<=90){
			a++;
		}
		else if(pass[i]>=97 && pass[i]<=122){
			b++;
		}
		else if(pass[i]>=48 && pass[i]<=57){
			c++;
		}
		else{
			d++;
		}
	}
	if(a>0 && c>0 && d>0 && b>0 && length>=6){
		printf("Your password is strong..............");
	}
	else{
		printf("Your password is not strong...........");
			}	
}
