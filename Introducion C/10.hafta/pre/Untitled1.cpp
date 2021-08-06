#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[]={0,7,3,1,4};
	int *p;
	p=A;
	printf("1)%d\n2)%d\n3)%d\n4)%d\n5)%d\n6)%d\n7)%d\n8)%d\n9)%d\n10)%d\n11)%d",*p,*p+2,*(p+2),&p,&p+1,p,A,&A[0],&A[0]+3,A+3,p+(*(p+4)-3));
    return 0;
}
