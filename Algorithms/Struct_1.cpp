#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

struct member{
	int data1;
	char data2[32];
};

int main()
{
	struct member  s,*sp;
	sp=&s;
	s.data1=0;
	
	printf("please input DATA1 and DATA2 : \n");
	scanf("%d",sp->data1);
	fgets(sp->data2,sizeof(sp->data2),stdin);
	sp->data2[strlen(sp->data2)-1]='\0';
	
	printf("output DATA1 = %d \n", sp->data1);
	printf("output DATA2 = %s \n",sp->data2);
	return 0;
}
