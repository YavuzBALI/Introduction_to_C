#include <stdio.h>
#include<stdlib.h>

int arrayX[2][2];
int multiMatrix(int array1[][2], int array2[][2]);



int main() {
	int arrayA[2][2], arrayB[2][2];
	printf("Input the elements of A matrix : ");
	for(int j=0;j<2;j++){
		for(int k=0;k<2;k++){
			scanf("%d",&arrayA[j][k]);
		}
	}
		printf("Input the elements of B matrix : ");
		
	
	for(int i=0;i<2;i++){
		for(int h=0;h<2;h++){
			scanf("%d",&arrayB[i][h]);
		}
	}
	
	multiMatrix(arrayA,arrayB);
	printf("Output matrix O                :");
	for(int j=0;j<2;j++){
		for(int k=0;k<2;k++){
			printf("%d,",arrayX[j][k]);
		}
	}
	
	
	
	return 0;
}

	int multiMatrix(int array1[][2], int array2[][2]){
		for(int i=0;i<2;i++){
			for(int h=0;h<2;h++){
				arrayX[i][h]=(array1[i][h])*(array2[i][h]);
			}
		}
		
		
		
	}

