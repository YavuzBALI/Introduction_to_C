#include <stdio.h>
#include <stdlib.h>

struct stacklist{
	char value;
	struct stacklist *nextPtr;
};
typedef struct stacklist stackList;
typedef stackList *stacklistPtr;

void push(stacklistPtr *,char);
int pop(stacklistPtr *);
int main() {
	stacklistPtr stackPtr=NULL; 
	char s1[20],s2[20],s3[20];
	int i,j;
	printf("ýnput a string:");
	scanf("%s",s1);
	printf("The text is %s",s1);
    for(i=0;s1[i]!=NULL;i++){
    	push(&stackPtr,s1[i]);
	}
	for(j=0;j<=i;j++){
		s2[j]=pop(&stackPtr);
	}
	s2[j]=NULL;
	printf("The reverse text is: %s",s2);
	if(strcmp(s1,s2)==0){
		printf("the text is polindrom.");
	}
	else
	printf("The text is not polindrom");
	
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
}#include <stdio.h>
#include <stdlib.h>

struct stacklist{
	char value;
	struct stacklist *nextPtr;
};
typedef struct stacklist stackList;
typedef stackList *stacklistPtr;

void push(stacklistPtr *,char);
int pop(stacklistPtr *);
int main() {
	stacklistPtr stackPtr=NULL; 
	char s1[20],s2[20],s3[20];
	int i,j;
	printf("ýnput a string:");
	scanf("%s",s1);
	printf("The text is %s",s1);
    for(i=0;s1[i]!=NULL;i++){
    	push(&stackPtr,s1[i]);
	}
	for(j=0;j<=i;j++){
		s2[j]=pop(&stackPtr);
	}
	s2[j]=NULL;
	printf("The reverse text is: %s",s2);
	if(strcmp(s1,s2)==0){
		printf("the text is polindrom.");
	}
	else
	printf("The text is not polindrom");
	
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
}#include <stdio.h>
#include <stdlib.h>

struct stacklist{
	char value;
	struct stacklist *nextPtr;
};
typedef struct stacklist stackList;
typedef stackList *stacklistPtr;

void push(stacklistPtr *,char);
int pop(stacklistPtr *);
int main() {
	stacklistPtr stackPtr=NULL; 
	char s1[20],s2[20],s3[20];
	int i,j;
	printf("ýnput a string:");
	scanf("%s",s1);
	printf("The text is %s",s1);
    for(i=0;s1[i]!=NULL;i++){
    	push(&stackPtr,s1[i]);
	}
	for(j=0;j<=i;j++){
		s2[j]=pop(&stackPtr);
	}
	s2[j]=NULL;
	printf("The reverse text is: %s",s2);
	if(strcmp(s1,s2)==0){
		printf("the text is polindrom.");
	}
	else
	printf("The text is not polindrom");
	
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
