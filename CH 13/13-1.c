#include<stdio.h>

void main(){
	
	FILE *fp1;
	int a;
	
	fp1 = fopen("C:\\Users\\123\\Desktop\\Vrunda.txt","r");
	
	fscanf(fp1,"%d",&a);
	
	fclose(fp1);
	
	FILE *fp2;
	
	fp2=fopen("?C:\\Users\\123\\Desktop\\fp2.txt","w");
	
	fprintf(fp2,"%d",a);
	
	fclose(fp2);
}