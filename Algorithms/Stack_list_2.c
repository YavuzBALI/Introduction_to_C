#include <stdio.h>
#include <stdlib.h>

struct stacklist{
	int value;
	struct stacklist *nextPtr;
};
typedef struct stacklist stackList;
typedef stackList *stacklistPtr;

void push(stacklistPtr *,char);
int pop(stacklistPtr *);
void print(stacklistPtr);
int main() {
	stacklistPtr stackPtr=NULL; 
	int choose,data;
	printf("Enter your choýice.\n1 to place on the stach\n2 to place off the stack.\n3 to dsplay\n4 quit\n");
	scanf("%d",&choose);
	while(choose!=4){
		switch(choose){
			case 1:
				printf("enter data:");
				scanf("%d",&data);
				push(&stackPtr,data);
				print(stackPtr);
				break;
				case 2:
					printf("%d popped off.",pop(&stackPtr));
					break;
					case 3:
						print(stackPtr);
						break;
						default:
							printf("Wrong choose.");
							break;
		}
	printf("Enter your choýice.\n1 to place on the stach\n2 to place off the stack.\n3 to dsplay\n4 quit\n");
	scanf("%d",&choose);
	}
	return 0;
}

void push(stacklistPtr *upPtr,char data){
	stacklistPtr newPtr;
	
	newPtr=malloc(sizeof(stackList));
	if(newPtr!=NULL){
		newPtr->value=data;
		newPtr->nextPtr=*upPtr;
		*upPtr=newPtr;
	}
	else
	printf("%d can not add",data);
}
int pop(stacklistPtr *upsPtr){
	stacklistPtr tempPtr;
	int pop;
	
	tempPtr=*upsPtr;
	pop=(*upsPtr)->value;
	*upsPtr=(*upsPtr)->nextPtr;
	free(tempPtr);
	return pop;
}
void print(stacklistPtr nowPtr){
	if(nowPtr==NULL)
	printf("stack is empty");
	else{
		printf("The stack in tabular form is:\n");
		printf("AdressOfTheNode  StackVale(data)  adressNextNode\n");
		while(nowPtr!=NULL){
		
		printf("%-18p %-15d %-18p\n",nowPtr,nowPtr->value,nowPtr->nextPtr);
		nowPtr=nowPtr->nextPtr;
	}
	}
}
