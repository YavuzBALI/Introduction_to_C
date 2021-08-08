#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct treenode{
	struct treenode *leftPtr;
	int data;
	struct treenode *rightPtr;
};
typedef struct treenode treeNode;
typedef treeNode *TreeNodePtr;


void addnode(TreeNodePtr *,int);//for insert a node at tree
void node(TreeNodePtr);//out put of tree

int main(){
	int i,choose;
	TreeNodePtr rootPtr=NULL;
	srand(time(NULL));
	
	for(i=0;i<=10;i++){
		choose=rand()%15;
		printf("%3d\n",choose);
		addnode(&rootPtr,choose);
	}
	printf("Output off tree node\n\n");
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
