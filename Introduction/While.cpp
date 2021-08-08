#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a,b,c,i=1;
	while(i==1){
		printf("Enter number for a:"); scanf("%d",&a);
		printf("Enter number for b:"); scanf("%d",&b);
		printf("Enter number for c:"); scanf("%d",&c);
		if(a<=b+c){
			if(b<=a+c){
				if(c<=a+b){
					i=0;
					printf("The values %d,%d and %d can form the three sides of a triangle\n",a,b,c);
				}
				else{
						printf("The values %d,%d and %d can not form the three sides of a triangel.\nPlease try again\n",a,b,c);
				}
			}
			else{
						printf("The values %d,%d and %d can not form the three sides of a triangel.\nPlease try again\n",a,b,c);
				}
		}
		else{
						printf("The values %d,%d and %d can not form the three sides of a triangel.\nPlease try again\n",a,b,c);
				}
}
if(b*b==a*a+c*c){
	printf("The triangle is a right-triangle");
}
else if(a*a==c*c+b*b){
	printf("The triangle is a right-triangle");
}
else if(c*c==b*b+a*a){
	printf("The triangle is a right-triangle");
}
else{
	printf("The triangle is not a right-triangle");
}
	return 0;
}
