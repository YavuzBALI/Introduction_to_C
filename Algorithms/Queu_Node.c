#include <stdio.h>
#include <stdlib.h>

struct queuenode{
	char data;
	struct queuenode *nextPtr;
};
typedef struct queuenode queueNode;
typedef queueNode *queueNodePtr;
/*function protype*/
void print(queueNodePtr);
int empty(queueNodePtr);
int quitqueue(queueNodePtr *,queueNodePtr *);
void enterqueue(queueNodePtr *,queueNodePtr *,int);
void menu(void);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	queueNodePtr headPtr=NULL,tailPtr=NULL;
	int choice,a;
	menu();
	printf("Enter your choice:");
	scanf("%d",&choice);
	while(choice!=4){
		switch(choice){
			case 1:
				printf("PLEASE ENTER A INTEGER NUMBER TO ADD QUEUE:");
				scanf("%d",&a);
				enterqueue(&headPtr,&tailPtr,a);
				break;
				case 2:
					if(!empty(headPtr)){
						a=quitqueue(&headPtr,&tailPtr);
						printf("%d quit the queue.\n",a);
					}
					break;
				    case 3:
				    	print(headPtr);
				    	break;
				    	default:
				    		printf("Wrong choice.\n");
				    		menu();
				    		break;
		}
		printf("ENTER YOUR CHOÝCE:");
		scanf("%d",&choice);
	}
	printf("Good bye!!");
	return 0;
}
void menu(void){
	printf("-------QUEUE MENU------ :\n\n");
	printf("(1) ADD VAUE TO QUEUE\n"
	       "(2) DELETE FIRST ELEMENT\n"
		   "(3) SHOW THE ELEMENTS\n"
		   "(4) CLOSE THE PROGRAMME\n");
}
void enterqueue(queueNodePtr *headPtr,queueNodePtr *tailPtr,int b){
	queueNodePtr newPtr;
	newPtr=malloc(sizeof(queueNode));
	
	if(newPtr!=NULL){
		newPtr->data=b;
		newPtr->nextPtr=NULL;
		
		if(empty(*headPtr))
		*headPtr=newPtr;
		else
		(*tailPtr)->nextPtr=newPtr;
		
		*tailPtr=newPtr;
	}
	else
	printf("%d could not add",b);
}
int quitqueue(queueNodePtr *headPtr,queueNodePtr *tailPtr){
	int c;
	queueNodePtr tempPtr;
	c=(*headPtr)->data;
	tempPtr=*headPtr;
	*headPtr=(*headPtr)->nextPtr;
	
	if(*headPtr==NULL)
	tailPtr=NULL;
	
	free(tempPtr);
	return c;
}
int empty(queueNodePtr headPtr){
	return headPtr==NULL;
}
void print(queueNodePtr currentPtr){//for output of queue
	if(currentPtr==NULL)
	printf("Queue is empty.\n\n");
	else{
		printf("QUEUE HAS ELEMENTS:\n\n");
		while(currentPtr!=NULL){
			printf("%d\n",currentPtr->data);
			currentPtr=currentPtr->nextPtr;
		}
	}
}

