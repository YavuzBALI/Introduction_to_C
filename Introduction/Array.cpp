#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={17,21,3,0,5};
	int b[]={17,21,3,0,5};
	int c[5],i;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&c[i]);
		printf("a[%d]=%d\n",i,a[i]);
		printf("b[%d]=%d\n",i,b[i]);
		printf("c[%d]=%d\n",i,c[i]);
	}
	return 0;
	system("PAUSE");
}
