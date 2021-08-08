#include<stdlib.h>
#include<stdio.h>
int main()
{

	float y,x;
	printf("Please enter x value :");  scanf("%f",&x);
	y=3/(5*x*x*x-3*x*x+7*x-2);
	printf("y is equal to :%.3f",y);
	return 0;
	
}
