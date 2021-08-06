#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c=1,b;
	float a=0,H;
	while(c<=5)
	{
		printf("Please enter number_%d >",c);
		scanf("%d",&b);
		c=c+1;
		a=a+(1.0/(float)b);
	}
	H=5/a;
	printf("Harmonic mean = %.3f",H);
}
