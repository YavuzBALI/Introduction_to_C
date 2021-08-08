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
	
}
void fab(int *dizi){
    int i;
	for(i=0;i<=9;i++){
	if(*dizi<1){
	   *dizi=*dizi*-1;
		}
		printf("%d\t",*dizi);
		++dizi;
		}
	}

