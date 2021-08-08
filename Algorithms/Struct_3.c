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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	struct student isim={"",0};
	float total=0,personal=0;
	int i=0;
 FILE *cptr,*fPtr;
 if((cptr=fopen("name.dat","r"))==NULL || (fPtr=fopen("table.txt","w"))==NULL)
fscanf(cptr,"%s %d %d %d %d %d %d",isim.name,&isim.score1,&isim.score2,&isim.score3,&isim.score4,&isim.score5,&isim.score6);
fprintf(fPtr,"%-10s%-12s%-5s\n","NAME","SCORE","AVERAGE");
fprintf(fPtr,"%s\n","-----------------------------------------------------");
while(!feof(cptr)){
	i=i+1;
	fscanf(cptr,"%s %d %d %d %d %d %d",isim.name,&isim.score1,&isim.score2,&isim.score3,&isim.score4,&isim.score5,&isim.score6);
	personal=(isim.score1+isim.score2+isim.score3+isim.score4+isim.score5+isim.score6)/6;
	total=total+personal;
		fprintf(fPtr,"%s %d %d %d %d %d %d %.2f\n",isim.name,isim.score1,isim.score2,isim.score3,isim.score4,isim.score5,isim.score6,personal);
}
total=total/i;
fprintf(fPtr,"%s  %27.2f","Average",total);
fclose(cptr);
fclose(fPtr);
	
	return 0;
}
