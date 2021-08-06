#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum;
	printf("Please enter a value for a :");
	scanf("%d",&a);
	printf("Please enter a value for b :");
	scanf("%d",&b);
	sum=a+b;
	if(sum>0)
	{
		printf("Sum of a and b is positive");
	}
	else if(sum=0)
	{
		printf("Sum of a and b is equal at 0");
	}
	else
	{
		printf("sum of a and b is negative.");
	}
}
