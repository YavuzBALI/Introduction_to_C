#include<stdio.h>
#include<stdlib.h>
struct treenode{
	struct treenode *leftPtr;
	int data;
	struct treenode *rightPtr;
};
typedef struct treenode treeNode;
typedef treeNode *TreeNodePtr;


void addnode(TreeNodePtr *,int);
void node(TreeNodePtr);

int main(){
	int i,choose;
	TreeNodePtr rootPtr=NULL;
	
	for(i=0;i<=6;i++){
		printf("Input integer:");
		scanf("%d",&choose);
		addnode(&rootPtr,choose);
	}
	printf("Output off tree node");
	node(rootPtr);
	
	return 0;
	}
	
	void addnode(TreeNodePtr *treePtr,int a){
		if(*treePtr==NULL){/*TreePtr is NULL*/
		*treePtr=malloc(sizeof(treeNode));
		if(*treePtr!=NULL){
			(*treePtr)->data=a;
			(*treePtr)->leftPtr=NULL;
			(*treePtr)->rightPtr=NULL;
		}
		else
		printf("%d could not added",a);
		}
		else{
			if(a<(*treePtr)->data)
			addnode(&((*treePtr)->leftPtr),a);
			else if(a>(*treePtr)->data)
			addnode(&((*treePtr)->rightPtr),a);
		}
	}
	
	void node(TreeNodePtr treePtr){
		if(treePtr!=NULL){
			printf("%3d",treePtr->data);
			node(treePtr->leftPtr);
			node(treePtr->rightPtr);
		}
	}
