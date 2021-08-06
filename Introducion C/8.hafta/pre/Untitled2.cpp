#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age[10],sum=0,i,average;
	for(i=1;i<=10;i++)
	{
		printf("Enter 10 integer: ");
		scanf("%d",&age[i]);
		sum=sum+age[i];
	}
	average=sum/10;
	printf("Average is %d",average);
	}
