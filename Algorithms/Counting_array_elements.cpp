#include<stdio.h>
#include<stdlib.h>

int main(){
	char string[100];
	int i=1,j=0;
	printf("Input string : ");
	gets(string);
	while(string[i]!='\0'){
	if(string[i-1]=='r' && string[i]=='e'){
		j=j+1;
	}
	i=i+1;}
	printf("The string contains %d 're' string",j);
	return 0;
	}
