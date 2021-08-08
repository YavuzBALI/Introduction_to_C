#include<stdio.h>
int main(){
//a)
int c = 0;
char first_string [26] ="0", second_string [26] = "1";//strigs must not  define what integer
//b)
printf ("%s\n%s%s\n", "a one-dimensional array of characters", "Algorithms ","and Programming");//not "''","""" is true.
//c)
char str[17] ="A string example";
printf("%s\n",str);//"%.4f" is integer pointer
//d)
char str2 [] = "That's No Way To Say Goodbye.";
char * pc = str2;
printf("%s",pc);// "&pc" show adress so that must be "pc"
//e)
char day[7] = "Friday";
printf ("%c\n", day[3]);//%s is for statement,not constitution
}

