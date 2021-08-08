#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
	char name[15],surname[15],number[15],result[15];
	int i=0;
	printf("Please enter your name:");
	scanf("%s",name);
	printf("Please enter your surname:");
	scanf("%s",surname);
	printf("Please enter your number:");
	scanf("%s",number);
	while(number[i]!='\0'){
	i=i+1;}
	strncpy(result,name,1);
	result[1]=surname[0];
	result[2]=surname[1];
    result[3]=number[i-3];
    result[4]=number[i-2];
    result[5]=number[i-1];
    printf("---result---\nUser ID= %s",result);
    return 0;
}
