#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
     int a,b,c;
    printf("Enter two number please >>");
   scanf("%X%X",&a,&b);
    c=a*b;
    printf("Octal Form : %o\n",c);
    printf("Decimal Form : %d\n",c);
    printf("Hexadecimal Form : %X\n",c);
    system("PAUSE");
    return 0;
}

