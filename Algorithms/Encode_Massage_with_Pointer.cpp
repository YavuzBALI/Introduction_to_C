#include<stdio.h>
#include<stdlib.h>
int ceasarencoding(char *);/* Function prototype */

int main()
{
    char message[100];/* Message as char */
    char *sptr;/* Pointer as char */
    printf("Enter a message to encoded_Message: ");/* Asking encoded message from user */
    gets(message);/* Inputing message */
    sptr=message;/* Defining pointer as message */
    ceasarencoding(sptr);/* Usng function */
    return 0;
	}
	int ceasardecoding(char *sptr)/* Ceasardecoding message */
	{
	int i,shift=-2;/* Counter i and shift value */
	char ch;/* Any letter in message */
	for(i=0; *(sptr+i) != '\0';++i){/* For loop condition when message arrives null part */
        ch=*(sptr+i);/* defining char any letter of message */
        if(ch>='a' && ch<='z'){/* when letter between a and z */
            ch=ch+shift;/*Shift this letter with shift value */
            if(ch>'z'){
                ch=ch-'z'+'a'-1;/*start again */
            }
            *(sptr+i)=ch;
        }
        else if(ch>='A'&&ch<='Z'){/* Same operations for upper*/
            ch=ch+shift;
            if(ch>'Z'){
               ch=ch-'Z'+'A'-1;
            }
            *(sptr+i) = ch;
        }
    }
  	return printf("Decoded message: %s",sptr);/* Displaying message */    
}

