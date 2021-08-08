#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>

int main()
{
int MB;
printf("Please enter a MB value:");
scanf("%d",&MB);
if(MB>0 && MB <=1023)
        {
        printf("%d MB is equal to :\n------------------------------\n",MB);
        printf("%d MB= %12.3e Byte\n",MB,(MB*pow(2,20)));
   
        }
        if(MB>0 && MB <=1023)
        {
   
        printf("%d MB= %12.3e KB\n",MB,(MB*pow(2,10)));
      
        }
        if(MB>0 && MB <=1023)
        {
      
        printf("%d MB= %12.0f MB\n",MB,(MB*pow(2,0)));
    
        }if(MB>0 && MB <=1023)
        {
     
        printf("%d MB= %12.3e GB\n",MB,(MB/pow(2,10)));
       
        }if(MB>0 && MB <=1023)
        {
        printf("%d MB= %12.3e TB",MB,(MB/pow(2,20)));
        }
                  
                    else 
                             {
                                                     printf("%d MB is equal to:\n------------------------------\n",MB);
                                                     printf("%d MB= %12.3e Byte\n",MB,(MB*pow(2,20)));
                                                     printf("%d MB= %12.3e KB\n",MB,(MB*pow(2,10)));
                                                     printf("%d MB= %12lf MB\n",MB,(MB*pow(2,0)));
                                                     printf("%d MB= %12.4f GB\n",MB,(MB/pow(2,10)));
                                                     printf("%d MB= %12.3e TB\n",MB,(MB/pow(2,20)));
                             }                       
       
  
  system("PAUSE");	
  return 0;
}
