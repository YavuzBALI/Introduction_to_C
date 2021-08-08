#include<stdio.h>

int fact(int b)
{
	int i,result1=1;
	for(i=1;i<=b;i++)
	{
		result1=result1*i;
		
	}
	return result1;
}
void function_binomial(int n)
{
	int C,r,i,x,j;
	for(i=0;i<=n;i++){
	x=n-i;
		for(j=1;j<=x;j++){
				printf("    ");
			}
		
	   for(r=0;r<=i;r++)
	{
		C=fact(i)/(fact(r)*fact((i-r)));
		
		printf("%d       ",C);
	}
	printf("\n");
	}
}
int main()
{
	int a,i=1;
	while(i==1){
		printf("Enter a integear number:"); scanf("%d",&a);
		function_binomial(a);
		
			
	}
}
