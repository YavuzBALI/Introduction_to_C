#include<stdio.h>
#include<stdlib.h>
int main(){
     // a)
	 int a=200;
	 printf("%d-----%+d\n",a,a);
	 printf("%p\n");
     // b)
     int b=100;
     printf("%x\n",b);
     //c)
     char notp[100];
     printf("Input a string with character :");
	 for(int i=0;notp[i-1]!='p';i++){
	 scanf("%c",&notp[i]);
	 }
	  //d)
	   float d=1.23456;
	  printf("%-9.3f \n",d);
	  //e)
	  int h,m,s;
	  printf("Input the time 'hh:mm:ss'");
    scanf("%d%*c%d%*c%d%*c",&h,&m,&s);
    printf("hour:%d minute : %d second %d",h,m,s);
    
    return 0;
}
