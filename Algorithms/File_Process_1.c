#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
int main()
{
	double f_1,f_2;
	int i_1,i_2;
	FILE *file_pointer;// '*' need for pointer
	char file_name[SIZE]="mydata.txt";
	
	file_pointer=fopen(file_name,"w");//creating the file need 'w' 

	fprintf(file_pointer,"%lf %lf %d %d",23.556,-76e5,76,5);
	fclose(file_pointer);//for again opening file for readin,we need close
	file_pointer=fopen(file_name,"r");//reading the file need 'r'
	
	fscanf(file_pointer,"%lf%lf%d%d",&f_1,&f_2,&i_1,&i_2);//double is '%lf'
	
	
	printf("First output = %lf\n",f_1);
	printf("Second output = %lf\n",f_2);
	printf("Third output = %d\n",i_1);
	printf("Fourth output = %d\n",i_2);
	fclose(file_pointer);
	return 0;
}
