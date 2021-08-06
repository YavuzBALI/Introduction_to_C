#include<stdio.h>
#include<stdlib.h>
void fab(int *);
int main()
{
	int a[10],i,j=10;
	for(i=0;i<=9;i++){
		printf("Input %d numbers:",j);
		scanf("%d",&a[i]);
		j=j-1;
	}
	printf("a=");
	for(i=0;i<=9;i++){
		printf("%d\t",a[i]);
	}
	printf("\na=");
	fab(a);
		for(i=0;i<=9;i++){
		printf("%d\t",a[i]);
	}
	
	
}
void fab(int *Ptr){
	while(*Ptr!='\0'){
	if(*Ptr<1){
	*Ptr=*Ptr*(-1);
		}
		++*Ptr;
	}
	}

