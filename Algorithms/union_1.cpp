#include<stdio.h>
#include<stdlib.h>

union yavuz{
      int x;
      float y;
      char z;
      };

int main(){
    union yavuz a;
    printf("x is : ");
    scanf("%d",&a.x);
     printf("y is : ");
    scanf("%f",&a.y);
     printf("z is : ");
    scanf("%s",&a.z);
    
    printf("Adress of x= %x \nAdress of y= %x\nAdress of z= %x\n",&a.x,&a.y,&a.z);
    printf("%d",sizeof(a));
    system("PAUSE");
    return 0;

}
