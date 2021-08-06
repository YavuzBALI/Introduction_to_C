#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a[4],i,lg,sm;
  printf("Input 5 different integers:");  scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
  lg=a[0];  sm=a[0];
  for(i==0;i<=4;i++){
  if(lg<a[i]){
  	lg=a[i];
  }
  if(sm>a[i]){
  	sm=a[i];
  }
  }
  printf("largest is %d\n",lg);
  printf("Smallest is %d",sm);
}
