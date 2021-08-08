#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct integer{
	int digit;
	struct integer *sPtr;//kendine dönüþlü yapý
};
typedef struct integer Integer;
typedef Integer *IntegerPtr;
int delet(IntegerPtr *,int);//prototype for task2 
int control(IntegerPtr);
void print_list(IntegerPtr);
int main(){
	IntegerPtr startPtr=NULL;
	int i=1,choose,chooseno;
	printf("The list with 20 random integer:\n");
	srand(time(NULL));
	for(i=1;i<=20;i++){
		IntegerPtr newPtr,beforePtr,nowPtr;
		
		newPtr=malloc(sizeof(Integer));//malloc can create space for new digit
		
		chooseno=rand()%100;//creating random digit
		if(newPtr!=NULL){
			newPtr->digit=chooseno;
			newPtr->sPtr=NULL;
			beforePtr=NULL;
			nowPtr=startPtr;
			while(nowPtr!=NULL&&chooseno>nowPtr->digit){
				beforePtr=nowPtr;
				nowPtr=nowPtr->sPtr;
			}
			if(beforePtr==NULL){
				newPtr->sPtr=startPtr;
				startPtr=newPtr;
			}
			else{
				beforePtr->sPtr=newPtr;
				newPtr->sPtr=nowPtr;
			}
		}
		
		
	}
	print_list(startPtr);
	printf("For delete 1 \n For exit 2\n");
	scanf("%d",&choose);
	while(choose!=2){
		switch(choose){
				case 1:
					
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
			int sum=0,c=0;
			float average;
			if(nowPtr==NULL){
				printf("The list is empty\n");
			}
			else{
				while(nowPtr!=NULL){
					printf("%3d",nowPtr->digit);
					sum=sum+nowPtr->digit;//calcuute summary
					c+=1;
					nowPtr=nowPtr->sPtr;
				}
				printf("\n");
				average=(float)sum/c;//calculute average
				printf("sum of integer:%d\n",sum);
				printf("average of the list:%f\n",average);
				printf("\n");
			}
		}
		 

