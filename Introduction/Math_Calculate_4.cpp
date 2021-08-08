#include <stdio.h>
#include<stdlib.h>
int main (void)
{
 int exp,base;
 int product=1,i;
 printf("Enter integer base and exponent: ");// don't forget semicolon
 scanf("%d%d", &base,&exp);
 for (i=1;i<=exp;i++)/* if "i" do not increase in loop,loop goes ferevers 
 and must be "i<=exp"*/
 {
 product *= base;
 }

 printf ("%d to the power %d is: %d\n",base,exp,product);
 system("PAUSE");
 return 0;
}
