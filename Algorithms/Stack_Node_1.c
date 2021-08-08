#include<stdio.h>
#include<stdlib.h>
struct stackNode {
 int data;
 struct stackNode *nextPtr;
};
typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;
void push(StackNodePtr *,int );
int pop( StackNodePtr * );
void printStack( StackNodePtr );
int main(){
	StackNodePtr startPtr=NULL;
	int choose,value;
	while(choose!=3){
	printf("1-Adding integer.\n2-Delete integer.\n3-Exit.\n");
	printf("Make your choose:");
	scanf("%d",&choose);
		switch(choose){
			case 1:
				printf("Inpuu a value:");
				scanf("%d",&value);
				push(&startPtr,value);
				printStack(startPtr);
				break;
				case 2:
					pop(&startPtr);
					printStack(startPtr);
					break;
					default:
						printf("Wrong choose");
						break;
		}
		printf("Good Bye!!");
	}

}
void push( StackNodePtr *topPtr, int info ){//add a integer in stack
	StackNodePtr newPtr;
	newPtr=malloc(sizeof(StackNode));//creat new memory
	if(newPtr!=NULL){
		newPtr->data=info;
		newPtr->nextPtr=*topPtr;
		*topPtr=newPtr;
	}
	else
	printf("not enough memory\n");
}
int pop( StackNodePtr *topPtr ){//delete a integer in stack
	StackNodePtr tempPtr;
	int integer;
	tempPtr=*topPtr;
	integer=(*topPtr)->data;
	*topPtr=(*topPtr)->nextPtr;
	free(tempPtr);
	return integer;
}
void printStack( StackNodePtr topPtr ){//print on the screen
	if(topPtr==NULL)
	printf("Empty.");
	else{
		printf("Stack:\n");
		while(topPtr!=NULL){
			printf("%d->",topPtr->data);
			topPtr=topPtr->nextPtr;
		}
		printf("NULL\n\n");
	}
}



