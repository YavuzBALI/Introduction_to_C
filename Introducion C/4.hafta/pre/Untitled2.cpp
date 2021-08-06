#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int grade;
	
	
	printf("Please enter the grade: ");  //ask a number from user keyboard
	scanf("%d",&grade); //scan the number to address of grade
	printf("\n");
	
	switch(grade>=90){ //first switch case statement for compare the grade
		case 1: printf("%d=AA\n",grade); break;
		case 0:
	switch(grade>=85){ //second switch case statement for compare the grade
		case 1: printf("%d=BA\n",grade); break;
		case 0:
	switch(grade>=80){ //third switch case statement for compare the grade		case 1: printf("%d=BB\n",grade); break;
		case 0:
	switch(grade>=75){ //fourth switch case statement for compare the grade
		case 1: printf("%d=CB\n",grade); break;
		case 0:
	switch(grade>=70){ //fifth switch case statement for compare the grade
		case 1: printf("%d=CC\n",grade); break;
		case 0:
	switch(grade>=65){ //sixth switch case statement for compare the grade
		case 1: printf("%d=DC\n",grade); break;
		case 0:	
	switch(grade>=60){ //seventh switch case statement for compare the grade
		case 1: printf("%d=DD\n",grade); break;
		case 0:
	switch(grade>=55){ //eightht switch case statement for compare the grade
		case 1: printf("%d=FD\n",grade); break;
	}
	default: printf("%d=FF\n",grade); break; // default if these 7 statement is false,follow out the condition 
	}
	}
	}
	}
	}
	}
	}

	return 0;
}

