#include<stdio.h>
int triangular_number(int n)
{
	int results;
	results=(n*(n+1))/2;
	return results;
}
int main()
{
	int a,i=1;
	while(i==1)
	{
	printf("Enter a integear : "); scanf("%d",&a);
	printf("Triangular number %d is %d \n\a",a,triangular_number(a));
}
	return 0;
}

