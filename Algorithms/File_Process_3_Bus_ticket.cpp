#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct seatdata{
	int seatnum;
	char name[15];
	char surname[15];
	char gender[1];
};
int enterchoice(void);
void textfile(FILE *seatsptr);
void updatereservation(FILE *fptr);
void newreservation(FILE *fptr);
void deletereservation(FILE *fptr);

 int enterchoice(void)
{
	unsigned int menuchoice;
	printf("Enter your choice\n");
	printf("1- store  a formatted text file of seats reserved called seats.txt for printing\n");
	printf("2- update a reservation\n");
	printf("3- add a new reservation\n");
	printf("4- delete a reservation\n");
	printf("5- end program\n");
	printf("?");
	scanf("%u",&menuchoice);
	return menuchoice;
}
void textfile(FILE *seatsptr)
{
	FILE *aptr;
	int result;
	struct seatdata seats={0,"","",""};
	if((aptr=fopen("seats.txt","w"))==NULL){    
		printf("File cold not be opened.");
	}
	else
	{
		rewind(seatsptr);  //
		fprintf(aptr,"%-6s%-16s%-11s%10s\n","No","Name","Surname","Gender"); //Yapýlandýrýlmýþ verileri dosyaya yazar.
		while(!feof(seatsptr))   //feof Dosya sonu geldiðinde doðru bir deðer verir.
		{
		result=fread(&seats,sizeof(struct seatdata),1,seatsptr);
		if(result!=0 && seats.seatnum!=0){
			fprintf(aptr,"%-6d%-16s%-11s%10s\n",seats.seatnum,seats.name,seats.surname,seats.gender);
		}	
		}
		fclose(aptr);
	}
}
void updatereservation(FILE *fptr)
{
    int b;
	struct seatdata seats={0,"","",""};
	printf("enter seat number to update: ");
	scanf("%d",&b);
	fseek(fptr,(b-1)*sizeof(struct seatdata),SEEK_SET);
	fread(&seats,sizeof(struct seatdata),1,fptr);
	if(seats.seatnum==0){
		printf("%d Seats is empty.\n",b);
	}
	else
	{
		printf("%-6d%-16s%-11s%10s\n",seats.seatnum,seats.name,seats.surname,seats.gender);
		printf("Enter new name, surname and gender informations: ");
		scanf("%s %s %s",seats.name,seats.surname,seats.gender);
		printf("%-6d%-16s%-11s%10s\n",seats.seatnum,seats.name,seats.surname,seats.gender);
		fseek(fptr,(b-1)*sizeof(struct seatdata),SEEK_SET);
		fwrite(&seats,sizeof(struct seatdata),1,fptr);
	}
}
void newreservation(FILE *fptr)
{
	struct seatdata seats={0,"","",""};
	unsigned int c;
	printf("enter new seat number to reserve: ");
	scanf("%d",&c);
	fseek(fptr,(c-1)*sizeof(struct seatdata),SEEK_SET);
	fread(&seats,sizeof(struct seatdata),1,fptr);
	if(seats.seatnum!=0){
		printf("Seats %d is full\n",seats.seatnum);
	}
	else
	{
		printf("enter name, surname and gender: ");
		scanf("%14s%9s%s",seats.name,seats.surname,seats.gender);
		seats.seatnum=c;
		fseek(fptr,(seats.seatnum-1)*sizeof(struct seatdata),SEEK_SET);
		fwrite(&seats,sizeof(struct seatdata),1,fptr);
	}
}
void deletereservation(FILE *fptr)
{
	struct seatdata seats;
	struct seatdata d={0,"","",""};
	unsigned int e;
	printf("enter seat number to delete:");
	scanf("%d",&e);
	fseek(fptr,(e-1)*sizeof(struct seatdata),SEEK_SET);
	fread(&seats,sizeof(struct seatdata),1,fptr);
	if(seats.seatnum==0){
		printf("Seats %d did not reserve yet .\n",e);
	}
	else
	{
		fseek(fptr,(e-1)*sizeof(struct seatdata),SEEK_SET); //dosyadaki belirli bir byte'ý bulur.
		fwrite(&d,sizeof(struct seatdata),1,fptr);
	}
}


int main()
{
	FILE *cfptr;
	unsigned int choice;
	if((cfptr=fopen("bus.dat","rb+"))==NULL){
		printf("File could not be opened");
	}
	else
	{
	while((choice=enterchoice())!=5){
	switch(choice){
	case 1:
	textfile(cfptr);
    break;
	case 2:
	updatereservation(cfptr);
	break;
	case 3: 
	newreservation(cfptr);
	break;
	case 4:
	deletereservation(cfptr);
	break;
	case 5:
	exit(0);
	break;
	default:
	printf("Please input 1 between 5 numper"); 
	break;
	}
		}
		fclose(cfptr); 
	}
	getch ();
}


