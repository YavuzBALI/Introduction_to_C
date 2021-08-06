#include<stdio.h>
#include<stdlib.h>
int main()
{
	int person_1,person_2,person_3,person_4,person_5,average;
	printf("please enter salary of person_1>");
	scanf("%d",&person_1);
	printf("please enter salary of person_2>");
	scanf("%d",&person_2);
	printf("please enter salary of person_3>");
	scanf("%d",&person_3);
	printf("please enter salary of person_4>");
	scanf("%d",&person_4);
	printf("please enter salary of person_5>");
	scanf("%d",&person_5);
	
	average=(person_1+person_2+person_3+person_4+person_5)/5;
	printf("person_1 has %s salary\n",average<=person_1?"Good":"Bad");
	printf("person_1 has %s salary\n",average<=person_2?"Good":"Bad");
	printf("person_1 has %s salary\n",average<=person_3?"Good":"Bad");
	printf("person_1 has %s salary\n",average<=person_4?"Good":"Bad");
	printf("person_1 has %s salary\n",average<=person_5?"Good":"Bad");
	
}
