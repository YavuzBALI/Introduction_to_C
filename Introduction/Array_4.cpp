#include<stdio.h>
#include<stdlib.h>
int COV(int [],int []);
float average(int []);
int main()
{
	int res,x[5]={2,4,6,8,10},y[5]={6,12,18,24,30};
	float cov;
	res=COV(x,y);
	cov=(float)res/4;
	printf("Covariance= %f",cov);
	system("PAUSE");
	return 0;
	
	
}
float average(int c[]){
	int i,summ=0;
	float result;
	for(i=0;i<=4;i++){
		summ=summ+c[i];
	}
	result=summ/5;
	return result;
	}
int COV(int a[],int b[]){
	int i;
	float c,z,result,sum=0;
	c=average(a);
	z=average(b);
	for(i=0;i<=4;i++){
		sum=sum+((a[i]-c)*(b[i]-z));
	}
	return sum;
}
