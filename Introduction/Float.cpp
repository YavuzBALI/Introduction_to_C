#include<stdlib.h>
#include<stdio.h>
int main()
{
	float average,mid1,mid2,fin;
	printf("Input first midter exam grade :"); scanf("%f",&mid1);
	printf("Input second midterm exam grade:"); scanf("%f",&mid2);
	printf("Input final exam grade: ");scanf("%f",&fin);
	average=(mid1*20/100)+(mid2*20/100)+(fin*60/100);
	printf("Student's average grade is %.1f ",average);
	return 0;
}
