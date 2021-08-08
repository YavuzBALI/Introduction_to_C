#include<stdio.h>
#include<stdlib.h>

struct bus {
       char ID[10];
       char surname[10];
       }buss[25];

int main(){
int j,i=0,seats,del,seat[25],choose;
for(j=0;j<=24;j++){
                   seat[j]=0;}
                   
while(i==0){
          printf("0 : Exist \n1 : Add new reservetion\n2 : Delete available reservation\n3 : Show available seats\n4 : Show reserved seats\n");
          printf("Please choose the number of the process you want to realized: ");
          scanf("%d",&choose);
          switch(choose)
            {
                          case 0:
                               i=1;
                               break;
                          case 1:
                               printf("------------Add new reservation------------\n");
                                printf("Enter Seat number:");
                                scanf("%d",&seats);
                                seat[seats]=1;
                                printf("Enter Seat name:");
                                scanf("%s",buss[seats].ID);
                                printf("Enter Seat surename:");
                                scanf("%s",buss[seats].surname);
                                printf("--------------------------------\nSeat number %d is seccesfully reserved\n-------------------------------------------------\n",seats);
                                break;
                                case 2:
                                printf("Please enter seat which will be cancelled :");
                                scanf("%d",&del);
                                seat[del]=0;
                                break;
                                case 3:
                                      printf("Available seats :\n");
                                      for(j=0;j<=24;j++){
                                            if(seat[j]==0){printf("->%d\n",j);}}
                                            break;
                                case 4:
                                      printf("Available seats :\n");
                                      for(j=0;j<=24;j++){
                                            if(seat[j]==1){printf("->%d\n",j);}}
                                            break;
                                                  
                                default:
                                        printf("!!!!!Wrong login.Please try again!!!!");
                                        }
                                        }
                                        return 0;
                                        }
