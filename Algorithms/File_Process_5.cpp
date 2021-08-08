#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct integer{
	int digit;
	struct integer *sPtr;
};
typedef struct integer Integer;
typedef Integer *IntegerPtr;
void add(IntegerPtr *,int);
int delet(IntegerPtr *,int);
int control(IntegerPtr);
void print_list(IntegerPtr);
int main(){
	IntegerPtr startPtr=NULL;
	int i=1,choose,chooseno;
	printf("The list with 20 random integer:\n");
	srand(time(NULL));
	for(i=1;i<=20;i++){
		chooseno=rand()%100;
		add(&startPtr,chooseno);
	}
	print_list(startPtr);
	printf("For add 1\n For delete 2 \n For exit 3\n");
	scanf("%d",choose);
	while(choose!=3){
		switch(choose){
			case 1:
				printf("Input a integer:");
				scanf("%d",&chooseno);
				add(&startPtr,chooseno);
				printf("The list:");
				print_list(startPtr);
				break;
				case 2:
					if(!control(startPtr));
					printf("Input a integer for delete:");
					scanf("%d",&chooseno);
					
					if(delet(&startPtr,chooseno)){
						printf("%d is delete.\n",chooseno);
						printf("The list:");
						print_list(startPtr);
					}
					else
					printf("List is empty");
					break;
					default:
						printf("Error choose");
							printf("For add 1\n For delete 2 \n For exit 3\n");
							break;
						
			}
			printf("?");
			scanf("%d",&choose);
		}
		printf("Programe is end");
		return 0;
	}
	void add(IntegerPtr *cPtr,int number){
		IntegerPtr newPtr,beforePtr,afterPtr;
		
		newPtr=malloc(sizeof(Integer));
		
		if(newPtr!=NULL){
			newPtr->digit=number;
			newPtr->sPtr=NULL;
			
			beforePtr=NULL;
			afterPtr=*cPtr;
			while(afterPtr!=NULL&&number>afterPtr->digit){
				beforePtr=afterPtr;
				afterPtr=afterPtr->sPtr;
			}
			if(beforePtr==NULL){
				newPtr->sPtr=*cPtr;
				*cPtr=newPtr;
			}
			else{
				beforePtr->sPtr=newPtr;
				newPtr->sPtr=afterPtr;
			}
		}
		else
		 printf("%d is not complate\n",number);
		 }
		 int delet(IntegerPtr *kPtr,int number){
		 	IntegerPtr beforePtr,nowPtr,trivialPtr;
		 	if(number==(*kPtr)->digit){
		 		trivialPtr=*kPtr;
		 		*kPtr=(*kPtr)->sPtr;
		 		free(trivialPtr);
		 		return number;
			 }
			 else{
			 	beforePtr=*kPtr;
			 	nowPtr=(*kPtr)->sPtr;
			 	while(nowPtr!=NULL&&nowPtr->digit!=number){
			 		beforePtr=nowPtr;
			 		nowPtr=nowPtr->sPtr;
				 }
				 if(nowPtr!=NULL){
				 	trivialPtr=nowPtr;
				 	beforePtr->sPtr=nowPtr->sPtr;
				 	free(trivialPtr);
				 	return number;
				 }
			 }
			 return '\0';
		 }
		 int control(IntegerPtr bPtr){
		 	return bPtr==NULL;
		 }
		void print_list(IntegerPtr nowPtr){
			if(nowPtr==NULL){
				printf("The list is empty");
			}
			else{
				while(nowPtr!=NULL){
					printf("%2d",nowPtr->digit);
					nowPtr=nowPtr->sPtr;
				}
				
				
			}
		}
		 

