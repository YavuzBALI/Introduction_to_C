
#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[10];
	int  score1;
		int  score2;
			int  score3;
				int  score4;
					int  score5;
						int  score6;
	
};


int main(int argc, char *argv[]) {
 struct student isim={"",0};
 FILE *cptr;
 if((cptr=fopen("name.dat","w"))==NULL)
printf("amýna kodumun dosya dolu           \n");
else{
	printf("isim :\n");
	scanf("%s",&isim.name);
	printf("score :\n");scanf("%d %d %d %d %d %d",&isim.score1,&isim.score2,&isim.score3,&isim.score4,&isim.score5,&isim.score6);
	while(!feof(stdin))
	{
	fprintf(cptr,"%s %d %d %d %d %d %d",isim.name,isim.score1,isim.score2,isim.score3,isim.score4,isim.score5,isim.score6);
	printf("isim :\n");
	scanf("%s",&isim.name);
	printf("score :\n");scanf("%d %d %d %d %d %d",&isim.score1,&isim.score2,&isim.score3,&isim.score4,&isim.score5,&isim.score6);
	}
}
fclose(cptr);
	return 0;
}
